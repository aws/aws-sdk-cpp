/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeDeserializer.h>
#include <smithy/client/schema/Document.h>

#include <algorithm>
#include <initializer_list>
#include <limits>

using namespace smithy::schema;
using namespace Aws::Utils;
using namespace Aws::Crt::Cbor;

class CborShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  explicit Impl(Aws::Crt::ByteCursor data) : m_decoder(data), m_inputSize(data.len) {}

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override {
    const bool root = AtRoot();
    ReadStructBody(schema, consumer);
    if (root && !HasFailed() && m_decoder.GetRemainingLength() != 0) {
      Fail("Malformed CBOR: trailing data after root item");
    }
  }

  void ReadList(const Schema&, const ListElementConsumer& consumer) override {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenArray(indefinite, count)) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      if (!HasNextItem()) {
        break;
      }
      if (IsNull()) {
        SkipValue();
      } else {
        consumer(*this);
      }
    }
    CloseIndefinite(indefinite);
  }

  void ReadMap(const Schema&, const MapEntryConsumer& consumer) override {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenMap(indefinite, count)) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      auto key = ReadText();
      if (!key.has_value()) {
        Fail("Malformed CBOR: expected text key");
        break;
      }
      if (!HasNextItem()) {
        break;
      }
      if (IsNull()) {
        SkipValue();
      } else {
        consumer(*key, *this);
      }
    }
    CloseIndefinite(indefinite);
  }

  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override {
    if (!Expect({CborType::Bool})) {
      return {};
    }
    auto val = m_decoder.PopNextBooleanVal();
    if (!val.has_value()) {
      FailMalformed();
      return {};
    }
    return val.value();
  }

  Aws::Crt::Optional<int> ReadInteger(const Schema& schema) override {
    auto val = ReadLong(schema);
    if (!val.has_value()) {
      return {};
    }
    return NarrowToInt(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override {
    if (!Expect({CborType::UInt, CborType::NegInt})) {
      return {};
    }
    constexpr uint64_t INT64_MAX_AS_UINT64 = static_cast<uint64_t>((std::numeric_limits<int64_t>::max)());
    if (*m_decoder.PeekType() == CborType::UInt) {
      auto val = m_decoder.PopNextUnsignedIntVal();
      if (!val.has_value()) {
        FailMalformed();
        return {};
      }
      if (val.value() > INT64_MAX_AS_UINT64) {
        FailUnrepresentable("long");
        return {};
      }
      return static_cast<int64_t>(val.value());
    }
    auto val = m_decoder.PopNextNegativeIntVal();
    if (!val.has_value()) {
      FailMalformed();
      return {};
    }
    if (val.value() > INT64_MAX_AS_UINT64) {
      FailUnrepresentable("long");
      return {};
    }
    return -1 - static_cast<int64_t>(val.value());
  }

  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override {
    auto val = ReadDouble(schema);
    if (!val.has_value()) {
      return {};
    }
    return NarrowToFloat(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble(const Schema&) override {
    if (!Expect({CborType::Float, CborType::UInt, CborType::NegInt})) {
      return {};
    }
    if (*m_decoder.PeekType() == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      if (!val.has_value()) {
        FailMalformed();
        return {};
      }
      return val.value();
    }
    if (*m_decoder.PeekType() == CborType::UInt) {
      auto val = m_decoder.PopNextUnsignedIntVal();
      if (!val.has_value()) {
        FailMalformed();
        return {};
      }
      return static_cast<double>(val.value());
    }
    auto val = m_decoder.PopNextNegativeIntVal();
    if (!val.has_value()) {
      FailMalformed();
      return {};
    }
    // Negate in integer space so the cast is the only rounding; n + 1 wraps at UINT64_MAX.
    constexpr double MINUS_TWO_POW_64 = -18446744073709551616.0;
    return val.value() == UINT64_MAX ? MINUS_TWO_POW_64 : -static_cast<double>(val.value() + 1);
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override { return ReadText(); }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema& schema) override {
    if (!Expect({CborType::Tag})) {
      return {};
    }
    auto tag = m_decoder.PopNextTagVal();
    if (!tag.has_value()) {
      FailMalformed();
      return {};
    }
    if (tag.value() != 1) {
      SkipValue();
      return {};
    }
    auto seconds = ReadDouble(schema);
    // Pre-epoch values are rejected deliberately (see TimestampNegative*ReturnsEmpty).
    if (!seconds.has_value() || seconds.value() < 0.0) {
      return {};
    }
    return EpochSecondsToTimestamp(seconds.value());
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override {
    const auto bytes = ReadChunkable(CborType::Bytes, CborType::IndefBytesStart, [this] { return m_decoder.PopNextBytesVal(); });
    if (!bytes.has_value()) {
      return {};
    }
    return ByteBuffer(reinterpret_cast<const unsigned char*>(bytes->data()), bytes->size());
  }

  std::shared_ptr<const Document> ReadDocument(const Schema&) override {
    if (HasFailed()) {
      return nullptr;
    }
    AWS_LOGSTREAM_WARN("CborShapeDeserializer", "document type is not yet supported by the RPCv2 CBOR protocol");
    SkipValue();  // consume the whole data item so sibling members stay aligned
    return nullptr;
  }

  bool IsNull() override {
    auto type = m_decoder.PeekType();
    return type.has_value() && *type == CborType::Null;
  }

 private:
  void ReadStructBody(const Schema& schema, const StructMemberConsumer& consumer) {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenMap(indefinite, count)) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }
    bool delivered = false;
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      auto key = ReadText();
      if (!key.has_value()) {
        Fail("Malformed CBOR: expected text key");
        break;
      }
      if (!HasNextItem()) {
        break;
      }
      const auto member = schema.GetMember(key->c_str());
      if (member.has_value() && *member && !IsNull()) {
        if (!AdmitMember(schema, delivered)) {
          break;
        }
        consumer(**member, *this);
      } else {
        SkipValue();
      }
    }
    CloseIndefinite(indefinite);
  }

  // Only the root can fail to decode here. Empty input and a null root are an empty struct, as in JSON.
  bool OpenMap(bool& indefinite, size_t& count) {
    if (HasFailed()) {
      return false;
    }
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      if (m_inputSize != 0) {
        FailMalformed();
      }
      return false;
    }
    if (*type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      indefinite = true;
      count = 0;
      return true;
    }
    if (*type != CborType::MapStart) {
      if (AtRoot() && *type == CborType::Null) {
        SkipValue();
      } else if (AtRoot()) {
        FailMalformed();
      } else {
        SkipValue();
      }
      return false;
    }
    auto size = m_decoder.PopNextMapStart();
    if (!size.has_value()) {
      FailMalformed();
      return false;
    }
    indefinite = false;
    count = static_cast<size_t>(size.value());
    return true;
  }

  bool OpenArray(bool& indefinite, size_t& count) {
    if (HasFailed()) {
      return false;
    }
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      if (m_inputSize != 0) {
        FailMalformed();
      }
      return false;
    }
    if (*type == CborType::IndefArrayStart) {
      m_decoder.ConsumeNextSingleElement();
      indefinite = true;
      count = 0;
      return true;
    }
    if (*type != CborType::ArrayStart) {
      SkipValue();
      return false;
    }
    auto size = m_decoder.PopNextArrayStart();
    if (!size.has_value()) {
      FailMalformed();
      return false;
    }
    indefinite = false;
    count = static_cast<size_t>(size.value());
    return true;
  }

  void FailMalformed() { Fail("Malformed CBOR: truncated or invalid data item"); }

  bool HasNextItem() {
    if (HasFailed()) {
      return false;
    }
    if (m_decoder.PeekType().has_value()) {
      return true;
    }
    FailMalformed();
    return false;
  }

  bool MoreEntries(bool indefinite, size_t count, size_t index) {
    if (HasFailed()) {
      return false;
    }
    if (indefinite) {
      return HasNextItem() && *m_decoder.PeekType() != CborType::Break;
    }
    return index < count;
  }

  void CloseIndefinite(bool indefinite) {
    if (indefinite && !HasFailed()) {
      m_decoder.ConsumeNextSingleElement();
    }
  }

  // A mismatched item is consumed so later reads stay aligned.
  bool Expect(std::initializer_list<CborType> accepted) {
    if (!HasNextItem()) {
      return false;
    }
    const CborType type = *m_decoder.PeekType();
    if (std::find(accepted.begin(), accepted.end(), type) != accepted.end()) {
      return true;
    }
    SkipValue();
    return false;
  }

  Aws::Crt::Optional<Aws::String> ReadText() {
    return ReadChunkable(CborType::Text, CborType::IndefTextStart, [this] { return m_decoder.PopNextTextVal(); });
  }

  template <typename PopChunk>
  Aws::Crt::Optional<Aws::String> ReadChunkable(CborType definite, CborType indefinite, const PopChunk& popChunk) {
    if (!Expect({definite, indefinite})) {
      return {};
    }
    const bool chunked = *m_decoder.PeekType() == indefinite;
    if (chunked) {
      m_decoder.ConsumeNextSingleElement();
    }
    Aws::String joined;
    bool more = true;
    while (more && HasNextItem()) {
      const CborType type = *m_decoder.PeekType();
      if (chunked && type == CborType::Break) {
        m_decoder.ConsumeNextSingleElement();
        return joined;
      }
      const auto chunk = type == definite ? popChunk() : Aws::Crt::Optional<Aws::Crt::ByteCursor>();
      if (!chunk.has_value()) {
        FailMalformed();
        return {};
      }
      joined.append(reinterpret_cast<const char*>(chunk->ptr), chunk->len);
      more = chunked;
    }
    if (HasFailed()) {
      return {};
    }
    return joined;
  }

  void SkipValue() {
    if (!m_decoder.ConsumeNextWholeDataItem()) {
      FailMalformed();
    }
  }

  CborDecoder m_decoder;
  size_t m_inputSize;
};

CborShapeDeserializer::CborShapeDeserializer(Aws::Crt::ByteCursor data)
    : m_impl(Aws::MakeUnique<Impl>("CborShapeDeserializer", data)) {}
CborShapeDeserializer::~CborShapeDeserializer() = default;

void CborShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) { m_impl->ReadStruct(schema, consumer); }
void CborShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) { m_impl->ReadList(schema, consumer); }
void CborShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> CborShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> CborShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> CborShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> CborShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> CborShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> CborShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> CborShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> CborShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
std::shared_ptr<const smithy::schema::Document> CborShapeDeserializer::ReadDocument(const Schema& schema) {
  return m_impl->ReadDocument(schema);
}
bool CborShapeDeserializer::IsNull() { return m_impl->IsNull(); }
Aws::Crt::Optional<smithy::schema::DeserializerError> CborShapeDeserializer::GetError() const { return m_impl->GetError(); }
