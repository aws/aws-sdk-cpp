/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <cstring>
#include <limits>

#include <aws/core/utils/HashingUtils.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonTraits.h>

using namespace smithy::schema;
using namespace Aws::Utils;

class JsonShapeDeserializer::Impl final : public ShapeDeserializer {
 public:
  Impl(const unsigned char* data, size_t length) : m_bytes(reinterpret_cast<const char*>(data), length), m_pos(0) {}

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
      if (!NextInContainer('}')) {
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
      if (!NextInContainer(']')) {
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
      if (!NextInContainer('}')) {
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
    char* end = nullptr;
    const long long value = std::strtoll(token.c_str(), &end, 10);
    if (end != token.c_str() + token.size()) {

      char* dend = nullptr;
      const double d = std::strtod(token.c_str(), &dend);
      if (dend != token.c_str() + token.size()) {
        return {};
      }
      return static_cast<int64_t>(d);
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
    const Aws::String token = ReadNumberToken();
    char* end = nullptr;
    const double value = std::strtod(token.c_str(), &end);
    if (end != token.c_str() + token.size()) {
      return {};
    }
    return value;
  }

  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override {
    if (PeekNonWs() != '"') {
      SkipValue();
      return {};
    }
    return ParseString();
  }

  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema&) override {
    const char c = PeekNonWs();
    if (IsNumberStart(c)) {
      const Aws::String token = ReadNumberToken();
      char* end = nullptr;
      const double seconds = std::strtod(token.c_str(), &end);
      if (end != token.c_str() + token.size()) {
        return {};
      }
      return DateTime(seconds);
    }
    if (c == '"') {
      auto token = ParseString();
      if (!token.has_value()) {
        return {};
      }
      DateTime parsed(*token, DateFormat::ISO_8601);
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

  Aws::Crt::Optional<int> ReadEnum(const Schema& schema) override { return ReadInteger(schema); }

  bool IsNull() override {
    size_t p = m_pos;
    while (p < m_bytes.size() && IsWs(m_bytes[p])) {
      ++p;
    }
    return p + 4 <= m_bytes.size() && std::memcmp(m_bytes.c_str() + p, "null", 4) == 0;
  }

 private:
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

  bool NextInContainer(char close) {
    const char c = PeekNonWs();
    if (c == ',') {
      ++m_pos;
      return true;
    }
    if (c == close) {
      ++m_pos;
    }
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
};

JsonShapeDeserializer::JsonShapeDeserializer(const unsigned char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("JsonShapeDeserializer", data, length)) {}
JsonShapeDeserializer::~JsonShapeDeserializer() = default;

void JsonShapeDeserializer::ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) {
  m_impl->ReadStruct(schema, consumer);
}
void JsonShapeDeserializer::ReadList(const Schema& schema, const ListElementConsumer& consumer) {
  m_impl->ReadList(schema, consumer);
}
void JsonShapeDeserializer::ReadMap(const Schema& schema, const MapEntryConsumer& consumer) { m_impl->ReadMap(schema, consumer); }
Aws::Crt::Optional<bool> JsonShapeDeserializer::ReadBoolean(const Schema& schema) { return m_impl->ReadBoolean(schema); }
Aws::Crt::Optional<int> JsonShapeDeserializer::ReadInteger(const Schema& schema) { return m_impl->ReadInteger(schema); }
Aws::Crt::Optional<int64_t> JsonShapeDeserializer::ReadLong(const Schema& schema) { return m_impl->ReadLong(schema); }
Aws::Crt::Optional<float> JsonShapeDeserializer::ReadFloat(const Schema& schema) { return m_impl->ReadFloat(schema); }
Aws::Crt::Optional<double> JsonShapeDeserializer::ReadDouble(const Schema& schema) { return m_impl->ReadDouble(schema); }
Aws::Crt::Optional<Aws::String> JsonShapeDeserializer::ReadString(const Schema& schema) { return m_impl->ReadString(schema); }
Aws::Crt::Optional<DateTime> JsonShapeDeserializer::ReadTimestamp(const Schema& schema) { return m_impl->ReadTimestamp(schema); }
Aws::Crt::Optional<ByteBuffer> JsonShapeDeserializer::ReadBlob(const Schema& schema) { return m_impl->ReadBlob(schema); }
Aws::Crt::Optional<int> JsonShapeDeserializer::ReadEnum(const Schema& schema) { return m_impl->ReadEnum(schema); }
bool JsonShapeDeserializer::IsNull() { return m_impl->IsNull(); }
