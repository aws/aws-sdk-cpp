/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

struct JsonShapeSerializer::Impl {
  JsonValue m_root;

  struct StackEntry {
    JsonValue object;
    const char* fieldName = nullptr;
    bool isList = false;
    bool isMap = false;
    Aws::Vector<JsonValue> listItems;
  };

  Aws::Vector<StackEntry> m_stack;
  Aws::String m_currentMapKey;

  JsonValue& CurrentObject() {
    if (m_stack.empty()) return m_root;
    return m_stack.back().object;
  }

  const char* CurrentKey(const Schema& schema) {
    if (!m_stack.empty() && m_stack.back().isMap) return m_currentMapKey.c_str();
    return schema.GetMemberName();
  }

  void BeginStructure(const Schema&) {}
  void EndStructure() {}

  void WriteBoolean(const Schema& schema, bool value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsBool(value);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithBool(CurrentKey(schema), value);
    }
  }

  void WriteInteger(const Schema& schema, int value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsInteger(value);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithInteger(CurrentKey(schema), value);
    }
  }

  void WriteLong(const Schema& schema, int64_t value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsInt64(value);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithInt64(CurrentKey(schema), value);
    }
  }

  void WriteDouble(const Schema& schema, double value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsDouble(value);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithDouble(CurrentKey(schema), value);
    }
  }

  void WriteString(const Schema& schema, const Aws::String& value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsString(value);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithString(CurrentKey(schema), value);
    }
  }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsDouble(value.SecondsWithMSPrecision());
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithDouble(CurrentKey(schema), value.SecondsWithMSPrecision());
    }
  }

  void WriteBlob(const Schema& schema, const ByteBuffer& value) {
    Aws::String encoded = HashingUtils::Base64Encode(value);
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsString(encoded);
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithString(CurrentKey(schema), encoded);
    }
  }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema& schema) {
    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue v;
      v.AsNull();
      m_stack.back().listItems.push_back(std::move(v));
    } else {
      CurrentObject().WithNull(CurrentKey(schema));
    }
  }

  void BeginList(const Schema& schema, size_t) {
    StackEntry entry;
    entry.fieldName = CurrentKey(schema);
    entry.isList = true;
    m_stack.push_back(std::move(entry));
  }

  void EndList() {
    auto entry = std::move(m_stack.back());
    m_stack.pop_back();

    Array<JsonValue> arr(entry.listItems.size());
    for (size_t i = 0; i < entry.listItems.size(); ++i) {
      arr[i] = std::move(entry.listItems[i]);
    }

    if (!m_stack.empty() && m_stack.back().isList) {
      JsonValue listVal;
      listVal.WithArray("", std::move(arr));
      m_stack.back().listItems.push_back(std::move(listVal));
    } else {
      CurrentObject().WithArray(entry.fieldName, std::move(arr));
    }
  }

  void BeginMap(const Schema& schema, size_t) {
    StackEntry entry;
    entry.fieldName = CurrentKey(schema);
    entry.isMap = true;
    m_stack.push_back(std::move(entry));
  }

  void WriteMapKey(const Aws::String& key) { m_currentMapKey = key; }

  void EndMap() {
    auto entry = std::move(m_stack.back());
    m_stack.pop_back();

    if (!m_stack.empty() && m_stack.back().isList) {
      m_stack.back().listItems.push_back(std::move(entry.object));
    } else {
      CurrentObject().WithObject(entry.fieldName, std::move(entry.object));
    }
  }

  void BeginNestedStructure(const Schema& schema) {
    StackEntry entry;
    entry.fieldName = CurrentKey(schema);
    m_stack.push_back(std::move(entry));
  }

  void EndNestedStructure() {
    auto entry = std::move(m_stack.back());
    m_stack.pop_back();

    if (!m_stack.empty() && m_stack.back().isList) {
      m_stack.back().listItems.push_back(std::move(entry.object));
    } else {
      CurrentObject().WithObject(entry.fieldName, std::move(entry.object));
    }
  }

  Aws::String GetPayload() const { return m_root.View().WriteCompact(); }
};

JsonShapeSerializer::JsonShapeSerializer() : m_impl(new Impl) {}
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
Aws::String JsonShapeSerializer::GetPayload() const { return m_impl->GetPayload(); }
