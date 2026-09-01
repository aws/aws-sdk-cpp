/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <cmath>
#include <cstdlib>
#include <limits>

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

using namespace smithy::schema;
using namespace Aws::Utils;

class XmlShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  Impl(const unsigned char* data, size_t length) : m_xml(reinterpret_cast<const char*>(data), length) {
    const Element root = FindRoot();
    m_tagBegin = root.tagBegin;
    m_tagEnd = root.tagEnd;
    m_contentBegin = root.contentBegin;
    m_contentEnd = root.contentEnd;
    m_valid = root.found;
  }

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override {
    if (!m_valid) {
      return;
    }
    for (uint16_t i = 0; i < schema.GetMemberCount(); ++i) {
      const auto member = schema.GetMember(static_cast<int>(i));
      if (!member.has_value() || !*member) {
        continue;
      }
      const Schema& memberSchema = **member;
      const Aws::String name = XmlName(memberSchema);
      const Cursor saved = SaveCursor();
      bool deliver = false;

      if (IsAttribute(memberSchema)) {
        m_attr = name;
        m_flattened = false;
        deliver = true;
      } else {
        const ShapeType type = memberSchema.GetType();
        const bool flattened = IsFlattened(memberSchema) && (type == ShapeType::List || type == ShapeType::Map);
        if (flattened) {
          if (FindChild(m_contentBegin, m_contentEnd, name, m_contentBegin).found) {
            m_flattened = true;
            m_flatName = name;
            m_attr.clear();
            deliver = true;
          }
        } else {
          const Element child = FindChild(m_contentBegin, m_contentEnd, name, m_contentBegin);
          if (child.found) {
            EnterElement(child);
            m_flattened = false;
            m_attr.clear();
            deliver = true;
          }
        }
      }
      if (deliver) {
        consumer(memberSchema, *this);
      }
      RestoreCursor(saved);
    }
  }

  void ReadList(const Schema& schema, const ListElementConsumer& consumer) override {
    if (!m_valid) {
      return;
    }

    const Aws::String itemName = m_flattened ? m_flatName : GetListItemName(schema);
    const size_t begin = m_contentBegin;
    const size_t end = m_contentEnd;
    for (Element item = FindChild(begin, end, itemName, begin); item.found; item = FindChild(begin, end, itemName, item.nodeEnd)) {
      const Cursor saved = SaveCursor();
      EnterElement(item);
      m_flattened = false;
      m_attr.clear();
      consumer(*this);
      RestoreCursor(saved);
    }
  }

  void ReadMap(const Schema& schema, const MapEntryConsumer& consumer) override {
    if (!m_valid) {
      return;
    }
    const Aws::String entryName = m_flattened ? m_flatName : GetMapEntryName(schema);
    const Aws::String keyName = GetMapKeyName(schema);
    const Aws::String valueName = GetMapValueName(schema);
    const size_t begin = m_contentBegin;
    const size_t end = m_contentEnd;
    for (Element entry = FindChild(begin, end, entryName, begin); entry.found;
         entry = FindChild(begin, end, entryName, entry.nodeEnd)) {
      const Element valueNode = FindChild(entry.contentBegin, entry.contentEnd, valueName, entry.contentBegin);
      if (!valueNode.found) {
        continue;
      }
      const Element keyNode = FindChild(entry.contentBegin, entry.contentEnd, keyName, entry.contentBegin);
      const Aws::String key = keyNode.found ? DecodeText(keyNode.contentBegin, keyNode.contentEnd) : Aws::String();
      const Cursor saved = SaveCursor();
      EnterElement(valueNode);
      m_flattened = false;
      m_attr.clear();
      consumer(key, *this);
      RestoreCursor(saved);
    }
  }

  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override {
    const Aws::String text = CurrentText();
    if (text == "true") {
      return true;
    }
    if (text == "false") {
      return false;
    }
    return {};
  }

  Aws::Crt::Optional<int> ReadInteger(const Schema& schema) override {
    auto val = ReadLong(schema);
    if (!val.has_value()) {
      return {};
    }
    return static_cast<int>(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override {
    const Aws::String text = CurrentText();
    if (text.empty()) {
      return {};
    }
    char* end = nullptr;
    const long long value = std::strtoll(text.c_str(), &end, 10);
    if (end != text.c_str() + text.size()) {
      return {};
    }
    return static_cast<int64_t>(value);
  }

  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override {
    auto val = ReadDouble(schema);
    if (!val.has_value()) {
      return {};
    }
    return static_cast<float>(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble(const Schema&) override {
    const Aws::String text = CurrentText();
    if (text == "NaN") {
      return std::numeric_limits<double>::quiet_NaN();
    }
    if (text == "Infinity") {
      return std::numeric_limits<double>::infinity();
    }
    if (text == "-Infinity") {
      return -std::numeric_limits<double>::infinity();
    }
    if (text.empty()) {
      return {};
    }
    char* end = nullptr;
    const double value = std::strtod(text.c_str(), &end);
    if (end != text.c_str() + text.size()) {
      return {};
    }
    return value;
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override { return CurrentText(); }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema&) override {
    DateTime parsed(CurrentText(), DateFormat::ISO_8601);
    if (!parsed.WasParseSuccessful()) {
      return {};
    }
    return parsed;
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override { return HashingUtils::Base64Decode(CurrentText()); }

  Aws::Crt::Optional<int> ReadEnum(const Schema& schema) override { return ReadInteger(schema); }

  bool IsNull() override { return !m_valid; }

 private:

  struct Element {
    bool found = false;
    size_t tagBegin = 0;
    size_t tagEnd = 0;
    size_t contentBegin = 0;
    size_t contentEnd = 0;
    size_t nodeEnd = 0;
  };
  struct Cursor {
    size_t tagBegin, tagEnd, contentBegin, contentEnd;
    bool flattened;
    Aws::String flatName;
    Aws::String attr;
  };
  Cursor SaveCursor() const { return Cursor{m_tagBegin, m_tagEnd, m_contentBegin, m_contentEnd, m_flattened, m_flatName, m_attr}; }
  void RestoreCursor(const Cursor& c) {
    m_tagBegin = c.tagBegin;
    m_tagEnd = c.tagEnd;
    m_contentBegin = c.contentBegin;
    m_contentEnd = c.contentEnd;
    m_flattened = c.flattened;
    m_flatName = c.flatName;
    m_attr = c.attr;
  }
  void EnterElement(const Element& e) {
    m_tagBegin = e.tagBegin;
    m_tagEnd = e.tagEnd;
    m_contentBegin = e.contentBegin;
    m_contentEnd = e.contentEnd;
  }

  static bool IsWs(char c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
  bool StartsWith(size_t pos, const char* lit) const {
    const size_t n = std::strlen(lit);
    return pos + n <= m_xml.size() && m_xml.compare(pos, n, lit) == 0;
  }
  size_t Npos() const { return Aws::String::npos; }

  size_t FindTagEnd(size_t lt) const {
    size_t p = lt + 1;
    while (p < m_xml.size()) {
      const char c = m_xml[p];
      if (c == '"' || c == '\'') {
        const size_t q = m_xml.find(c, p + 1);
        if (q == Aws::String::npos) {
          return m_xml.size();
        }
        p = q + 1;
      } else if (c == '>') {
        return p;
      } else {
        ++p;
      }
    }
    return m_xml.size();
  }

  Aws::String ReadName(size_t nameStart) const {
    size_t p = nameStart;
    while (p < m_xml.size()) {
      const char c = m_xml[p];
      if (IsWs(c) || c == '>' || c == '/') {
        break;
      }
      ++p;
    }
    return m_xml.substr(nameStart, p - nameStart);
  }

  size_t FindMatchingClose(size_t contentBegin, size_t limit) const {
    size_t p = contentBegin;
    int depth = 0;
    while (p < limit) {
      const size_t lt = m_xml.find('<', p);
      if (lt == Aws::String::npos || lt >= limit) {
        return limit;
      }
      if (StartsWith(lt, "<!--")) {
        const size_t e = m_xml.find("-->", lt);
        p = (e == Aws::String::npos) ? limit : e + 3;
        continue;
      }
      if (StartsWith(lt, "<![CDATA[")) {
        const size_t e = m_xml.find("]]>", lt);
        p = (e == Aws::String::npos) ? limit : e + 3;
        continue;
      }
      if (StartsWith(lt, "<?")) {
        const size_t e = m_xml.find("?>", lt);
        p = (e == Aws::String::npos) ? limit : e + 2;
        continue;
      }
      if (m_xml[lt + 1] == '/') {
        if (depth == 0) {
          return lt;
        }
        --depth;
        const size_t gt = m_xml.find('>', lt);
        p = (gt == Aws::String::npos) ? limit : gt + 1;
        continue;
      }
      const size_t gt = FindTagEnd(lt);
      if (gt == 0 || m_xml[gt - 1] != '/') {
        ++depth;
      }
      p = gt + 1;
    }
    return limit;
  }

  Element FindChild(size_t begin, size_t end, const Aws::String& name, size_t from) const {
    size_t p = (from < begin) ? begin : from;
    while (p < end) {
      const size_t lt = m_xml.find('<', p);
      if (lt == Aws::String::npos || lt >= end) {
        break;
      }
      if (StartsWith(lt, "<!--")) {
        const size_t e = m_xml.find("-->", lt);
        p = (e == Aws::String::npos) ? end : e + 3;
        continue;
      }
      if (StartsWith(lt, "<![CDATA[")) {
        const size_t e = m_xml.find("]]>", lt);
        p = (e == Aws::String::npos) ? end : e + 3;
        continue;
      }
      if (StartsWith(lt, "<?")) {
        const size_t e = m_xml.find("?>", lt);
        p = (e == Aws::String::npos) ? end : e + 2;
        continue;
      }
      if (m_xml[lt + 1] == '/') {
        break;
      }
      const size_t gt = FindTagEnd(lt);
      const bool selfClosing = (gt > 0 && m_xml[gt - 1] == '/');
      const Aws::String tagName = ReadName(lt + 1);

      Element e;
      e.tagBegin = lt;
      e.tagEnd = gt;
      e.contentBegin = gt + 1;
      if (selfClosing) {
        e.contentEnd = gt;
        e.nodeEnd = gt + 1;
      } else {
        const size_t closeLt = FindMatchingClose(gt + 1, end);
        e.contentEnd = closeLt;
        const size_t closeGt = m_xml.find('>', closeLt);
        e.nodeEnd = (closeGt == Aws::String::npos) ? end : closeGt + 1;
      }
      if (tagName == name) {
        e.found = true;
        return e;
      }
      p = e.nodeEnd;
    }
    return Element{};
  }

  Element FindRoot() const {
    size_t p = 0;
    while (p < m_xml.size()) {
      const size_t lt = m_xml.find('<', p);
      if (lt == Aws::String::npos) {
        break;
      }
      if (StartsWith(lt, "<?") || StartsWith(lt, "<!")) {
        if (StartsWith(lt, "<!--")) {
          const size_t e = m_xml.find("-->", lt);
          p = (e == Aws::String::npos) ? m_xml.size() : e + 3;
        } else {
          const size_t gt = m_xml.find('>', lt);
          p = (gt == Aws::String::npos) ? m_xml.size() : gt + 1;
        }
        continue;
      }
      const size_t gt = FindTagEnd(lt);
      const bool selfClosing = (gt > 0 && m_xml[gt - 1] == '/');
      Element e;
      e.found = true;
      e.tagBegin = lt;
      e.tagEnd = gt;
      e.contentBegin = gt + 1;
      if (selfClosing) {
        e.contentEnd = gt;
        e.nodeEnd = gt + 1;
      } else {
        const size_t closeLt = FindMatchingClose(gt + 1, m_xml.size());
        e.contentEnd = closeLt;
        const size_t closeGt = m_xml.find('>', closeLt);
        e.nodeEnd = (closeGt == Aws::String::npos) ? m_xml.size() : closeGt + 1;
      }
      return e;
    }
    return Element{};
  }

  Aws::String DecodeText(size_t begin, size_t end) const {
    if (end <= begin) {
      return Aws::String();
    }
    return Aws::Utils::Xml::DecodeEscapedXmlText(m_xml.substr(begin, end - begin));
  }

  Aws::String AttributeValue(const Aws::String& attr) const {
    size_t p = m_tagBegin;
    while (p < m_tagEnd) {
      const size_t f = m_xml.find(attr, p);
      if (f == Aws::String::npos || f >= m_tagEnd) {
        break;
      }
      const char prev = (f > m_tagBegin) ? m_xml[f - 1] : ' ';
      size_t a = f + attr.size();
      while (a < m_tagEnd && IsWs(m_xml[a])) {
        ++a;
      }
      if ((IsWs(prev) || prev == '<') && a < m_tagEnd && m_xml[a] == '=') {
        size_t q = a + 1;
        while (q < m_tagEnd && IsWs(m_xml[q])) {
          ++q;
        }
        if (q < m_tagEnd && (m_xml[q] == '"' || m_xml[q] == '\'')) {
          const char quote = m_xml[q];
          const size_t vb = q + 1;
          const size_t ve = m_xml.find(quote, vb);
          if (ve != Aws::String::npos) {
            return m_xml.substr(vb, ve - vb);
          }
        }
      }
      p = f + attr.size();
    }
    return Aws::String();
  }

  Aws::String CurrentText() const {
    if (m_attr.empty()) {
      return DecodeText(m_contentBegin, m_contentEnd);
    }
    return Aws::Utils::Xml::DecodeEscapedXmlText(AttributeValue(m_attr));
  }

  static Aws::String XmlName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlNameTrait::KEY());
    return trait ? trait->GetValue() : schema.GetMemberName();
  }
  static bool IsFlattened(const Schema& schema) { return schema.HasTrait(XmlFlattenedTrait::KEY()); }
  static bool IsAttribute(const Schema& schema) { return schema.HasTrait(XmlAttributeTrait::KEY()); }
  static Aws::String GetListItemName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlListItemNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("member");
  }
  static Aws::String GetMapEntryName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapEntryNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("entry");
  }
  static Aws::String GetMapKeyName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapKeyNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("key");
  }
  static Aws::String GetMapValueName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapValueNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("value");
  }

  Aws::String m_xml;
  size_t m_tagBegin = 0;
  size_t m_tagEnd = 0;
  size_t m_contentBegin = 0;
  size_t m_contentEnd = 0;
  bool m_valid = false;
  bool m_flattened = false;
  Aws::String m_flatName;
  Aws::String m_attr;
};

XmlShapeDeserializer::XmlShapeDeserializer(const unsigned char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("XmlShapeDeserializer", data, length)) {}
XmlShapeDeserializer::~XmlShapeDeserializer() = default;

void XmlShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) {
  m_impl->ReadStruct(schema, consumer);
}
void XmlShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) {
  m_impl->ReadList(schema, consumer);
}
void XmlShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> XmlShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> XmlShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> XmlShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> XmlShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> XmlShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> XmlShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> XmlShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> XmlShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
Aws::Crt::Optional<int> XmlShapeDeserializer::ReadEnum(const Schema& schema) { return m_impl->ReadEnum(schema); }
bool XmlShapeDeserializer::IsNull() { return m_impl->IsNull(); }
