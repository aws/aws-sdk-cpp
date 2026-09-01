/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeDeserializer.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using namespace Aws::Crt::Cbor;

class CborShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  Impl(const unsigned char* data, size_t length) : m_decoder(Aws::Crt::ByteCursorFromArray(data, length)) {}

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenMap(indefinite, count)) {
      return;
    }
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      auto key = ReadText();
      if (!key.has_value()) {
        break;
      }
      const auto member = schema.GetMember(key->c_str());
      if (member.has_value() && *member && !IsNull()) {
        consumer(**member, *this);
      } else {

        SkipValue();
      }
    }
    CloseIndefinite(indefinite);
  }

  void ReadList(const Schema&, const ListElementConsumer& consumer) override {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenArray(indefinite, count)) {
      return;
    }
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      if (IsNull()) {
        SkipValue();
        continue;
      }
      consumer(*this);
    }
    CloseIndefinite(indefinite);
  }

  void ReadMap(const Schema&, const MapEntryConsumer& consumer) override {
    bool indefinite = false;
    size_t count = 0;
    if (!OpenMap(indefinite, count)) {
      return;
    }
    for (size_t i = 0; MoreEntries(indefinite, count, i); ++i) {
      auto key = ReadText();
      if (!key.has_value()) {
        break;
      }
      if (IsNull()) {
        SkipValue();
        continue;
      }
      consumer(*key, *this);
    }
    CloseIndefinite(indefinite);
  }

  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override {
    auto val = m_decoder.PopNextBooleanVal();
    if (!val.has_value()) {
      return {};
    }
    return val.value();
  }

  Aws::Crt::Optional<int> ReadInteger(const Schema& schema) override {
    auto val = ReadLong(schema);
    if (!val.has_value()) {
      return {};
    }
    return static_cast<int>(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return {};
    }
    if (*type == CborType::UInt) {
      auto val = m_decoder.PopNextUnsignedIntVal();
      if (!val.has_value()) {
        return {};
      }
      return static_cast<int64_t>(val.value());
    }
    if (*type == CborType::NegInt) {
      auto val = m_decoder.PopNextNegativeIntVal();
      if (!val.has_value()) {
        return {};
      }
      return static_cast<int64_t>(-(static_cast<int64_t>(val.value()) + 1));
    }
    return {};
  }

  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override {
    auto val = ReadDouble(schema);
    if (!val.has_value()) {
      return {};
    }
    return static_cast<float>(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble(const Schema& schema) override {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return {};
    }
    if (*type == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      if (!val.has_value()) {
        return {};
      }
      return val.value();
    }
    auto longVal = ReadLong(schema);
    if (!longVal.has_value()) {
      return {};
    }
    return static_cast<double>(longVal.value());
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override { return ReadText(); }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema& schema) override {
    auto tag = m_decoder.PopNextTagVal();
    if (!tag.has_value() || tag.value() != 1) {
      return {};
    }
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return {};
    }
    if (*type == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      if (!val.has_value() || val.value() < 0.0) {
        return {};
      }
      return DateTime(val.value());
    }
    if (*type == CborType::NegInt) {
      return {};
    }
    auto val = ReadLong(schema);
    if (!val.has_value()) {
      return {};
    }
    return DateTime(static_cast<double>(val.value()));
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override {
    auto val = m_decoder.PopNextBytesVal();
    if (!val.has_value()) {
      return {};
    }
    return ByteBuffer(val->ptr, val->len);
  }

  Aws::Crt::Optional<int> ReadEnum(const Schema& schema) override { return ReadInteger(schema); }

  bool IsNull() override {
    auto type = m_decoder.PeekType();
    return type.has_value() && *type == CborType::Null;
  }

 private:

  bool OpenMap(bool& indefinite, size_t& count) {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return false;
    }
    if (*type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      indefinite = true;
      count = 0;
      return true;
    }
    auto size = m_decoder.PopNextMapStart();
    if (!size.has_value()) {
      return false;
    }
    indefinite = false;
    count = static_cast<size_t>(size.value());
    return true;
  }

  bool OpenArray(bool& indefinite, size_t& count) {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return false;
    }
    if (*type == CborType::IndefArrayStart) {
      m_decoder.ConsumeNextSingleElement();
      indefinite = true;
      count = 0;
      return true;
    }
    auto size = m_decoder.PopNextArrayStart();
    if (!size.has_value()) {
      return false;
    }
    indefinite = false;
    count = static_cast<size_t>(size.value());
    return true;
  }

  bool MoreEntries(bool indefinite, size_t count, size_t index) {
    if (indefinite) {
      auto type = m_decoder.PeekType();
      return type.has_value() && *type != CborType::Break;
    }
    return index < count;
  }

  void CloseIndefinite(bool indefinite) {
    if (indefinite) {
      m_decoder.ConsumeNextSingleElement();
    }
  }

  Aws::Crt::Optional<Aws::String> ReadText() {
    auto val = m_decoder.PopNextTextVal();
    if (!val.has_value()) {
      return {};
    }
    return Aws::String(reinterpret_cast<const char*>(val->ptr), val->len);
  }

  void SkipValue() { m_decoder.ConsumeNextWholeDataItem(); }

  CborDecoder m_decoder;
};

CborShapeDeserializer::CborShapeDeserializer(const unsigned char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("CborShapeDeserializer", data, length)) {}
CborShapeDeserializer::~CborShapeDeserializer() = default;

void CborShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) {
  m_impl->ReadStruct(schema, consumer);
}
void CborShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) {
  m_impl->ReadList(schema, consumer);
}
void CborShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> CborShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> CborShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> CborShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> CborShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> CborShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> CborShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> CborShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> CborShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
Aws::Crt::Optional<int> CborShapeDeserializer::ReadEnum(const Schema& schema) { return m_impl->ReadEnum(schema); }
bool CborShapeDeserializer::IsNull() { return m_impl->IsNull(); }
