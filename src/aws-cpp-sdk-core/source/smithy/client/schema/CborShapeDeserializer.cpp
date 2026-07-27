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
  Impl(const unsigned char* data, size_t length)
      : m_decoder(Aws::Crt::ByteCursorFromArray(data, length)),
        m_errorCode(0) {}

  bool ReadBoolean() {
    auto val = m_decoder.PopNextBooleanVal();
    if (!val.has_value()) {
      SetError();
      return false;
    }
    return val.value();
  }

  int ReadInteger() { return static_cast<int>(ReadLong()); }

  int64_t ReadLong() {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      SetError();
      return 0;
    }
    if (*type == CborType::UInt) {
      auto val = m_decoder.PopNextUnsignedIntVal();
      if (!val.has_value()) {
        SetError();
        return 0;
      }
      return static_cast<int64_t>(val.value());
    }
    if (*type == CborType::NegInt) {
      auto val = m_decoder.PopNextNegativeIntVal();
      if (!val.has_value()) {
        SetError();
        return 0;
      }
      return static_cast<int64_t>(-(static_cast<int64_t>(val.value()) + 1));
    }
    SetError();
    return 0;
  }

  float ReadFloat() { return static_cast<float>(ReadDouble()); }

  double ReadDouble() {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      SetError();
      return 0.0;
    }
    if (*type == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      if (!val.has_value()) {
        SetError();
        return 0.0;
      }
      return val.value();
    }
    return static_cast<double>(ReadLong());
  }

  Aws::String ReadString() {
    auto val = m_decoder.PopNextTextVal();
    if (!val.has_value()) {
      SetError();
      return {};
    }
    return Aws::String(reinterpret_cast<const char*>(val->ptr), val->len);
  }

  DateTime ReadTimestamp() {
    auto tag = m_decoder.PopNextTagVal();
    if (!tag.has_value() || tag.value() != 1) {
      SetError();
      return {};
    }
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      SetError();
      return {};
    }
    if (*type == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      if (!val.has_value() || val.value() < 0.0) {
        SetError();
        return {};
      }
      return DateTime(val.value());
    }
    if (*type == CborType::NegInt) {
      SetError();
      return {};
    }
    auto val = ReadLong();
    if (m_errorCode != 0) {
      return {};
    }
    return DateTime(static_cast<double>(val));
  }

  ByteBuffer ReadBlob() {
    auto val = m_decoder.PopNextBytesVal();
    if (!val.has_value()) {
      SetError();
      return {};
    }
    return ByteBuffer(val->ptr, val->len);
  }

  int ReadEnum() { return ReadInteger(); }

  size_t BeginStruct() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextMapStart();
    if (!size.has_value()) {
      SetError();
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
      SetError();
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
      SetError();
      return 0;
    }
    return static_cast<size_t>(size.value());
  }

  void EndMap() {}

  Aws::String ReadKey() { return ReadString(); }

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

  bool HasError() const { return m_errorCode != 0; }
  int GetLastError() const { return m_errorCode; }

 private:
  void SetError() { m_errorCode = m_decoder.LastError(); }

  CborDecoder m_decoder;
  int m_errorCode;
};

CborShapeDeserializer::CborShapeDeserializer(const unsigned char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("CborShapeDeserializer", data, length)) {}
CborShapeDeserializer::~CborShapeDeserializer() = default;

bool CborShapeDeserializer::ReadBoolean() { return m_impl->ReadBoolean(); }
int CborShapeDeserializer::ReadInteger() { return m_impl->ReadInteger(); }
int64_t CborShapeDeserializer::ReadLong() { return m_impl->ReadLong(); }
float CborShapeDeserializer::ReadFloat() { return m_impl->ReadFloat(); }
double CborShapeDeserializer::ReadDouble() { return m_impl->ReadDouble(); }
Aws::String CborShapeDeserializer::ReadString() { return m_impl->ReadString(); }
DateTime CborShapeDeserializer::ReadTimestamp() { return m_impl->ReadTimestamp(); }
ByteBuffer CborShapeDeserializer::ReadBlob() { return m_impl->ReadBlob(); }
int CborShapeDeserializer::ReadEnum() { return m_impl->ReadEnum(); }
size_t CborShapeDeserializer::BeginStruct() { return m_impl->BeginStruct(); }
void CborShapeDeserializer::EndStruct() { m_impl->EndStruct(); }
size_t CborShapeDeserializer::BeginList() { return m_impl->BeginList(); }
void CborShapeDeserializer::EndList() { m_impl->EndList(); }
size_t CborShapeDeserializer::BeginMap() { return m_impl->BeginMap(); }
void CborShapeDeserializer::EndMap() { m_impl->EndMap(); }
Aws::String CborShapeDeserializer::ReadKey() { return m_impl->ReadKey(); }
bool CborShapeDeserializer::IsBreak() { return m_impl->IsBreak(); }
bool CborShapeDeserializer::IsNull() { return m_impl->IsNull(); }
void CborShapeDeserializer::ReadNull() { m_impl->ReadNull(); }
void CborShapeDeserializer::SkipValue() { m_impl->SkipValue(); }
bool CborShapeDeserializer::HasError() const { return m_impl->HasError(); }
int CborShapeDeserializer::GetLastError() const { return m_impl->GetLastError(); }
