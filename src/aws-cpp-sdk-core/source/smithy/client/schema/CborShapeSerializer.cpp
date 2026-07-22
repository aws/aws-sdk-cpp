/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Outcome.h>
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeSerializer.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

class CborShapeSerializer::Impl {
 public:
  bool BeginStructure(const Schema&) {
    m_encoder.WriteIndefMapStart();
    return true;
  }

  void EndStructure() { m_encoder.WriteBreak(); }

  void WriteBoolean(const Schema&, bool value) { m_encoder.WriteBool(value); }

  void WriteInteger(const Schema&, int value) { WriteIntValue(value); }

  void WriteLong(const Schema&, int64_t value) { WriteIntValue(value); }

  void WriteFloat(const Schema&, float value) { m_encoder.WriteFloat(value); }

  void WriteDouble(const Schema&, double value) { m_encoder.WriteFloat(value); }

  void WriteString(const Schema&, const Aws::String& value) { WriteText(value); }

  void WriteTimestamp(const Schema&, const DateTime& value) {
    m_encoder.WriteTag(1);
    WriteIntValue(value.Seconds());
  }

  void WriteBlob(const Schema&, const ByteBuffer& value) {
    m_encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(value.GetUnderlyingData(), value.GetLength()));
  }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema&) { m_encoder.WriteNull(); }

  bool BeginList(const Schema&, size_t count) {
    m_encoder.WriteArrayStart(count);
    return true;
  }

  void EndList() {}

  bool BeginMap(const Schema&, size_t count) {
    m_encoder.WriteMapStart(count);
    return true;
  }

  void WriteMapKey(const Aws::String& key) { WriteText(key); }

  void EndMap() {}

  bool BeginNestedStructure(const Schema&) {
    m_encoder.WriteIndefMapStart();
    return true;
  }

  void EndNestedStructure() { m_encoder.WriteBreak(); }

  SerializerOutcome GetPayload() {
    if (m_finalized) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
          Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException",
          "Serializer has already been finalized", false);
    }
    m_finalized = true;
    auto encoded = m_encoder.GetEncodedData();
    return Aws::String(reinterpret_cast<const char*>(encoded.ptr), encoded.len);
  }

 private:
  Aws::Crt::Cbor::CborEncoder m_encoder;
  bool m_finalized = false;

  void WriteText(const Aws::String& str) {
    m_encoder.WriteText(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(str.data()), str.size()));
  }

  void WriteIntValue(int64_t value) {
    if (value >= 0) {
      m_encoder.WriteUInt(static_cast<uint64_t>(value));
    } else {
      m_encoder.WriteNegInt(static_cast<uint64_t>(-(value + 1)));
    }
  }
};

CborShapeSerializer::CborShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("CborShapeSerializer")) {}
CborShapeSerializer::~CborShapeSerializer() = default;

bool CborShapeSerializer::BeginStructure(const Schema& schema) { return m_impl->BeginStructure(schema); }
void CborShapeSerializer::EndStructure() { m_impl->EndStructure(); }
void CborShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void CborShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void CborShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void CborShapeSerializer::WriteFloat(const Schema& schema, float value) { m_impl->WriteFloat(schema, value); }
void CborShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void CborShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void CborShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void CborShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void CborShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void CborShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }
bool CborShapeSerializer::BeginList(const Schema& schema, size_t count) { return m_impl->BeginList(schema, count); }
void CborShapeSerializer::EndList() { m_impl->EndList(); }
bool CborShapeSerializer::BeginMap(const Schema& schema, size_t count) { return m_impl->BeginMap(schema, count); }
void CborShapeSerializer::WriteMapKey(const Aws::String& key) { m_impl->WriteMapKey(key); }
void CborShapeSerializer::EndMap() { m_impl->EndMap(); }
bool CborShapeSerializer::BeginNestedStructure(const Schema& schema) { return m_impl->BeginNestedStructure(schema); }
void CborShapeSerializer::EndNestedStructure() { m_impl->EndNestedStructure(); }
CborShapeSerializer::SerializerOutcome CborShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
