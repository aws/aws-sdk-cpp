/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <limits>
#include <utility>

using namespace smithy::schema;
using namespace Aws::Utils;

class XmlShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  explicit Impl(Aws::Crt::ByteCursor data, CodecSettings settings)
      : m_xml(reinterpret_cast<const char*>(data.ptr), data.len), m_settings(settings) {
    const auto malformed = CheckWellFormed();
    if (malformed.has_value()) {
      Fail(*malformed);
      return;
    }
    const Element root = FindRoot();
    if (!root.found) {
      if (m_xml.find_first_not_of(" \t\r\n") != Aws::String::npos) {
        Fail("Malformed XML: no root element");
      }
      return;
    }
    EnterElement(root);
    m_valid = true;
  }

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override {
    if (!m_valid || HasFailed()) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }
    bool delivered = false;
    for (uint16_t i = 0; i < schema.GetMemberCount() && !HasFailed(); ++i) {
      const auto member = schema.GetMember(static_cast<int>(i));
      if (!member.has_value() || !*member) {
        continue;
      }
      const Schema& memberSchema = **member;
      const Aws::String name = XmlName(memberSchema);
      const Cursor saved = SaveCursor();
      bool deliver = false;

      if (IsAttribute(memberSchema)) {
        m_attrValue = AttributeValue(name);
        m_flattened = false;
        deliver = m_attrValue.has_value();
      } else {
        const ShapeType type = memberSchema.GetType();
        const bool flattened = IsFlattened(memberSchema) && (type == ShapeType::List || type == ShapeType::Map);
        if (flattened) {
          if (FindChild(m_contentBegin, m_contentEnd, name, m_contentBegin).found) {
            m_flattened = true;
            m_flatName = name;
            m_attrValue.reset();
            deliver = true;
          }
        } else {
          const Element child = FindChild(m_contentBegin, m_contentEnd, name, m_contentBegin);
          if (child.found) {
            EnterElement(child);
            m_flattened = false;
            m_attrValue.reset();
            deliver = true;
          }
        }
      }
      if (deliver && AdmitMember(schema, delivered)) {
        consumer(memberSchema, *this);
      }
      RestoreCursor(saved);
    }
  }

  void ReadList(const Schema& schema, const ListElementConsumer& consumer) override {
    if (!m_valid || HasFailed()) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }

    const Aws::String itemName = m_flattened ? m_flatName : GetListItemName(schema);
    const size_t begin = m_contentBegin;
    const size_t end = m_contentEnd;
    for (Element item = FindChild(begin, end, itemName, begin); item.found && !HasFailed();
         item = FindChild(begin, end, itemName, item.nodeEnd)) {
      const Cursor saved = SaveCursor();
      EnterElement(item);
      m_flattened = false;
      m_attrValue.reset();
      consumer(*this);
      RestoreCursor(saved);
    }
  }

  void ReadMap(const Schema& schema, const MapEntryConsumer& consumer) override {
    if (!m_valid || HasFailed()) {
      return;
    }
    const ContainerScope scope(*this);
    if (!scope.Entered()) {
      return;
    }
    const Aws::String entryName = m_flattened ? m_flatName : GetMapEntryName(schema);
    const Aws::String keyName = GetMapKeyName(schema);
    const Aws::String valueName = GetMapValueName(schema);
    const size_t begin = m_contentBegin;
    const size_t end = m_contentEnd;
    for (Element entry = FindChild(begin, end, entryName, begin); entry.found && !HasFailed();
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
      m_attrValue.reset();
      consumer(key, *this);
      RestoreCursor(saved);
    }
  }

  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override {
    if (HasFailed()) {
      return {};
    }
    Aws::String text = ScalarText();
    std::transform(text.begin(), text.end(), text.begin(),
                   [](char c) { return c >= 'A' && c <= 'Z' ? static_cast<char>(c - 'A' + 'a') : c; });
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
    return NarrowToInt(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override {
    if (HasFailed()) {
      return {};
    }
    return ParseLong(ScalarText());
  }

  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override {
    auto val = ReadDouble(schema);
    if (!val.has_value()) {
      return {};
    }
    return NarrowToFloat(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble(const Schema&) override {
    if (HasFailed()) {
      return {};
    }
    const Aws::String text = ScalarText();
    if (text == "NaN") {
      return std::numeric_limits<double>::quiet_NaN();
    }
    if (text == "Infinity") {
      return std::numeric_limits<double>::infinity();
    }
    if (text == "-Infinity") {
      return -std::numeric_limits<double>::infinity();
    }
    const auto value = StringUtils::ParseDouble(text);
    if (value.has_value() && !std::isfinite(*value)) {
      FailUnrepresentable("double");
      return {};
    }
    return value;
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override {
    if (HasFailed()) {
      return {};
    }
    return CurrentText();
  }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema& schema) override {
    if (HasFailed()) {
      return {};
    }
    const auto format = ResolveTimestampFormat(schema, m_settings.GetDefaultTimestampFormat());
    if (format == TimestampFormatTrait::Format::EPOCH_SECONDS) {
      const auto seconds = StringUtils::ParseDouble(ScalarText());
      if (!seconds.has_value()) {
        return {};
      }
      return EpochSecondsToTimestamp(*seconds);
    }
    const DateFormat df =
        format == TimestampFormatTrait::Format::HTTP_DATE ? DateFormat::RFC822 : DateFormat::ISO_8601;
    DateTime parsed(ScalarText(), df);
    if (!parsed.WasParseSuccessful()) {
      return {};
    }
    return parsed;
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override {
    if (HasFailed()) {
      return {};
    }
    return HashingUtils::Base64Decode(CurrentText());
  }

  std::shared_ptr<const Document> ReadDocument(const Schema&) override {
    AWS_LOGSTREAM_WARN("XmlShapeDeserializer", "document type is not supported by the REST XML protocol");
    return nullptr;
  }

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
    Aws::Crt::Optional<Aws::String> attrValue;
  };
  Cursor SaveCursor() const { return Cursor{m_tagBegin, m_tagEnd, m_contentBegin, m_contentEnd, m_flattened, m_flatName, m_attrValue}; }
  void RestoreCursor(const Cursor& c) {
    m_tagBegin = c.tagBegin;
    m_tagEnd = c.tagEnd;
    m_contentBegin = c.contentBegin;
    m_contentEnd = c.contentEnd;
    m_flattened = c.flattened;
    m_flatName = c.flatName;
    m_attrValue = c.attrValue;
  }
  void EnterElement(const Element& e) {
    m_tagBegin = e.tagBegin;
    m_tagEnd = e.tagEnd;
    m_contentBegin = e.contentBegin;
    m_contentEnd = e.contentEnd;
  }
 public:
  bool EnterWrapper(const Aws::String& name) {
    if (!m_valid) {
      return false;
    }
    const Element child = FindChild(m_contentBegin, m_contentEnd, name, m_contentBegin);
    if (!child.found) {
      return false;
    }
    EnterElement(child);
    m_flattened = false;
    m_attrValue.reset();
    return true;
  }

 private:

  static bool IsWs(char c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
  bool StartsWith(size_t pos, const char* lit) const {
    const size_t n = std::strlen(lit);
    return pos + n <= m_xml.size() && m_xml.compare(pos, n, lit) == 0;
  }
  size_t Npos() const { return Aws::String::npos; }

  // Every scanner classifies markup here so they agree on the tree. npos if unterminated; lt if lt starts a tag.
  size_t SkipNonElementMarkup(size_t lt) const {
    static const std::pair<const char*, const char*> MARKUP[] = {{"<!--", "-->"}, {"<![CDATA[", "]]>"}, {"<?", "?>"}, {"<!", ">"}};
    for (const auto& markup : MARKUP) {
      if (StartsWith(lt, markup.first)) {
        const size_t e = m_xml.find(markup.second, lt + std::strlen(markup.first));
        return e == Npos() ? Npos() : e + std::strlen(markup.second);
      }
    }
    return lt;
  }

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
      const size_t skip = SkipNonElementMarkup(lt);
      if (skip != lt) {
        p = (skip == Npos()) ? limit : skip;
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
      const size_t skip = SkipNonElementMarkup(lt);
      if (skip != lt) {
        p = (skip == Npos()) ? end : skip;
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

  // Navigation assumes the balanced, single-root tree this checks for.
  Aws::Crt::Optional<Aws::String> CheckWellFormed() const {
    Aws::Vector<Aws::String> open;
    bool rootSeen = false;
    bool instructionsOnly = true;
    size_t p = StartsWith(0, "\xEF\xBB\xBF") ? 3 : 0;
    while (p < m_xml.size()) {
      const size_t lt = m_xml.find('<', p);
      const size_t textEnd = (lt == Aws::String::npos) ? m_xml.size() : lt;
      if (open.empty()) {
        const size_t text = m_xml.find_first_not_of(" \t\r\n", p);
        if (text != Aws::String::npos && text < textEnd) {
          return Aws::String("Malformed XML: text outside the root element");
        }
      }
      if (lt == Aws::String::npos) {
        break;
      }
      if (open.empty() && StartsWith(lt, "<![CDATA[")) {
        return Aws::String("Malformed XML: text outside the root element");
      }
      const bool instruction = StartsWith(lt, "<?");
      if (instruction && !instructionsOnly) {
        return Aws::String("Malformed XML: processing instruction after other markup");
      }
      instructionsOnly = instruction;
      const size_t skip = SkipNonElementMarkup(lt);
      if (skip == Npos()) {
        return Aws::String("Malformed XML: unterminated markup");
      }
      if (skip != lt) {
        p = skip;
        continue;
      }
      const size_t gt = FindTagEnd(lt);
      if (gt >= m_xml.size()) {
        return Aws::String("Malformed XML: unterminated tag");
      }
      if (m_xml[lt + 1] == '/') {
        const Aws::String name = ReadName(lt + 2);
        if (open.empty() || open.back() != name) {
          return Aws::String("Malformed XML: mismatched closing tag");
        }
        // Navigation ends a closing tag at the first '>', so nothing but whitespace may follow the name.
        if (m_xml.find_first_not_of(" \t\r\n", lt + 2 + name.size()) != gt) {
          return Aws::String("Malformed XML: invalid closing tag");
        }
        open.pop_back();
      } else {
        if (open.empty() && rootSeen) {
          return Aws::String("Malformed XML: multiple root elements");
        }
        Aws::String name = ReadName(lt + 1);
        if (name.empty()) {
          return Aws::String("Malformed XML: missing element name");
        }
        if (!IsXmlName(name)) {
          return Aws::String("Malformed XML: invalid element name");
        }
        auto attributes = CheckAttributes(lt + 1 + name.size(), gt);
        if (attributes.has_value()) {
          return attributes;
        }
        rootSeen = true;
        if (m_xml[gt - 1] != '/') {
          open.push_back(std::move(name));
        }
      }
      p = gt + 1;
    }
    if (!open.empty()) {
      return Aws::String("Malformed XML: unclosed element");
    }
    return {};
  }

  // Names and attributes follow tinyxml2, which legacy clients used.
  static bool IsNameStartChar(unsigned char c) {
    return c >= 0x80 || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == ':' || c == '_';
  }
  static bool IsNameChar(unsigned char c) { return IsNameStartChar(c) || (c >= '0' && c <= '9') || c == '.' || c == '-'; }
  static bool IsXmlName(const Aws::String& name) {
    return !name.empty() && IsNameStartChar(name[0]) && std::all_of(name.begin() + 1, name.end(), [](char c) { return IsNameChar(c); });
  }

  Aws::Crt::Optional<Aws::String> CheckAttributes(size_t p, size_t gt) const {
    const size_t limit = m_xml[gt - 1] == '/' ? gt - 1 : gt;
    Aws::Vector<Aws::String> names;
    for (size_t nameBegin = m_xml.find_first_not_of(" \t\r\n", p); nameBegin < limit;
         nameBegin = m_xml.find_first_not_of(" \t\r\n", p)) {
      size_t nameEnd = nameBegin;
      while (nameEnd < limit && IsNameChar(m_xml[nameEnd])) {
        ++nameEnd;
      }
      const size_t eq = m_xml.find_first_not_of(" \t\r\n", nameEnd);
      const size_t quote = eq < limit && m_xml[eq] == '=' ? m_xml.find_first_not_of(" \t\r\n", eq + 1) : Npos();
      const bool quoted = quote < limit && (m_xml[quote] == '"' || m_xml[quote] == '\'');
      const size_t close = quoted ? m_xml.find(m_xml[quote], quote + 1) : Npos();
      if (nameEnd == nameBegin || !IsNameStartChar(m_xml[nameBegin]) || close >= limit) {
        return Aws::String("Malformed XML: invalid attribute");
      }
      Aws::String name = m_xml.substr(nameBegin, nameEnd - nameBegin);
      if (std::find(names.begin(), names.end(), name) != names.end()) {
        return Aws::String("Malformed XML: duplicate attribute");
      }
      names.push_back(std::move(name));
      p = close + 1;
    }
    return {};
  }

  Element FindRoot() const {
    size_t p = 0;
    while (p < m_xml.size()) {
      const size_t lt = m_xml.find('<', p);
      if (lt == Aws::String::npos) {
        break;
      }
      const size_t skip = SkipNonElementMarkup(lt);
      if (skip != lt) {
        p = (skip == Npos()) ? m_xml.size() : skip;
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

  // Decodes as tinyxml2 did for legacy clients; an unrecognised reference is kept as written.
  static void AppendCharacterData(const Aws::String& text, size_t begin, size_t end, bool decodeReferences, Aws::String& out) {
    size_t p = begin;
    while (p < end) {
      const char c = text[p];
      if (c == '\r' || c == '\n') {
        const char pair = c == '\r' ? '\n' : '\r';
        out += '\n';
        p += (p + 1 < end && text[p + 1] == pair) ? 2 : 1;
      } else if (c == '&' && decodeReferences) {
        p = AppendReference(text, p, end, out);
      } else {
        out += c;
        ++p;
      }
    }
  }

  static size_t AppendReference(const Aws::String& text, size_t amp, size_t end, Aws::String& out) {
    static const std::pair<const char*, char> PREDEFINED[] = {{"&lt;", '<'}, {"&gt;", '>'}, {"&amp;", '&'}, {"&quot;", '"'}, {"&apos;", '\''}};
    for (const auto& entity : PREDEFINED) {
      const size_t length = std::strlen(entity.first);
      if (amp + length <= end && text.compare(amp, length, entity.first) == 0) {
        out += entity.second;
        return amp + length;
      }
    }
    uint32_t codePoint = 0;
    const size_t after = ReadCharacterReference(text, amp, end, codePoint);
    if (after == amp) {
      out += '&';
      return amp + 1;
    }
    AppendUtf8(codePoint, out);
    return after;
  }

  static size_t ReadCharacterReference(const Aws::String& text, size_t amp, size_t end, uint32_t& codePoint) {
    if (amp + 2 >= end || text[amp + 1] != '#') {
      return amp;
    }
    const bool hex = text[amp + 2] == 'x';
    const size_t first = amp + (hex ? 3 : 2);
    uint32_t value = 0;
    size_t p = first;
    for (int digit = DigitValue(text, p, end, hex); digit >= 0; digit = DigitValue(text, ++p, end, hex)) {
      value = (std::min)(value * (hex ? 16u : 10u) + static_cast<uint32_t>(digit), 0x110000u);
    }
    if (p == first || p >= end || text[p] != ';' || value > 0x10FFFF) {
      return amp;
    }
    codePoint = value;
    return p + 1;
  }

  static int DigitValue(const Aws::String& text, size_t p, size_t end, bool hex) {
    const char c = p < end ? text[p] : '\0';
    if (c >= '0' && c <= '9') {
      return c - '0';
    }
    if (hex && c >= 'a' && c <= 'f') {
      return c - 'a' + 10;
    }
    return hex && c >= 'A' && c <= 'F' ? c - 'A' + 10 : -1;
  }

  static void AppendUtf8(uint32_t codePoint, Aws::String& out) {
    if (codePoint < 0x80) {
      out += static_cast<char>(codePoint);
    } else if (codePoint < 0x800) {
      out += static_cast<char>(0xC0 | (codePoint >> 6));
      out += static_cast<char>(0x80 | (codePoint & 0x3F));
    } else if (codePoint < 0x10000) {
      out += static_cast<char>(0xE0 | (codePoint >> 12));
      out += static_cast<char>(0x80 | ((codePoint >> 6) & 0x3F));
      out += static_cast<char>(0x80 | (codePoint & 0x3F));
    } else {
      out += static_cast<char>(0xF0 | (codePoint >> 18));
      out += static_cast<char>(0x80 | ((codePoint >> 12) & 0x3F));
      out += static_cast<char>(0x80 | ((codePoint >> 6) & 0x3F));
      out += static_cast<char>(0x80 | (codePoint & 0x3F));
    }
  }

  Aws::String DecodeText(size_t begin, size_t end) const {
    Aws::String out;
    size_t p = begin;
    while (p < end) {
      const size_t lt = (std::min)(m_xml.find('<', p), end);
      AppendCharacterData(m_xml, p, lt, true, out);
      p = lt < end ? AppendMarkup(lt, end, out) : end;
    }
    return out;
  }

  size_t AppendMarkup(size_t lt, size_t end, Aws::String& out) const {
    const size_t markupEnd = (std::min)(SkipNonElementMarkup(lt), end);
    if (markupEnd == lt) {
      out += '<';
      return lt + 1;
    }
    if (StartsWith(lt, "<![CDATA[")) {
      const size_t contentBegin = lt + std::strlen("<![CDATA[");
      AppendCharacterData(m_xml, contentBegin, (std::max)(contentBegin, markupEnd - std::strlen("]]>")), false, out);
    }
    return markupEnd;
  }

  Aws::Crt::Optional<Aws::String> AttributeValue(const Aws::String& attr) const {
    if (attr.empty()) {
      return Aws::Crt::Optional<Aws::String>();
    }
    size_t p = m_tagBegin + 1;
    while (p < m_tagEnd && !IsWs(m_xml[p]) && m_xml[p] != '/') {
      ++p;
    }
    while (p < m_tagEnd) {
      while (p < m_tagEnd && IsWs(m_xml[p])) {
        ++p;
      }
      const size_t nameBegin = p;
      while (p < m_tagEnd && !IsWs(m_xml[p]) && m_xml[p] != '=' && m_xml[p] != '/') {
        ++p;
      }
      const size_t nameEnd = p;
      while (p < m_tagEnd && IsWs(m_xml[p])) {
        ++p;
      }
      if (nameEnd == nameBegin || p >= m_tagEnd || m_xml[p] != '=') {
        return Aws::Crt::Optional<Aws::String>();
      }
      ++p;
      while (p < m_tagEnd && IsWs(m_xml[p])) {
        ++p;
      }
      if (p >= m_tagEnd || (m_xml[p] != '"' && m_xml[p] != '\'')) {
        return Aws::Crt::Optional<Aws::String>();
      }
      const size_t valueBegin = p + 1;
      const auto tagLimit = m_xml.begin() + static_cast<std::ptrdiff_t>(m_tagEnd);
      const auto quoteAt = std::find(m_xml.begin() + static_cast<std::ptrdiff_t>(valueBegin), tagLimit, m_xml[p]);
      if (quoteAt == tagLimit) {
        return Aws::Crt::Optional<Aws::String>();
      }
      const size_t valueEnd = static_cast<size_t>(quoteAt - m_xml.begin());
      if (m_xml.compare(nameBegin, nameEnd - nameBegin, attr) == 0) {
        return Aws::Crt::Optional<Aws::String>(m_xml.substr(valueBegin, valueEnd - valueBegin));
      }
      p = valueEnd + 1;
    }
    return Aws::Crt::Optional<Aws::String>();
  }

  Aws::String CurrentText() const {
    if (m_attrValue.has_value()) {
      Aws::String out;
      AppendCharacterData(*m_attrValue, 0, m_attrValue->size(), true, out);
      return out;
    }
    return DecodeText(m_contentBegin, m_contentEnd);
  }

  // Legacy clients trim number, boolean and timestamp text before parsing it.
  Aws::String ScalarText() const {
    const Aws::String text = CurrentText();
    const char* whitespace = " \t\n\v\f\r";
    const size_t begin = text.find_first_not_of(whitespace);
    return begin == Aws::String::npos ? Aws::String() : text.substr(begin, text.find_last_not_of(whitespace) - begin + 1);
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
  Aws::Crt::Optional<Aws::String> m_attrValue;
  CodecSettings m_settings;
};

XmlShapeDeserializer::XmlShapeDeserializer(Aws::Crt::ByteCursor data, CodecSettings settings)
    : m_impl(Aws::MakeUnique<Impl>("XmlShapeDeserializer", data, settings)) {}
XmlShapeDeserializer::~XmlShapeDeserializer() = default;

bool XmlShapeDeserializer::EnterWrapperElement(const Aws::String& name) { return m_impl->EnterWrapper(name); }
void XmlShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) { m_impl->ReadStruct(schema, consumer); }
void XmlShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) { m_impl->ReadList(schema, consumer); }
void XmlShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> XmlShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> XmlShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> XmlShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> XmlShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> XmlShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> XmlShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> XmlShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> XmlShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
std::shared_ptr<const smithy::schema::Document> XmlShapeDeserializer::ReadDocument(const Schema& schema) {
  return m_impl->ReadDocument(schema);
}
bool XmlShapeDeserializer::IsNull() { return m_impl->IsNull(); }
Aws::Crt::Optional<smithy::schema::DeserializerError> XmlShapeDeserializer::GetError() const { return m_impl->GetError(); }
