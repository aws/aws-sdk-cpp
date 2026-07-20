/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

using namespace smithy::schema;
using namespace Aws::Utils;

static constexpr int MAX_DEPTH = 500;

class XmlShapeSerializer::Impl {
 public:
  Impl() { m_buf.reserve(8192); }

  bool BeginStructure(const Schema& schema) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum serialization depth exceeded";
      return false;
    }
    FlushOpenTag();
    const auto name = GetXmlName(schema);
    if (!name.empty()) {
      m_buf += '<';
      m_buf += name;
      const auto ns = schema.GetTrait(XmlNamespaceTrait::KEY());
      if (ns && !ns->GetUri().empty()) {
        if (ns->GetPrefix().empty()) {
          m_buf += " xmlns=\"";
        } else {
          m_buf += " xmlns:";
          m_buf += ns->GetPrefix();
          m_buf += "=\"";
        }
        m_buf += ns->GetUri();
        m_buf += '"';
      }
      m_hasOpenTag = true;
    }
    m_depth++;
    m_tagStack[m_depth] = name;
    return true;
  }

  void EndStructure() {
    FlushOpenTag();
    const auto& name = m_tagStack[m_depth];
    m_depth--;
    if (!name.empty()) {
      CloseTag(name);
    }
  }

  void WriteAttribute(const Schema& schema, const Aws::String& value) {
    if (!m_hasOpenTag) return;
    const auto name = GetXmlName(schema);
    m_buf += ' ';
    m_buf += name;
    m_buf += "=\"";
    WriteXmlEscaped(m_buf, value);
    m_buf += '"';
  }

  void WriteBoolean(const Schema& schema, bool value) { WrapValue(GetXmlName(schema), value ? "true" : "false"); }

  void WriteInteger(const Schema& schema, int value) { WrapValue(GetXmlName(schema), StringUtils::to_string(value)); }

  void WriteLong(const Schema& schema, int64_t value) { WrapValue(GetXmlName(schema), StringUtils::to_string(value)); }

  void WriteDouble(const Schema& schema, double value) { WrapValue(GetXmlName(schema), StringUtils::to_string(value)); }

  void WriteString(const Schema& schema, const Aws::String& value) { WrapEscapedValue(GetXmlName(schema), value); }

  void WriteTimestamp(const Schema& schema, const DateTime& value) {
    WrapValue(GetXmlName(schema), value.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  void WriteBlob(const Schema& schema, const ByteBuffer& value) { WrapValue(GetXmlName(schema), HashingUtils::Base64Encode(value)); }

  void WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }

  void WriteNull(const Schema&) {
    // XML omits null values — no output
  }

  bool BeginList(const Schema& schema, size_t) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum serialization depth exceeded";
      return false;
    }
    FlushOpenTag();
    const auto name = GetXmlName(schema);
    if (IsFlattened(schema)) {
      // Flattened: no wrapper element, items repeat with the list's xmlName
      m_depth++;
      m_tagStack[m_depth] = name;
      m_listItemName[m_depth] = name;
      m_isList[m_depth] = true;
      m_isFlattened[m_depth] = true;
      m_isMap[m_depth] = false;
    } else {
      // Non-flattened: wrap in container element, items use configurable name
      if (!name.empty()) {
        OpenTag(name);
      }
      m_depth++;
      m_tagStack[m_depth] = name;
      m_listItemName[m_depth] = GetListItemName(schema);
      m_isList[m_depth] = true;
      m_isFlattened[m_depth] = false;
      m_isMap[m_depth] = false;
    }
    return true;
  }

  void EndList() {
    const auto& name = m_tagStack[m_depth];
    bool flattened = m_isFlattened[m_depth];
    m_isList[m_depth] = false;
    m_depth--;
    if (!flattened && !name.empty()) {
      CloseTag(name);
    }
  }

  bool BeginMap(const Schema& schema, size_t) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum serialization depth exceeded";
      return false;
    }
    FlushOpenTag();
    const auto name = GetXmlName(schema);
    bool flattened = IsFlattened(schema);
    if (!flattened && !name.empty()) {
      OpenTag(name);
    }
    m_depth++;
    m_tagStack[m_depth] = name;
    m_isMap[m_depth] = true;
    m_isList[m_depth] = false;
    m_isFlattened[m_depth] = flattened;
    m_mapInEntry[m_depth] = false;
    m_mapEntryName[m_depth] = flattened ? name : GetMapEntryName(schema);
    m_mapKeyName[m_depth] = GetMapKeyName(schema);
    m_mapValueName[m_depth] = GetMapValueName(schema);
    return true;
  }

  void WriteMapKey(const Aws::String& key) {
    OpenTag(m_mapEntryName[m_depth]);
    OpenTag(m_mapKeyName[m_depth]);
    WriteXmlEscaped(m_buf, key);
    CloseTag(m_mapKeyName[m_depth]);
    m_mapInEntry[m_depth] = true;
  }

  void EndMap() {
    const auto& name = m_tagStack[m_depth];
    bool flattened = m_isFlattened[m_depth];
    m_isMap[m_depth] = false;
    m_depth--;
    if (!flattened && !name.empty()) {
      CloseTag(name);
    }
  }

  bool BeginNestedStructure(const Schema& schema) {
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum serialization depth exceeded";
      return false;
    }
    FlushOpenTag();
    if (m_depth > 0 && m_isMap[m_depth] && m_mapInEntry[m_depth]) {
      // Inside a map entry: open <value> as the struct wrapper
      OpenTag(m_mapValueName[m_depth]);
      m_mapInEntry[m_depth] = false;
      m_depth++;
      m_tagStack[m_depth] = "";
      m_isList[m_depth] = false;
      m_isMap[m_depth] = false;
      m_isFlattened[m_depth] = false;
      m_mapInEntry[m_depth] = false;
      m_isMapValueStruct[m_depth] = true;
      return true;
    }
    const auto name = GetEffectiveTag(schema);
    OpenTag(name);
    m_depth++;
    m_tagStack[m_depth] = name;
    m_isList[m_depth] = false;
    m_isMap[m_depth] = false;
    m_isFlattened[m_depth] = false;
    m_mapInEntry[m_depth] = false;
    m_isMapValueStruct[m_depth] = false;
    return true;
  }

  void EndNestedStructure() {
    const auto& name = m_tagStack[m_depth];
    bool closeMapEntry = m_isMapValueStruct[m_depth];
    m_depth--;
    if (!name.empty()) {
      CloseTag(name);
    }
    if (closeMapEntry) {
      CloseTag(m_mapValueName[m_depth]);
      CloseTag(m_mapEntryName[m_depth]);
    }
  }

  using SerializerOutcome = XmlShapeSerializer::SerializerOutcome;

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
  bool m_finalized = false;
  bool m_hasOpenTag = false;
  Aws::String m_errorMessage;
  Aws::Array<Aws::String, MAX_DEPTH> m_tagStack{};
  Aws::Array<Aws::String, MAX_DEPTH> m_listItemName{};
  Aws::Array<bool, MAX_DEPTH> m_isList{};
  Aws::Array<bool, MAX_DEPTH> m_isFlattened{};
  Aws::Array<bool, MAX_DEPTH> m_isMap{};
  Aws::Array<bool, MAX_DEPTH> m_mapInEntry{};
  Aws::Array<bool, MAX_DEPTH> m_isMapValueStruct{};
  Aws::Array<Aws::String, MAX_DEPTH> m_mapEntryName{};
  Aws::Array<Aws::String, MAX_DEPTH> m_mapKeyName{};
  Aws::Array<Aws::String, MAX_DEPTH> m_mapValueName{};

  void FlushOpenTag() {
    if (m_hasOpenTag) {
      m_buf += '>';
      m_hasOpenTag = false;
    }
  }

  void OpenTag(const Aws::String& name) {
    FlushOpenTag();
    m_buf += '<';
    m_buf += name;
    m_buf += '>';
  }

  void CloseTag(const Aws::String& name) {
    m_buf += "</";
    m_buf += name;
    m_buf += '>';
  }

  void WrapValue(const Aws::String& tag, const Aws::String& value) {
    if (m_depth > 0 && m_isMap[m_depth] && m_mapInEntry[m_depth]) {
      OpenTag(m_mapValueName[m_depth]);
      m_buf += value;
      CloseTag(m_mapValueName[m_depth]);
      CloseTag(m_mapEntryName[m_depth]);
      m_mapInEntry[m_depth] = false;
    } else if (m_depth > 0 && m_isList[m_depth]) {
      const auto& itemName = m_listItemName[m_depth];
      OpenTag(itemName);
      m_buf += value;
      CloseTag(itemName);
    } else {
      OpenTag(tag);
      m_buf += value;
      CloseTag(tag);
    }
  }

  void WrapEscapedValue(const Aws::String& tag, const Aws::String& value) {
    if (m_depth > 0 && m_isMap[m_depth] && m_mapInEntry[m_depth]) {
      OpenTag(m_mapValueName[m_depth]);
      WriteXmlEscaped(m_buf, value);
      CloseTag(m_mapValueName[m_depth]);
      CloseTag(m_mapEntryName[m_depth]);
      m_mapInEntry[m_depth] = false;
    } else if (m_depth > 0 && m_isList[m_depth]) {
      const auto& itemName = m_listItemName[m_depth];
      OpenTag(itemName);
      WriteXmlEscaped(m_buf, value);
      CloseTag(itemName);
    } else {
      OpenTag(tag);
      WriteXmlEscaped(m_buf, value);
      CloseTag(tag);
    }
  }

  Aws::String GetEffectiveTag(const Schema& schema) const {
    if (m_depth > 0 && m_isList[m_depth]) {
      return m_listItemName[m_depth];
    }
    return GetXmlName(schema);
  }

  static void WriteXmlEscaped(Aws::String& buf, const Aws::String& value) {
    const char* data = value.data();
    const size_t len = value.size();
    size_t i = 0;
    while (i < len) {
      size_t start = i;
      while (i < len && data[i] != '&' && data[i] != '<' && data[i] != '>' && data[i] != '"' && data[i] != '\'') {
        i++;
      }
      if (i > start) {
        buf.append(data + start, i - start);
      }
      if (i < len) {
        switch (data[i]) {
          case '&':
            buf += "&amp;";
            break;
          case '<':
            buf += "&lt;";
            break;
          case '>':
            buf += "&gt;";
            break;
          case '"':
            buf += "&quot;";
            break;
          case '\'':
            buf += "&apos;";
            break;
        }
        i++;
      }
    }
  }

  static Aws::String GetXmlName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return schema.GetMemberName();
  }

  static bool IsFlattened(const Schema& schema) { return schema.HasTrait(XmlFlattenedTrait::KEY()); }

  static Aws::String GetListItemName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlListItemNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return "member";
  }

  static Aws::String GetMapEntryName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapEntryNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return "entry";
  }

  static Aws::String GetMapKeyName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapKeyNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return "key";
  }

  static Aws::String GetMapValueName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapValueNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return "value";
  }
};

