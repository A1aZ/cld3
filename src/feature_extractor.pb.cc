// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature_extractor.proto

#include "feature_extractor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_feature_5fextractor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_feature_5fextractor_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Parameter;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_feature_5fextractor_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_FeatureFunctionDescriptor;
}  // namespace protobuf_feature_5fextractor_2eproto
namespace chrome_lang_id {
class ParameterDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Parameter>
      _instance;
} _Parameter_default_instance_;
class FeatureFunctionDescriptorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FeatureFunctionDescriptor>
      _instance;
} _FeatureFunctionDescriptor_default_instance_;
class FeatureExtractorDescriptorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FeatureExtractorDescriptor>
      _instance;
} _FeatureExtractorDescriptor_default_instance_;
}  // namespace chrome_lang_id
namespace protobuf_feature_5fextractor_2eproto {
static void InitDefaultsParameter() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chrome_lang_id::_Parameter_default_instance_;
    new (ptr) ::chrome_lang_id::Parameter();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chrome_lang_id::Parameter::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Parameter =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsParameter}, {}};

static void InitDefaultsFeatureFunctionDescriptor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chrome_lang_id::_FeatureFunctionDescriptor_default_instance_;
    new (ptr) ::chrome_lang_id::FeatureFunctionDescriptor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chrome_lang_id::FeatureFunctionDescriptor::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_FeatureFunctionDescriptor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsFeatureFunctionDescriptor}, {
      &protobuf_feature_5fextractor_2eproto::scc_info_Parameter.base,}};

static void InitDefaultsFeatureExtractorDescriptor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chrome_lang_id::_FeatureExtractorDescriptor_default_instance_;
    new (ptr) ::chrome_lang_id::FeatureExtractorDescriptor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chrome_lang_id::FeatureExtractorDescriptor::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_FeatureExtractorDescriptor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsFeatureExtractorDescriptor}, {
      &protobuf_feature_5fextractor_2eproto::scc_info_FeatureFunctionDescriptor.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Parameter.base);
  ::google::protobuf::internal::InitSCC(&scc_info_FeatureFunctionDescriptor.base);
  ::google::protobuf::internal::InitSCC(&scc_info_FeatureExtractorDescriptor.base);
}

}  // namespace protobuf_feature_5fextractor_2eproto
namespace chrome_lang_id {

// ===================================================================

void Parameter::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Parameter::kNameFieldNumber;
const int Parameter::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Parameter::Parameter()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_feature_5fextractor_2eproto::scc_info_Parameter.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_lang_id.Parameter)
}
Parameter::Parameter(const Parameter& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.Parameter)
}

void Parameter::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Parameter::~Parameter() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.Parameter)
  SharedDtor();
}

void Parameter::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Parameter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Parameter& Parameter::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_feature_5fextractor_2eproto::scc_info_Parameter.base);
  return *internal_default_instance();
}


void Parameter::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.Parameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      value_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Parameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:chrome_lang_id.Parameter)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chrome_lang_id.Parameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_lang_id.Parameter)
  return false;
#undef DO_
}

void Parameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_lang_id.Parameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_lang_id.Parameter)
}

size_t Parameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.Parameter)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Parameter::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Parameter*>(&from));
}

void Parameter::MergeFrom(const Parameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.Parameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void Parameter::CopyFrom(const Parameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.Parameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Parameter::IsInitialized() const {
  return true;
}

void Parameter::Swap(Parameter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Parameter::InternalSwap(Parameter* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string Parameter::GetTypeName() const {
  return "chrome_lang_id.Parameter";
}


// ===================================================================

void FeatureFunctionDescriptor::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FeatureFunctionDescriptor::kTypeFieldNumber;
const int FeatureFunctionDescriptor::kNameFieldNumber;
const int FeatureFunctionDescriptor::kArgumentFieldNumber;
const int FeatureFunctionDescriptor::kParameterFieldNumber;
const int FeatureFunctionDescriptor::kFeatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FeatureFunctionDescriptor::FeatureFunctionDescriptor()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_feature_5fextractor_2eproto::scc_info_FeatureFunctionDescriptor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_lang_id.FeatureFunctionDescriptor)
}
FeatureFunctionDescriptor::FeatureFunctionDescriptor(const FeatureFunctionDescriptor& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      parameter_(from.parameter_),
      feature_(from.feature_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_type()) {
    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  argument_ = from.argument_;
  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.FeatureFunctionDescriptor)
}

void FeatureFunctionDescriptor::SharedCtor() {
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argument_ = 0;
}

FeatureFunctionDescriptor::~FeatureFunctionDescriptor() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.FeatureFunctionDescriptor)
  SharedDtor();
}

void FeatureFunctionDescriptor::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void FeatureFunctionDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FeatureFunctionDescriptor& FeatureFunctionDescriptor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_feature_5fextractor_2eproto::scc_info_FeatureFunctionDescriptor.base);
  return *internal_default_instance();
}


void FeatureFunctionDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.FeatureFunctionDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameter_.Clear();
  feature_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      type_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  argument_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FeatureFunctionDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:chrome_lang_id.FeatureFunctionDescriptor)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 argument = 3 [default = 0];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_argument();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &argument_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .chrome_lang_id.Parameter parameter = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_parameter()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_feature()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chrome_lang_id.FeatureFunctionDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_lang_id.FeatureFunctionDescriptor)
  return false;
