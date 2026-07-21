/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeSerializer.h>

#include <cmath>

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

namespace {
constexpr int MAX_DEPTH = 1000;
}  // namespace

class CborShapeSerializer::Impl {
 public:
  bool BeginStructure(const Schema&) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    m_encoder.WriteIndefMapStart();
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
    return true;
  }

  void EndStructure() {
    m_encoder.WriteBreak();
    m_depth--;
  }

  void WriteBoolean(const Schema& schema, bool value) {
    WriteFieldName(schema);
    m_encoder.WriteBool(value);
  }

  void WriteInteger(const Schema& schema, int value) {
    WriteFieldName(schema);
    WriteIntValue(static_cast<int64_t>(value));
  }

  void WriteLong(const Schema& schema, int64_t value) {
    WriteFieldName(schema);
    WriteIntValue(value);
  }

  void WriteFloat(const Schema& schema, float value) {
    WriteFieldName(schema);
    m_encoder.WriteFloat(value);
  }

  void WriteDouble(const Schema& schema, double value) {
    WriteFieldName(schema);
    m_encoder.WriteFloat(value);
  }

  void WriteString(const Schema& schema, const Aws::String& value) {
    WriteFieldName(schema);
    m_encoder.WriteText(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(value.data()), value.size()));
  }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    WriteFieldName(schema);
    double seconds = value.SecondsWithMSPrecision();
    m_encoder.WriteTag(1);
    double intPart;
    if (std::modf(seconds, &intPart) == 0.0) {
      WriteIntValue(static_cast<int64_t>(intPart));
    } else {
      m_encoder.WriteFloat(seconds);
    }
  }

  void WriteBlob(const Schema& schema, const ByteBuffer& value) {
    WriteFieldName(schema);
    m_encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(value.GetUnderlyingData(), value.GetLength()));
  }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema& schema) {
    WriteFieldName(schema);
    m_encoder.WriteNull();
  }

  bool BeginList(const Schema& schema, size_t count) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    m_encoder.WriteArrayStart(count);
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = true;
    return true;
  }

  void EndList() { m_depth--; }

  bool BeginMap(const Schema& schema, size_t count) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    m_encoder.WriteMapStart(count);
    m_depth++;
    m_isMap[m_depth] = true;
    m_isList[m_depth] = false;
    return true;
  }

  void WriteMapKey(const Aws::String& key) { m_currentMapKey = key; }

  void EndMap() { m_depth--; }

  bool BeginNestedStructure(const Schema& schema) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    m_encoder.WriteIndefMapStart();
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
    return true;
  }

  void EndNestedStructure() {
    m_encoder.WriteBreak();
    m_depth--;
  }

  SerializerOutcome GetPayload() {
    if (m_finalized || !m_errorMessage.empty()) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
          Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException",
          !m_errorMessage.empty() ? m_errorMessage : "Serializer has already been finalized", false);
    }
    m_finalized = true;
    auto encoded = m_encoder.GetEncodedData();
    return Aws::String(reinterpret_cast<const char*>(encoded.ptr), encoded.len);
  }

 private:
  Aws::Crt::Cbor::CborEncoder m_encoder;
  int m_depth = 0;
  Aws::Array<bool, MAX_DEPTH> m_isMap{};
  Aws::Array<bool, MAX_DEPTH> m_isList{};
  Aws::String m_currentMapKey;
  bool m_finalized = false;
  Aws::String m_errorMessage;

  void WriteFieldName(const Schema& schema) {
    if (m_isList[m_depth]) {
      return;
    }
    if (m_depth > 0 && m_isMap[m_depth]) {
      WriteText(m_currentMapKey);
    } else {
      WriteText(schema.GetMemberName());
    }
  }

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
