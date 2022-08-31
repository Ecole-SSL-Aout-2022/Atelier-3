// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_wrapper.proto

#include "messages_robocup_ssl_wrapper.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_messages_5frobocup_5fssl_5fdetection_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_messages_5frobocup_5fssl_5fdetection_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_SSL_DetectionFrame;
}  // namespace protobuf_messages_5frobocup_5fssl_5fdetection_2eproto
namespace protobuf_messages_5frobocup_5fssl_5fgeometry_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_messages_5frobocup_5fssl_5fgeometry_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_SSL_GeometryData;
}  // namespace protobuf_messages_5frobocup_5fssl_5fgeometry_2eproto
class SSL_WrapperPacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SSL_WrapperPacket>
      _instance;
} _SSL_WrapperPacket_default_instance_;
namespace protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto {
static void InitDefaultsSSL_WrapperPacket() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_SSL_WrapperPacket_default_instance_;
    new (ptr) ::SSL_WrapperPacket();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SSL_WrapperPacket::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_SSL_WrapperPacket =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSSL_WrapperPacket}, {
      &protobuf_messages_5frobocup_5fssl_5fdetection_2eproto::scc_info_SSL_DetectionFrame.base,
      &protobuf_messages_5frobocup_5fssl_5fgeometry_2eproto::scc_info_SSL_GeometryData.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SSL_WrapperPacket.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SSL_WrapperPacket, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SSL_WrapperPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SSL_WrapperPacket, detection_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SSL_WrapperPacket, geometry_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::SSL_WrapperPacket)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SSL_WrapperPacket_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "messages_robocup_ssl_wrapper.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\"messages_robocup_ssl_wrapper.proto\032$me"
      "ssages_robocup_ssl_detection.proto\032#mess"
      "ages_robocup_ssl_geometry.proto\"`\n\021SSL_W"
      "rapperPacket\022&\n\tdetection\030\001 \001(\0132\023.SSL_De"
      "tectionFrame\022#\n\010geometry\030\002 \001(\0132\021.SSL_Geo"
      "metryData"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 209);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_robocup_ssl_wrapper.proto", &protobuf_RegisterTypes);
  ::protobuf_messages_5frobocup_5fssl_5fdetection_2eproto::AddDescriptors();
  ::protobuf_messages_5frobocup_5fssl_5fgeometry_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto

// ===================================================================

void SSL_WrapperPacket::InitAsDefaultInstance() {
  ::_SSL_WrapperPacket_default_instance_._instance.get_mutable()->detection_ = const_cast< ::SSL_DetectionFrame*>(
      ::SSL_DetectionFrame::internal_default_instance());
  ::_SSL_WrapperPacket_default_instance_._instance.get_mutable()->geometry_ = const_cast< ::SSL_GeometryData*>(
      ::SSL_GeometryData::internal_default_instance());
}
void SSL_WrapperPacket::clear_detection() {
  if (detection_ != NULL) detection_->Clear();
  clear_has_detection();
}
void SSL_WrapperPacket::clear_geometry() {
  if (geometry_ != NULL) geometry_->Clear();
  clear_has_geometry();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SSL_WrapperPacket::kDetectionFieldNumber;
const int SSL_WrapperPacket::kGeometryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SSL_WrapperPacket::SSL_WrapperPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::scc_info_SSL_WrapperPacket.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:SSL_WrapperPacket)
}
SSL_WrapperPacket::SSL_WrapperPacket(const SSL_WrapperPacket& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_detection()) {
    detection_ = new ::SSL_DetectionFrame(*from.detection_);
  } else {
    detection_ = NULL;
  }
  if (from.has_geometry()) {
    geometry_ = new ::SSL_GeometryData(*from.geometry_);
  } else {
    geometry_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:SSL_WrapperPacket)
}

void SSL_WrapperPacket::SharedCtor() {
  ::memset(&detection_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&geometry_) -
      reinterpret_cast<char*>(&detection_)) + sizeof(geometry_));
}

SSL_WrapperPacket::~SSL_WrapperPacket() {
  // @@protoc_insertion_point(destructor:SSL_WrapperPacket)
  SharedDtor();
}

void SSL_WrapperPacket::SharedDtor() {
  if (this != internal_default_instance()) delete detection_;
  if (this != internal_default_instance()) delete geometry_;
}

void SSL_WrapperPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SSL_WrapperPacket::descriptor() {
  ::protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SSL_WrapperPacket& SSL_WrapperPacket::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::scc_info_SSL_WrapperPacket.base);
  return *internal_default_instance();
}


void SSL_WrapperPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:SSL_WrapperPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(detection_ != NULL);
      detection_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(geometry_ != NULL);
      geometry_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SSL_WrapperPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SSL_WrapperPacket)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .SSL_DetectionFrame detection = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_detection()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .SSL_GeometryData geometry = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_geometry()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SSL_WrapperPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SSL_WrapperPacket)
  return false;
#undef DO_
}

void SSL_WrapperPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SSL_WrapperPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .SSL_DetectionFrame detection = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_detection(), output);
  }

  // optional .SSL_GeometryData geometry = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_geometry(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SSL_WrapperPacket)
}

::google::protobuf::uint8* SSL_WrapperPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SSL_WrapperPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .SSL_DetectionFrame detection = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_detection(), deterministic, target);
  }

  // optional .SSL_GeometryData geometry = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_geometry(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SSL_WrapperPacket)
  return target;
}

size_t SSL_WrapperPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SSL_WrapperPacket)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional .SSL_DetectionFrame detection = 1;
    if (has_detection()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *detection_);
    }

    // optional .SSL_GeometryData geometry = 2;
    if (has_geometry()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *geometry_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SSL_WrapperPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SSL_WrapperPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const SSL_WrapperPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SSL_WrapperPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SSL_WrapperPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SSL_WrapperPacket)
    MergeFrom(*source);
  }
}

void SSL_WrapperPacket::MergeFrom(const SSL_WrapperPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SSL_WrapperPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_detection()->::SSL_DetectionFrame::MergeFrom(from.detection());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_geometry()->::SSL_GeometryData::MergeFrom(from.geometry());
    }
  }
}

void SSL_WrapperPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SSL_WrapperPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SSL_WrapperPacket::CopyFrom(const SSL_WrapperPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SSL_WrapperPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSL_WrapperPacket::IsInitialized() const {
  if (has_detection()) {
    if (!this->detection_->IsInitialized()) return false;
  }
  if (has_geometry()) {
    if (!this->geometry_->IsInitialized()) return false;
  }
  return true;
}

void SSL_WrapperPacket::Swap(SSL_WrapperPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SSL_WrapperPacket::InternalSwap(SSL_WrapperPacket* other) {
  using std::swap;
  swap(detection_, other->detection_);
  swap(geometry_, other->geometry_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SSL_WrapperPacket::GetMetadata() const {
  protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_messages_5frobocup_5fssl_5fwrapper_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::SSL_WrapperPacket* Arena::CreateMaybeMessage< ::SSL_WrapperPacket >(Arena* arena) {
  return Arena::CreateInternal< ::SSL_WrapperPacket >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)