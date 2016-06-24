/* Copyright 2016 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "third_party/cld_3/src/embedding_feature_extractor.h"

#include <stddef.h>
#include <vector>

#include "third_party/cld_3/src/feature_extractor.h"
#include "third_party/cld_3/src/feature_types.h"
#include "third_party/cld_3/src/task_context.h"
#include "third_party/cld_3/src/utils.h"

namespace chrome_lang_id {

void GenericEmbeddingFeatureExtractor::Setup(TaskContext *context) {
  // Don't use version to determine how to get feature FML.
  string features_param = ArgPrefix();
  features_param += "_features";
  const string features = context->Get(features_param, "");
  const string embedding_names =
      context->Get(GetParamName("embedding_names"), "");
  const string embedding_dims =
      context->Get(GetParamName("embedding_dims"), "");
  LOG(INFO) << "Features: " << features;
  LOG(INFO) << "Embedding names: " << embedding_names;
  LOG(INFO) << "Embedding dims: " << embedding_dims;
  embedding_fml_ = utils::Split(features, ';');
  add_strings_ = context->Get(GetParamName("add_varlen_strings"), false);
  embedding_names_ = utils::Split(embedding_names, ';');
  for (const string &dim : utils::Split(embedding_dims, ';')) {
    embedding_dims_.push_back(utils::ParseUsing<int>(dim, utils::ParseInt32));
  }
}

void GenericEmbeddingFeatureExtractor::Init(TaskContext *context) {}

vector<vector<SparseFeatures>> GenericEmbeddingFeatureExtractor::ConvertExample(
    const vector<FeatureVector> &feature_vectors) const {
  // Extract the features.
  vector<vector<SparseFeatures>> sparse_features(feature_vectors.size());
  string description;
  for (size_t i = 0; i < feature_vectors.size(); ++i) {
    // Convert the nlp_parser::FeatureVector to dist belief format.
    sparse_features[i] =
        vector<SparseFeatures>(generic_feature_extractor(i).feature_types());

    for (int j = 0; j < feature_vectors[i].size(); ++j) {
      const FeatureType &feature_type = *feature_vectors[i].type(j);
      const FeatureValue value = feature_vectors[i].value(j);

      // TODO(chrisalberti): remove this string operation. This is too costly to
      // be done every time we extract a feature.
      const bool is_continuous =
          feature_type.name().find("continuous") != string::npos;
      const int64 id = is_continuous ? FloatFeatureValue(value).id : value;
      const int base = feature_type.base();
      if (id >= 0) {
        sparse_features[i][base].add_id(id);
        if (is_continuous) {
          sparse_features[i][base].add_weight(FloatFeatureValue(value).weight);
        }
        if (add_strings_) {
          description = feature_type.name();
          description += "=";
          description += feature_type.GetFeatureValueName(id);
          sparse_features[i][base].add_description(description);
        }
      }
    }
  }

  return sparse_features;
}

}  // namespace chrome_lang_id