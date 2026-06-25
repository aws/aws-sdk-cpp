/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonWriteUtils.h>

#include <array>

#include "aws/core/client/AWSClient.h"
#include "aws/core/utils/Outcome.h"
#include "aws/core/utils/memory/stl/AWSArray.h"

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

static constexpr int MAX_DEPTH = 1000;

class JsonShapeSerializer::Impl {

public:
  Impl() {m_buf.reserve(8192);}

  bool BeginStructure(const Schema&) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }

    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;

    return true;
  }

  void EndStructure() {
    m_depth--;
    m_buf += '}';
  }

  void WriteBoolean(const Schema& schema, bool value) {
    WriteFieldName(schema);
    m_buf += value ? "true" : "false";
  }

  void WriteInteger(const Schema& schema, int value) {
    WriteFieldName(schema);
    m_buf += StringUtils::to_string(value);
  }

  void WriteLong(const Schema& schema, int64_t value) {
    WriteFieldName(schema);
    m_buf += StringUtils::to_string(value);
  }

  void WriteDouble(const Schema& schema, double value) {
    WriteFieldName(schema);
    m_buf += StringUtils::to_string(value);
  }

  void WriteString(const Schema& schema, const Aws::String& value) {
    WriteFieldName(schema);
    JsonWriteUtils::WriteQuotedString(m_buf, value);
  }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    WriteFieldName(schema);
    m_buf += StringUtils::to_string(value.SecondsWithMSPrecision());
  }

  void WriteBlob(const Schema& schema, const ByteBuffer& value) {
    WriteFieldName(schema);
    m_buf += '"';
    m_buf += HashingUtils::Base64Encode(value);
    m_buf += '"';
  }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema& schema) {
    WriteFieldName(schema);
    m_buf += "null";
  }

  bool BeginList(const Schema& schema, size_t) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }

    WriteFieldName(schema);
    m_buf += '[';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = true;

    return true;
  }

  void EndList() {
    m_depth--;
    m_buf += ']';
  }

  bool BeginMap(const Schema& schema, size_t) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }

    WriteFieldName(schema);
    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = true;
    m_isList[m_depth] = false;

    return true;
  }

  void WriteMapKey(const Aws::String& key) { m_currentMapKey = key; }

  void EndMap() {
    m_depth--;
    m_buf += '}';
  }

  bool BeginNestedStructure(const Schema& schema) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }

    WriteFieldName(schema);
    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;

    return true;
  }

  void EndNestedStructure() {
    m_depth--;
    m_buf += '}';
  }

  SerializerOutcome GetPayload() {
    if(m_finalized || !m_errorMessage.empty()) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
        Aws::Client::CoreErrors::INTERNAL_FAILURE,
        "SerializationException",
        !m_errorMessage.empty()?m_errorMessage:"Serializer has already been finalized",
        false);
    }
    m_finalized = true;
    return std::move(m_buf);
  }

private:
  Aws::String m_buf;
  int m_depth = 0;
 Aws::Array<bool, MAX_DEPTH> m_needsComma{};
 Aws::Array<bool, MAX_DEPTH> m_isMap{};
 Aws::Array<bool, MAX_DEPTH> m_isList{};
  Aws::String m_currentMapKey;
  bool m_finalized = false;
  Aws::String m_errorMessage;

  void WriteCommaIfNeeded() {
    if (m_needsComma[m_depth]) {
      m_buf += ',';
    } else {
      m_needsComma[m_depth] = true;
    }
  }

  void WriteKey(const Aws::String& key) {
    JsonWriteUtils::WriteQuotedString(m_buf, key);
    m_buf += ':';
  }

  void WriteFieldName(const Schema& schema) {
    WriteCommaIfNeeded();
    if (m_isList[m_depth]) {
      return;
    }
    if (m_depth > 0 && m_isMap[m_depth]) {
      WriteKey(m_currentMapKey);
    } else {
      WriteKey(schema.GetMemberName());
    }
  }

};

JsonShapeSerializer::JsonShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("JsonShapeSerializer")) {}
JsonShapeSerializer::~JsonShapeSerializer() = default;

bool JsonShapeSerializer::BeginStructure(const Schema& schema) { return m_impl->BeginStructure(schema); }
void JsonShapeSerializer::EndStructure() { m_impl->EndStructure(); }
void JsonShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void JsonShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void JsonShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void JsonShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void JsonShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void JsonShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void JsonShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void JsonShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void JsonShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }
bool JsonShapeSerializer::BeginList(const Schema& schema, size_t count) { return m_impl->BeginList(schema, count); }
void JsonShapeSerializer::EndList() { m_impl->EndList(); }
bool JsonShapeSerializer::BeginMap(const Schema& schema, size_t count) { return m_impl->BeginMap(schema, count); }
void JsonShapeSerializer::WriteMapKey(const Aws::String& key) { m_impl->WriteMapKey(key); }
void JsonShapeSerializer::EndMap() { m_impl->EndMap(); }
bool JsonShapeSerializer::BeginNestedStructure(const Schema& schema) { return m_impl->BeginNestedStructure(schema); }
void JsonShapeSerializer::EndNestedStructure() { m_impl->EndNestedStructure(); }
JsonShapeSerializer::SerializerOutcome JsonShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
