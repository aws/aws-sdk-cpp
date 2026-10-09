/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/numeric/NumericUtils.h>
#include <smithy/client/schema/AbstractDocument.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cstring>
#include <limits>
#include <memory>

using namespace smithy::schema;
using namespace Aws::Utils;

class JsonShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  explicit Impl(Aws::Crt::ByteCursor data, CodecSettings settings)
      : m_bytes(reinterpret_cast<const char*>(data.ptr), data.len), m_pos(0), m_settings(settings) {}

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override {
    if (PeekNonWs() != '{') {
      SkipValue();
      return;
    }
    ++m_pos;
    if (PeekNonWs() == '}') {
      ++m_pos;
      return;
    }
    while (true) {
      auto key = ParseString();
      if (!key.has_value()) {
        return;
      }
      if (PeekNonWs() == ':') {
        ++m_pos;
      }
      PeekNonWs();
      const auto member = ResolveMember(schema, *key);
      if (member.has_value() && *member && !IsNull()) {
        ConsumeOne([&] { consumer(**member, *this); });
      } else {
        SkipValue();
      }
      const auto more = NextInContainer('}');
      if (!more.has_value() || !*more) {
        break;
      }
    }
  }

  void ReadList(const Schema&, const ListElementConsumer& consumer) override {
    if (PeekNonWs() != '[') {
      SkipValue();
      return;
    }
    ++m_pos;
    if (PeekNonWs() == ']') {
      ++m_pos;
      return;
    }
    while (true) {
      PeekNonWs();
      if (IsNull()) {
        SkipValue();
      } else {
        ConsumeOne([&] { consumer(*this); });
      }
      const auto more = NextInContainer(']');
      if (!more.has_value() || !*more) {
        break;
      }
    }
  }

  void ReadMap(const Schema&, const MapEntryConsumer& consumer) override {
    if (PeekNonWs() != '{') {
      SkipValue();
      return;
    }
    ++m_pos;
    if (PeekNonWs() == '}') {
      ++m_pos;
      return;
    }
    while (true) {
      auto key = ParseString();
      if (!key.has_value()) {
        return;
      }
      if (PeekNonWs() == ':') {
        ++m_pos;
      }
      PeekNonWs();
      if (IsNull()) {
        SkipValue();
      } else {
        ConsumeOne([&] { consumer(*key, *this); });
      }
      const auto more = NextInContainer('}');
      if (!more.has_value() || !*more) {
        break;
      }
    }
  }

  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override {
    if (Match("true")) {
      return true;
    }
    if (Match("false")) {
      return false;
    }
    SkipValue();
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
    if (!IsNumberStart(PeekNonWs())) {
      SkipValue();
      return {};
    }
    const Aws::String token = ReadNumberToken();
    // ParseInt64 saturates, so clamping out-of-range plain integers is intentional.
    const auto value = StringUtils::ParseInt64(token);
    if (value.has_value()) {
      return value;
    }
    const auto d = StringUtils::ParseDouble(token);
    if (!d.has_value() || !IsRepresentableAsInt64(*d)) {
      return {};
    }
    return static_cast<int64_t>(*d);
  }

  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override {
    auto val = ReadDouble(schema);
    if (!val.has_value()) {
      return {};
    }
    return static_cast<float>(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble(const Schema&) override {
    const char c = PeekNonWs();
    if (c == '"') {
      auto token = ParseString();
      if (!token.has_value()) {
        return {};
      }
      if (*token == "NaN") {
        return std::numeric_limits<double>::quiet_NaN();
      }
      if (*token == "Infinity") {
        return std::numeric_limits<double>::infinity();
      }
      if (*token == "-Infinity") {
        return -std::numeric_limits<double>::infinity();
      }
      return {};
    }
    if (!IsNumberStart(c)) {
      SkipValue();
      return {};
    }
    return StringUtils::ParseDouble(ReadNumberToken());
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override {
    if (PeekNonWs() != '"') {
      SkipValue();
      return {};
    }
    return ParseString();
  }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema& schema) override {
    const char c = PeekNonWs();
    if (IsNumberStart(c)) {
      const auto seconds = StringUtils::ParseDouble(ReadNumberToken());
      if (!seconds.has_value()) {
        return {};
      }
      return DateTime(*seconds);
    }
    if (c == '"') {
      auto token = ParseString();
      if (!token.has_value()) {
        return {};
      }
      const auto format = ResolveTimestampFormat(schema, m_settings.GetDefaultTimestampFormat());
      const DateFormat df = format == TimestampFormatTrait::Format::HTTP_DATE ? DateFormat::RFC822 : DateFormat::ISO_8601;
      DateTime parsed(*token, df);
      if (!parsed.WasParseSuccessful()) {
        return {};
      }
      return parsed;
    }
    SkipValue();
    return {};
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override {
    if (PeekNonWs() != '"') {
      SkipValue();
      return {};
    }
    auto encoded = ParseString();
    if (!encoded.has_value()) {
      return {};
    }
    return HashingUtils::Base64Decode(*encoded);
  }

  std::shared_ptr<const Document> ReadDocument(const Schema&) override {
    const size_t start = m_pos;
    auto doc = ReadDocumentValue(0);
    if (!doc) {
      // A failed parse can stop part-way into the value; rewind and skip it whole so sibling members stay aligned.
      m_pos = start;
      SkipValue();
    }
    return doc;
  }

  bool IsNull() override {
    size_t p = m_pos;
    while (p < m_bytes.size() && IsWs(m_bytes[p])) {
      ++p;
    }
    return p + 4 <= m_bytes.size() && std::memcmp(m_bytes.c_str() + p, "null", 4) == 0;
  }

 private:
  // Below the serializer's MAX_DEPTH so a document that parses can always be written back, and far
  // enough below cJSON's 1000 to keep the recursive descent inside a 1 MB stack.
  static constexpr int MAX_DOCUMENT_DEPTH = 256;

  // JSON-flavored document nodes: carries this deserializer's timestamp format so AsBlob/AsTimestamp
  // on the resulting Document apply JSON coercion (base64 strings, epoch/ISO-8601 timestamps).
  std::shared_ptr<AbstractDocument> NewJsonNode() const {
    return NewJsonDocument(m_settings.GetDefaultTimestampFormat());
  }

  std::shared_ptr<const Document> ReadDocumentValue(int depth) {
    if (depth >= MAX_DOCUMENT_DEPTH) {
      return nullptr;
    }
    const char c = PeekNonWs();
    if (c == '{') {
      ++m_pos;
      Aws::Map<Aws::String, std::shared_ptr<const Document>> object;
      if (PeekNonWs() == '}') {
        ++m_pos;
        auto node = NewJsonNode();
        node->SetMap(std::move(object));
        return node;
      }
      while (true) {
        auto key = ParseString();
        if (!key.has_value()) {
          return nullptr;
        }
        if (PeekNonWs() != ':') {
          return nullptr;
        }
        ++m_pos;
        auto value = ReadDocumentValue(depth + 1);
        if (!value) {
          return nullptr;
        }
        object.emplace(std::move(*key), std::move(value));
        const auto more = NextInContainer('}');
        if (!more.has_value()) {
          return nullptr;
        }
        if (!*more) {
          break;
        }
      }
      auto node = NewJsonNode();
      node->SetMap(std::move(object));
      return node;
    }
    if (c == '[') {
      ++m_pos;
      Aws::Vector<std::shared_ptr<const Document>> list;
      if (PeekNonWs() == ']') {
        ++m_pos;
        auto node = NewJsonNode();
        node->SetList(std::move(list));
        return node;
      }
      while (true) {
        auto value = ReadDocumentValue(depth + 1);
        if (!value) {
          return nullptr;
        }
        list.push_back(std::move(value));
        const auto more = NextInContainer(']');
        if (!more.has_value()) {
          return nullptr;
        }
        if (!*more) {
          break;
        }
      }
      auto node = NewJsonNode();
      node->SetList(std::move(list));
      return node;
    }
    if (c == '"') {
      auto str = ParseString();
      if (!str.has_value()) {
        return nullptr;
      }
      auto node = NewJsonNode();
      node->SetString(std::move(*str));
      return node;
    }
    if (Match("true")) {
      auto node = NewJsonNode();
      node->SetBoolean(true);
      return node;
    }
    if (Match("false")) {
      auto node = NewJsonNode();
      node->SetBoolean(false);
      return node;
    }
    if (Match("null")) {
      return NewJsonNode();  // ShapeType::Null default
    }
    if (IsNumberStart(c)) {
      const Aws::String token = ReadNumberToken();
      const auto v = StringUtils::ParseInt64(token);
      if (v.has_value() && !SaturatedInt64(*v, token)) {
        auto node = NewJsonNode();
        node->SetInteger(*v);
        return node;
      }
      // Fraction/exponent forms, and integers out of int64 range (magnitude preserved rather than clamped).
      const auto d = StringUtils::ParseDouble(token);
      if (!d.has_value()) {
        return nullptr;
      }
      auto node = NewJsonNode();
      node->SetDouble(*d);
      return node;
    }
    SkipValue();
    return nullptr;
  }

  // True when ParseInt64 clamped an out-of-range integer, detected via its double magnitude.
  static bool SaturatedInt64(int64_t value, const Aws::String& token) {
    if (value != (std::numeric_limits<int64_t>::max)() && value != (std::numeric_limits<int64_t>::min)()) {
      return false;
    }
    const auto d = StringUtils::ParseDouble(token);
    return d.has_value() && (*d > LLONG_MAX_PLUS_ONE || *d < LLONG_MIN_AS_DOUBLE);
  }

  static Aws::String JsonName(const Schema& member) {
    const auto trait = member.GetTrait(JsonNameTrait::KEY());
    return trait ? trait->GetValue() : member.GetMemberName();
  }
  Aws::Crt::Optional<std::shared_ptr<const Schema>> ResolveMember(const Schema& schema, const Aws::String& name) {
    for (uint16_t i = 0; i < schema.GetMemberCount(); ++i) {
      const auto member = schema.GetMember(static_cast<int>(i));
      if (member.has_value() && *member && JsonName(**member) == name) {
        return member;
      }
    }
    return {};
  }

  template <typename Fn>
  void ConsumeOne(const Fn& fn) {
    const size_t before = m_pos;
    fn();
    if (m_pos == before) {
      SkipValue();
    }
  }

  // True after a separator, false at the closing bracket, absent when the next token is neither. Modeled
  // readers treat absent as a break; the document parser rejects, so a document never comes back
  // silently truncated.
  Aws::Crt::Optional<bool> NextInContainer(char close) {
    const char c = PeekNonWs();
    if (c == ',') {
      ++m_pos;
      return true;
    }
    if (c != close) {
      return {};
    }
    ++m_pos;
    return false;
  }

  static bool IsWs(char c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
  static bool IsNumberStart(char c) { return c == '-' || (c >= '0' && c <= '9'); }
  char Peek() const { return m_pos < m_bytes.size() ? m_bytes[m_pos] : '\0'; }
  void SkipWs() {
    while (m_pos < m_bytes.size() && IsWs(m_bytes[m_pos])) {
      ++m_pos;
    }
  }
  char PeekNonWs() {
    SkipWs();
    return Peek();
  }
  bool Match(const char* literal) {
    SkipWs();
    const size_t n = std::strlen(literal);
    if (m_pos + n <= m_bytes.size() && std::memcmp(m_bytes.c_str() + m_pos, literal, n) == 0) {
      m_pos += n;
      return true;
    }
    return false;
  }
  Aws::String ReadNumberToken() {
    SkipWs();
    const size_t start = m_pos;
    while (m_pos < m_bytes.size()) {
      const char c = m_bytes[m_pos];
      if ((c >= '0' && c <= '9') || c == '-' || c == '+' || c == '.' || c == 'e' || c == 'E') {
        ++m_pos;
      } else {
        break;
      }
    }
    return Aws::String(m_bytes.c_str() + start, m_pos - start);
  }

  Aws::Crt::Optional<Aws::String> ParseString() {
    if (PeekNonWs() != '"') {
      return {};
    }
    ++m_pos;
    Aws::String out;
    while (m_pos < m_bytes.size()) {
      const char ch = m_bytes[m_pos++];
      if (ch == '"') {
        return out;
      }
      if (ch != '\\') {
        out += ch;
        continue;
      }
      if (m_pos >= m_bytes.size()) {
        break;
      }
      const char esc = m_bytes[m_pos++];
      switch (esc) {
        case '"':
          out += '"';
          break;
        case '\\':
          out += '\\';
          break;
        case '/':
          out += '/';
          break;
        case 'b':
          out += '\b';
          break;
        case 'f':
          out += '\f';
          break;
        case 'n':
          out += '\n';
          break;
        case 'r':
          out += '\r';
          break;
        case 't':
          out += '\t';
          break;
        case 'u':
          AppendUnicodeEscape(out);
          break;
        default:
          out += esc;
          break;
      }
    }
    return {};
  }

  void SkipValue() {
    const char c = PeekNonWs();
    if (c == '"') {
      ParseString();
      return;
    }
    if (c == '{' || c == '[') {
      SkipContainer();
      return;
    }
    while (m_pos < m_bytes.size()) {
      const char ch = m_bytes[m_pos];
      if (ch == ',' || ch == '}' || ch == ']' || IsWs(ch)) {
        break;
      }
      ++m_pos;
    }
  }

  void SkipContainer() {
    int depth = 0;
    while (m_pos < m_bytes.size()) {
      const char ch = m_bytes[m_pos];
      if (ch == '"') {
        ParseString();
        continue;
      }
      if (ch == '{' || ch == '[') {
        ++depth;
        ++m_pos;
      } else if (ch == '}' || ch == ']') {
        --depth;
        ++m_pos;
        if (depth == 0) {
          return;
        }
      } else {
        ++m_pos;
      }
    }
  }

  void AppendUnicodeEscape(Aws::String& out) {
    uint32_t cp = 0;
    if (!ReadHex4(cp)) {
      return;
    }
    if (cp >= 0xD800 && cp <= 0xDBFF && m_pos + 1 < m_bytes.size() && m_bytes[m_pos] == '\\' && m_bytes[m_pos + 1] == 'u') {
      m_pos += 2;
      uint32_t low = 0;
      if (ReadHex4(low) && low >= 0xDC00 && low <= 0xDFFF) {
        cp = 0x10000 + ((cp - 0xD800) << 10) + (low - 0xDC00);
      }
    }
    AppendUtf8(out, cp);
  }
  bool ReadHex4(uint32_t& out) {
    if (m_pos + 4 > m_bytes.size()) {
      return false;
    }
    uint32_t value = 0;
    for (int i = 0; i < 4; ++i) {
      const char c = m_bytes[m_pos++];
      value <<= 4;
      if (c >= '0' && c <= '9') {
        value |= static_cast<uint32_t>(c - '0');
      } else if (c >= 'a' && c <= 'f') {
        value |= static_cast<uint32_t>(c - 'a' + 10);
      } else if (c >= 'A' && c <= 'F') {
        value |= static_cast<uint32_t>(c - 'A' + 10);
      } else {
        return false;
      }
    }
    out = value;
    return true;
  }
  static void AppendUtf8(Aws::String& out, uint32_t cp) {
    if (cp <= 0x7F) {
      out += static_cast<char>(cp);
    } else if (cp <= 0x7FF) {
      out += static_cast<char>(0xC0 | (cp >> 6));
      out += static_cast<char>(0x80 | (cp & 0x3F));
    } else if (cp <= 0xFFFF) {
      out += static_cast<char>(0xE0 | (cp >> 12));
      out += static_cast<char>(0x80 | ((cp >> 6) & 0x3F));
      out += static_cast<char>(0x80 | (cp & 0x3F));
    } else {
      out += static_cast<char>(0xF0 | (cp >> 18));
      out += static_cast<char>(0x80 | ((cp >> 12) & 0x3F));
      out += static_cast<char>(0x80 | ((cp >> 6) & 0x3F));
      out += static_cast<char>(0x80 | (cp & 0x3F));
    }
  }

  Aws::String m_bytes;
  size_t m_pos;
  CodecSettings m_settings;
};

JsonShapeDeserializer::JsonShapeDeserializer(Aws::Crt::ByteCursor data, CodecSettings settings)
    : m_impl(Aws::MakeUnique<Impl>("JsonShapeDeserializer", data, settings)) {}
JsonShapeDeserializer::~JsonShapeDeserializer() = default;

void JsonShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) { m_impl->ReadStruct(schema, consumer); }
void JsonShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) { m_impl->ReadList(schema, consumer); }
void JsonShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> JsonShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> JsonShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> JsonShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> JsonShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> JsonShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> JsonShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> JsonShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> JsonShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
std::shared_ptr<const smithy::schema::Document> JsonShapeDeserializer::ReadDocument(const Schema& schema) {
  return m_impl->ReadDocument(schema);
}
bool JsonShapeDeserializer::IsNull() { return m_impl->IsNull(); }
