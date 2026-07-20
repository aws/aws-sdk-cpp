/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <smithy/client/schema/CborShapeSerializer.h>

#include <cmath>
#include <cstring>

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

namespace {
constexpr int MAX_DEPTH = 500;

constexpr unsigned char CBOR_INDEFINITE_MAP = 0xBF;
constexpr unsigned char CBOR_BREAK = 0xFF;
constexpr unsigned char CBOR_FALSE = 0xF4;
constexpr unsigned char CBOR_TRUE = 0xF5;
constexpr unsigned char CBOR_NULL = 0xF6;

constexpr unsigned char TYPE_POSINT = 0x00;
constexpr unsigned char TYPE_NEGINT = 0x20;
constexpr unsigned char TYPE_BYTESTRING = 0x40;
constexpr unsigned char TYPE_TEXTSTRING = 0x60;
constexpr unsigned char TYPE_ARRAY = 0x80;
constexpr unsigned char TYPE_TAG = 0xC0;
constexpr unsigned char TYPE_SIMPLE = 0xE0;

constexpr unsigned char ADDITIONAL_ONE_BYTE = 24;
constexpr unsigned char ADDITIONAL_TWO_BYTES = 25;
constexpr unsigned char ADDITIONAL_FOUR_BYTES = 26;
constexpr unsigned char ADDITIONAL_EIGHT_BYTES = 27;
}  // namespace

class CborShapeSerializer::Impl {
 public:
  Impl() { m_buf.reserve(8192); }

  bool BeginStructure(const Schema&) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    m_buf += static_cast<char>(CBOR_INDEFINITE_MAP);
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
    return true;
  }

  void EndStructure() {
    m_buf += static_cast<char>(CBOR_BREAK);
    m_depth--;
  }

  void WriteBoolean(const Schema& schema, bool value) {
    WriteFieldName(schema);
    m_buf += static_cast<char>(value ? CBOR_TRUE : CBOR_FALSE);
  }

  void WriteInteger(const Schema& schema, int value) {
    WriteFieldName(schema);
    WriteIntValue(static_cast<int64_t>(value));
  }

  void WriteLong(const Schema& schema, int64_t value) {
    WriteFieldName(schema);
    WriteIntValue(value);
  }

  void WriteDouble(const Schema& schema, double value) {
    WriteFieldName(schema);
    WriteDoubleValue(value);
  }

  void WriteString(const Schema& schema, const Aws::String& value) {
    WriteFieldName(schema);
    WriteTextString(value);
  }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    WriteFieldName(schema);
    double seconds = value.SecondsWithMSPrecision();
    WriteTagAndLength(TYPE_TAG, 1);
    double intPart;
    if (std::modf(seconds, &intPart) == 0.0) {
      WriteIntValue(static_cast<int64_t>(intPart));
    } else {
      WriteDoubleValue(seconds);
    }
  }

  void WriteBlob(const Schema& schema, const ByteBuffer& value) {
    WriteFieldName(schema);
    WriteTagAndLength(TYPE_BYTESTRING, static_cast<uint64_t>(value.GetLength()));
    m_buf.append(reinterpret_cast<const char*>(value.GetUnderlyingData()), value.GetLength());
  }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema& schema) {
    WriteFieldName(schema);
    m_buf += static_cast<char>(CBOR_NULL);
  }

  bool BeginList(const Schema& schema, size_t count) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    WriteTagAndLength(TYPE_ARRAY, static_cast<uint64_t>(count));
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = true;
    return true;
  }

  void EndList() { m_depth--; }

  bool BeginMap(const Schema& schema, size_t) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    m_buf += static_cast<char>(CBOR_INDEFINITE_MAP);
    m_depth++;
    m_isMap[m_depth] = true;
    m_isList[m_depth] = false;
    return true;
  }

  void WriteMapKey(const Aws::String& key) { m_currentMapKey = key; }

  void EndMap() {
    m_buf += static_cast<char>(CBOR_BREAK);
    m_depth--;
  }

  bool BeginNestedStructure(const Schema& schema) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    WriteFieldName(schema);
    m_buf += static_cast<char>(CBOR_INDEFINITE_MAP);
    m_depth++;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
    return true;
  }

  void EndNestedStructure() {
    m_buf += static_cast<char>(CBOR_BREAK);
    m_depth--;
  }

  SerializerOutcome GetPayload() {
    if (m_finalized || !m_errorMessage.empty()) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
          Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException",
          !m_errorMessage.empty() ? m_errorMessage : "Serializer has already been finalized", false);
    }
    m_finalized = true;
    return std::move(m_buf);
  }

 private:
  Aws::String m_buf;
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
      WriteTextString(m_currentMapKey);
    } else {
      WriteTextString(schema.GetMemberName());
    }
  }

  void WriteTextString(const Aws::String& str) {
    WriteTagAndLength(TYPE_TEXTSTRING, static_cast<uint64_t>(str.size()));
    m_buf.append(str.data(), str.size());
  }

  void WriteIntValue(int64_t value) {
    if (value >= 0) {
      WriteTagAndLength(TYPE_POSINT, static_cast<uint64_t>(value));
    } else {
      WriteTagAndLength(TYPE_NEGINT, static_cast<uint64_t>(-(value + 1)));
    }
  }

  void WriteDoubleValue(double value) {
    m_buf += static_cast<char>(TYPE_SIMPLE | ADDITIONAL_EIGHT_BYTES);
    uint64_t bits;
    std::memcpy(&bits, &value, sizeof(bits));
    for (int i = 56; i >= 0; i -= 8) {
      m_buf += static_cast<char>((bits >> i) & 0xFF);
    }
  }

  void WriteTagAndLength(unsigned char majorType, uint64_t value) {
    if (value <= 23) {
      m_buf += static_cast<char>(majorType | static_cast<unsigned char>(value));
    } else if (value <= 0xFF) {
      m_buf += static_cast<char>(majorType | ADDITIONAL_ONE_BYTE);
      m_buf += static_cast<char>(value & 0xFF);
    } else if (value <= 0xFFFF) {
      m_buf += static_cast<char>(majorType | ADDITIONAL_TWO_BYTES);
      m_buf += static_cast<char>((value >> 8) & 0xFF);
      m_buf += static_cast<char>(value & 0xFF);
    } else if (value <= 0xFFFFFFFF) {
      m_buf += static_cast<char>(majorType | ADDITIONAL_FOUR_BYTES);
      m_buf += static_cast<char>((value >> 24) & 0xFF);
      m_buf += static_cast<char>((value >> 16) & 0xFF);
      m_buf += static_cast<char>((value >> 8) & 0xFF);
      m_buf += static_cast<char>(value & 0xFF);
    } else {
      m_buf += static_cast<char>(majorType | ADDITIONAL_EIGHT_BYTES);
      m_buf += static_cast<char>((value >> 56) & 0xFF);
      m_buf += static_cast<char>((value >> 48) & 0xFF);
      m_buf += static_cast<char>((value >> 40) & 0xFF);
      m_buf += static_cast<char>((value >> 32) & 0xFF);
      m_buf += static_cast<char>((value >> 24) & 0xFF);
      m_buf += static_cast<char>((value >> 16) & 0xFF);
      m_buf += static_cast<char>((value >> 8) & 0xFF);
      m_buf += static_cast<char>(value & 0xFF);
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