XmlShapeSerializer::XmlShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("XmlShapeSerializer")) {}
XmlShapeSerializer::~XmlShapeSerializer() = default;

bool XmlShapeSerializer::BeginStructure(const Schema& schema) { return m_impl->BeginStructure(schema); }
void XmlShapeSerializer::EndStructure() { m_impl->EndStructure(); }
void XmlShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void XmlShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void XmlShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void XmlShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void XmlShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void XmlShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void XmlShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void XmlShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void XmlShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }
bool XmlShapeSerializer::BeginList(const Schema& schema, size_t count) { return m_impl->BeginList(schema, count); }
void XmlShapeSerializer::EndList() { m_impl->EndList(); }
bool XmlShapeSerializer::BeginMap(const Schema& schema, size_t count) { return m_impl->BeginMap(schema, count); }
void XmlShapeSerializer::WriteMapKey(const Aws::String& key) { m_impl->WriteMapKey(key); }
void XmlShapeSerializer::EndMap() { m_impl->EndMap(); }
bool XmlShapeSerializer::BeginNestedStructure(const Schema& schema) { return m_impl->BeginNestedStructure(schema); }
void XmlShapeSerializer::EndNestedStructure() { m_impl->EndNestedStructure(); }
XmlShapeSerializer::SerializerOutcome XmlShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
void XmlShapeSerializer::WriteAttribute(const Schema& schema, const Aws::String& value) { m_impl->WriteAttribute(schema, value); }
