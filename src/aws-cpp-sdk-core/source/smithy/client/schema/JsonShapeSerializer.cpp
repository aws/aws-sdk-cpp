/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <smithy/client/schema/JsonShapeSerializer.h>

#include <cassert>

using namespace smithy::schema;
using namespace Aws::Utils;

static const int MAX_DEPTH = 64;

struct JsonShapeSerializer::Impl {
  Aws::String m_buf;
  int m_depth = 0;
  bool m_needsComma[MAX_DEPTH] = {};
  bool m_isMap[MAX_DEPTH] = {};
  bool m_isList[MAX_DEPTH] = {};
  const char* m_currentMapKey = nullptr;
  bool m_finalized = false;

  void WriteCommaIfNeeded() {
    if (m_needsComma[m_depth]) {
      m_buf += ',';
    } else {
      m_needsComma[m_depth] = true;
    }
  }

  void WriteKey(const char* key) {
    m_buf += '"';
    m_buf += key;
    m_buf += "\":";
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

  void BeginStructure(const Schema&) {
    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
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
    auto start = m_buf.size();
    m_buf.resize(start + 11);
    int written = snprintf(&m_buf[start],12,"%d", value);
    m_buf.resize(start + written);
  }

  void WriteLong(const Schema& schema, int64_t value) {
    WriteFieldName(schema);
    auto start = m_buf.size();
    m_buf.resize(start+20);
    int writter = snprintf(&m_buf[start],21,"%lld", static_cast<long long>(value));
    m_buf.resize(start + writter);
  }

  void WriteDouble(const Schema& schema, double value) {
    WriteFieldName(schema);
    auto start = m_buf.size();
    m_buf.resize(start+32);
    int writter = snprintf(&m_buf[start],32,"%f", value);
    m_buf.resize(start + writter);
  }

  void WriteString(const Schema& schema, const Aws::String& value) {
    WriteFieldName(schema);
    m_buf += '"';
    m_buf += value;
    m_buf += '"';
  }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    WriteFieldName(schema);
    auto start = m_buf.size();
    m_buf.resize(start+32);
    int written = snprintf(&m_buf[start], 32, "%g", value.SecondsWithMSPrecision());
    m_buf.resize(start + written);
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

  void BeginList(const Schema& schema, size_t) {
    WriteFieldName(schema);
    m_buf += '[';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = true;
  }

  void EndList() {
    m_depth--;
    m_buf += ']';
  }

  void BeginMap(const Schema& schema, size_t) {
    WriteFieldName(schema);
    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = true;
    m_isList[m_depth] = false;
  }

  void WriteMapKey(const Aws::String& key) { m_currentMapKey = key.c_str(); }

  void EndMap() {
    m_depth--;
    m_buf += '}';
  }

  void BeginNestedStructure(const Schema& schema) {
    WriteFieldName(schema);
    m_buf += '{';
    m_depth++;
    m_needsComma[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isList[m_depth] = false;
  }

  void EndNestedStructure() {
    m_depth--;
    m_buf += '}';
  }

  Aws::String GetPayload() {
    assert(!m_finalized);
    m_finalized = true;
    return std::move(m_buf);
  }
};

JsonShapeSerializer::JsonShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("JsonShapeSerializer")) { m_impl->m_buf.reserve(8192); }
JsonShapeSerializer::~JsonShapeSerializer() = default;

void JsonShapeSerializer::BeginStructure(const Schema& schema) { m_impl->BeginStructure(schema); }
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
void JsonShapeSerializer::BeginList(const Schema& schema, size_t count) { m_impl->BeginList(schema, count); }
void JsonShapeSerializer::EndList() { m_impl->EndList(); }
void JsonShapeSerializer::BeginMap(const Schema& schema, size_t count) { m_impl->BeginMap(schema, count); }
void JsonShapeSerializer::WriteMapKey(const Aws::String& key) { m_impl->WriteMapKey(key); }
void JsonShapeSerializer::EndMap() { m_impl->EndMap(); }
void JsonShapeSerializer::BeginNestedStructure(const Schema& schema) { m_impl->BeginNestedStructure(schema); }
void JsonShapeSerializer::EndNestedStructure() { m_impl->EndNestedStructure(); }
Aws::String JsonShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
