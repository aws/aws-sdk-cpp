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
      : m_decoder(Aws::Crt::ByteCursorFromArray(data, length)) {}

  bool ReadBoolean() {
    auto val = m_decoder.PopNextBooleanVal();
    return val.has_value() ? val.value() : false;
  }

  int ReadInteger() { return static_cast<int>(ReadLong()); }

  int64_t ReadLong() {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return 0;
    }
    if (*type == CborType::UInt) {
      auto val = m_decoder.PopNextUnsignedIntVal();
      return val.has_value() ? static_cast<int64_t>(val.value()) : 0;
    }
    if (*type == CborType::NegInt) {
      auto val = m_decoder.PopNextNegativeIntVal();
      return val.has_value() ? static_cast<int64_t>(-(static_cast<int64_t>(val.value()) + 1)) : 0;
    }
    return 0;
  }

  float ReadFloat() { return static_cast<float>(ReadDouble()); }

  double ReadDouble() {
    auto type = m_decoder.PeekType();
    if (!type.has_value()) {
      return 0.0;
    }
    if (*type == CborType::Float) {
      auto val = m_decoder.PopNextFloatVal();
      return val.has_value() ? val.value() : 0.0;
    }
    // CRT "smallest possible" may encode doubles as integers
    return static_cast<double>(ReadLong());
  }

  Aws::String ReadString() {
    auto val = m_decoder.PopNextTextVal();
    if (!val.has_value()) {
      return {};
    }
    return Aws::String(reinterpret_cast<const char*>(val->ptr), val->len);
  }

  DateTime ReadTimestamp() {
    auto tag = m_decoder.PopNextTagVal();
    (void)tag;
    return DateTime(static_cast<double>(ReadLong()));
  }

  ByteBuffer ReadBlob() {
    auto val = m_decoder.PopNextBytesVal();
    if (!val.has_value()) {
      return {};
    }
    return ByteBuffer(val->ptr, val->len);
  }

  int ReadEnum() { return ReadInteger(); }

  void BeginStruct() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
    } else {
      m_decoder.PopNextMapStart();
    }
  }

  void EndStruct() {
    // For indefinite maps, the break is consumed by the IsBreak/read loop
  }

  size_t BeginList() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefArrayStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextArrayStart();
    return size.has_value() ? static_cast<size_t>(size.value()) : 0;
  }

  void EndList() {}

  size_t BeginMap() {
    auto type = m_decoder.PeekType();
    if (type.has_value() && *type == CborType::IndefMapStart) {
      m_decoder.ConsumeNextSingleElement();
      return 0;
    }
    auto size = m_decoder.PopNextMapStart();
    return size.has_value() ? static_cast<size_t>(size.value()) : 0;
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

 private:
  CborDecoder m_decoder;
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
void CborShapeDeserializer::BeginStruct() { m_impl->BeginStruct(); }
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
