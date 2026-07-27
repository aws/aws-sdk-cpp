/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeDeserializer.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using namespace Aws::Crt::Cbor;

class CborShapeDeserializer::Impl {
 public:
  Impl(const unsigned char* data, size_t length) : m_decoder(Aws::Crt::ByteCursorFromArray(data, length)) {}

  Aws::Crt::Optional<bool> ReadBoolean() {
    auto val = m_decoder.PopNextBooleanVal();
    if (!val.has_value()) {
      return {};
    }
    return val.value();
  }

  Aws::Crt::Optional<int> ReadInteger() {
    auto val = ReadLong();
    if (!val.has_value()) {
      return {};
    }
    return static_cast<int>(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong() {
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

  Aws::Crt::Optional<float> ReadFloat() {
    auto val = ReadDouble();
    if (!val.has_value()) {
      return {};
    }
    return static_cast<float>(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble() {
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
    auto longVal = ReadLong();
    if (!longVal.has_value()) {
      return {};
    }
    return static_cast<double>(longVal.value());
  }

  Aws::Crt::Optional<Aws::String> ReadString() {
    auto val = m_decoder.PopNextTextVal();
    if (!val.has_value()) {
      return {};
    }
    return Aws::String(reinterpret_cast<const char*>(val->ptr), val->len);
  }

  Aws::Crt::Optional<DateTime> ReadTimestamp() {
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
    auto val = ReadLong();
    if (!val.has_value()) {
      return {};
    }
    return DateTime(static_cast<double>(val.value()));
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob() {
    auto val = m_decoder.PopNextBytesVal();
    if (!val.has_value()) {
      return {};
    }
    return ByteBuffer(val->ptr, val->len);
  }

  Aws::Crt::Optional<int> ReadEnum() { return ReadInteger(); }

  size_t BeginStruct() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextMapStart();
    if (!size.has_value()) {
      return 0;
    }
    return static_cast<size_t>(size.value());
  }

  void EndStruct() {}

  size_t BeginList() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefArrayStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextArrayStart();
    if (!size.has_value()) {
      return 0;
    }
    return static_cast<size_t>(size.value());
  }

  void EndList() {}

  size_t BeginMap() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextMapStart();
    if (!size.has_value()) {
      return 0;
    }
    return static_cast<size_t>(size.value());
  }

  void EndMap() {}

  Aws::Crt::Optional<Aws::String> ReadKey() { return ReadString(); }

  bool IsBreak() {
    auto type = m_decoder.PeekType();
    return type.has_value() && *type == CborType::Break;
  }

  bool IsNull() {
    auto type = m_decoder.PeekType();
    return type.has_value() && *type == CborType::Null;
  }

  void ReadNull() { m_decoder.ConsumeNextSingleElement(); }

  void SkipValue() { m_decoder.ConsumeNextWholeDataItem(); }

 private:
  CborDecoder m_decoder;
};

CborShapeDeserializer::CborShapeDeserializer(const unsigned char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("CborShapeDeserializer", data, length)) {}
CborShapeDeserializer::~CborShapeDeserializer() = default;

Aws::Crt::Optional<bool> CborShapeDeserializer::ReadBoolean() { return m_impl->ReadBoolean(); }
Aws::Crt::Optional<int> CborShapeDeserializer::ReadInteger() { return m_impl->ReadInteger(); }
Aws::Crt::Optional<int64_t> CborShapeDeserializer::ReadLong() { return m_impl->ReadLong(); }
Aws::Crt::Optional<float> CborShapeDeserializer::ReadFloat() { return m_impl->ReadFloat(); }
Aws::Crt::Optional<double> CborShapeDeserializer::ReadDouble() { return m_impl->ReadDouble(); }
Aws::Crt::Optional<Aws::String> CborShapeDeserializer::ReadString() { return m_impl->ReadString(); }
Aws::Crt::Optional<DateTime> CborShapeDeserializer::ReadTimestamp() { return m_impl->ReadTimestamp(); }
Aws::Crt::Optional<ByteBuffer> CborShapeDeserializer::ReadBlob() { return m_impl->ReadBlob(); }
Aws::Crt::Optional<int> CborShapeDeserializer::ReadEnum() { return m_impl->ReadEnum(); }
size_t CborShapeDeserializer::BeginStruct() { return m_impl->BeginStruct(); }
void CborShapeDeserializer::EndStruct() { m_impl->EndStruct(); }
size_t CborShapeDeserializer::BeginList() { return m_impl->BeginList(); }
void CborShapeDeserializer::EndList() { m_impl->EndList(); }
size_t CborShapeDeserializer::BeginMap() { return m_impl->BeginMap(); }
void CborShapeDeserializer::EndMap() { m_impl->EndMap(); }
Aws::Crt::Optional<Aws::String> CborShapeDeserializer::ReadKey() { return m_impl->ReadKey(); }
bool CborShapeDeserializer::IsBreak() { return m_impl->IsBreak(); }
bool CborShapeDeserializer::IsNull() { return m_impl->IsNull(); }
void CborShapeDeserializer::ReadNull() { m_impl->ReadNull(); }
void CborShapeDeserializer::SkipValue() { m_impl->SkipValue(); }