#undef DO_
}

void FeatureFunctionDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_lang_id.FeatureFunctionDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string type = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type(), output);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional int32 argument = 3 [default = 0];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->argument(), output);
  }

  // repeated .chrome_lang_id.Parameter parameter = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parameter_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4,
      this->parameter(static_cast<int>(i)),
      output);
  }

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->feature_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      7,
      this->feature(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_lang_id.FeatureFunctionDescriptor)
}

size_t FeatureFunctionDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.FeatureFunctionDescriptor)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // required string type = 1;
  if (has_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());
  }
  // repeated .chrome_lang_id.Parameter parameter = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->parameter_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->parameter(static_cast<int>(i)));
    }
  }

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->feature_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->feature(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 6u) {
    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 argument = 3 [default = 0];
    if (has_argument()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->argument());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeatureFunctionDescriptor::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FeatureFunctionDescriptor*>(&from));
}

void FeatureFunctionDescriptor::MergeFrom(const FeatureFunctionDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.FeatureFunctionDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  parameter_.MergeFrom(from.parameter_);
  feature_.MergeFrom(from.feature_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_type();
      type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000004u) {
      argument_ = from.argument_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void FeatureFunctionDescriptor::CopyFrom(const FeatureFunctionDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.FeatureFunctionDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureFunctionDescriptor::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->feature())) return false;
  return true;
}

void FeatureFunctionDescriptor::Swap(FeatureFunctionDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FeatureFunctionDescriptor::InternalSwap(FeatureFunctionDescriptor* other) {
  using std::swap;
  CastToBase(&parameter_)->InternalSwap(CastToBase(&other->parameter_));
  CastToBase(&feature_)->InternalSwap(CastToBase(&other->feature_));
  type_.Swap(&other->type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(argument_, other->argument_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string FeatureFunctionDescriptor::GetTypeName() const {
  return "chrome_lang_id.FeatureFunctionDescriptor";
}


// ===================================================================

void FeatureExtractorDescriptor::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FeatureExtractorDescriptor::kFeatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FeatureExtractorDescriptor::FeatureExtractorDescriptor()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_feature_5fextractor_2eproto::scc_info_FeatureExtractorDescriptor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_lang_id.FeatureExtractorDescriptor)
}
FeatureExtractorDescriptor::FeatureExtractorDescriptor(const FeatureExtractorDescriptor& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      feature_(from.feature_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.FeatureExtractorDescriptor)
}

void FeatureExtractorDescriptor::SharedCtor() {
}

FeatureExtractorDescriptor::~FeatureExtractorDescriptor() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.FeatureExtractorDescriptor)
  SharedDtor();
}

void FeatureExtractorDescriptor::SharedDtor() {
}

void FeatureExtractorDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FeatureExtractorDescriptor& FeatureExtractorDescriptor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_feature_5fextractor_2eproto::scc_info_FeatureExtractorDescriptor.base);
  return *internal_default_instance();
}


void FeatureExtractorDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.FeatureExtractorDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  feature_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FeatureExtractorDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:chrome_lang_id.FeatureExtractorDescriptor)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_feature()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chrome_lang_id.FeatureExtractorDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_lang_id.FeatureExtractorDescriptor)
  return false;
#undef DO_
}

void FeatureExtractorDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_lang_id.FeatureExtractorDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->feature_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1,
      this->feature(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_lang_id.FeatureExtractorDescriptor)
}

size_t FeatureExtractorDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.FeatureExtractorDescriptor)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->feature_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->feature(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeatureExtractorDescriptor::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const FeatureExtractorDescriptor*>(&from));
}

void FeatureExtractorDescriptor::MergeFrom(const FeatureExtractorDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.FeatureExtractorDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  feature_.MergeFrom(from.feature_);
}

void FeatureExtractorDescriptor::CopyFrom(const FeatureExtractorDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.FeatureExtractorDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureExtractorDescriptor::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->feature())) return false;
  return true;
}

void FeatureExtractorDescriptor::Swap(FeatureExtractorDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FeatureExtractorDescriptor::InternalSwap(FeatureExtractorDescriptor* other) {
  using std::swap;
  CastToBase(&feature_)->InternalSwap(CastToBase(&other->feature_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string FeatureExtractorDescriptor::GetTypeName() const {
  return "chrome_lang_id.FeatureExtractorDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chrome_lang_id
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::chrome_lang_id::Parameter* Arena::CreateMaybeMessage< ::chrome_lang_id::Parameter >(Arena* arena) {
  return Arena::CreateInternal< ::chrome_lang_id::Parameter >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::chrome_lang_id::FeatureFunctionDescriptor* Arena::CreateMaybeMessage< ::chrome_lang_id::FeatureFunctionDescriptor >(Arena* arena) {
  return Arena::CreateInternal< ::chrome_lang_id::FeatureFunctionDescriptor >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::chrome_lang_id::FeatureExtractorDescriptor* Arena::CreateMaybeMessage< ::chrome_lang_id::FeatureExtractorDescriptor >(Arena* arena) {
  return Arena::CreateInternal< ::chrome_lang_id::FeatureExtractorDescriptor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)