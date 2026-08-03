/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>

#include <cstdlib>
#include <cstring>

using namespace smithy::schema;
using namespace Aws::Utils;

namespace {

enum class Token {
  ObjectStart,
  ObjectEnd,
  ArrayStart,
  ArrayEnd,
  String,
  Number,
  True,
  False,
  Null,
  Colon,
  Comma,
  EndOfInput,
  Error
};

}  // anonymous namespace

class JsonShapeDeserializer::Impl {
 public:
  Impl(const char* data, size_t length) : m_data(data), m_length(length), m_pos(0), m_peeked(false) {}

  Aws::Crt::Optional<bool> ReadBoolean() {
    auto tok = NextToken();
    if (tok == Token::True) {
      return true;
    }
    if (tok == Token::False) {
      return false;
    }
    return {};
  }

  Aws::Crt::Optional<int> ReadInteger() {
    auto val = ReadLong();
    if (!val.has_value()) {
      return {};
    }
    return static_cast<int>(val.value());
  }

  Aws::Crt::Optional<int64_t> ReadLong() {
    auto tok = NextToken();
    if (tok != Token::Number) {
      return {};
    }
    return static_cast<int64_t>(m_numberValue);
  }

  Aws::Crt::Optional<float> ReadFloat() {
    auto val = ReadDouble();
    if (!val.has_value()) {
      return {};
    }
    return static_cast<float>(val.value());
  }

  Aws::Crt::Optional<double> ReadDouble() {
    auto tok = NextToken();
    if (tok != Token::Number) {
      return {};
    }
    return m_numberValue;
  }

  Aws::Crt::Optional<Aws::String> ReadString() {
    auto tok = NextToken();
    if (tok != Token::String) {
      return {};
    }
    return m_stringValue;
  }

  Aws::Crt::Optional<DateTime> ReadTimestamp() {
    auto val = ReadDouble();
    if (!val.has_value()) {
      return {};
    }
    return DateTime(val.value());
  }

  Aws::Crt::Optional<ByteBuffer> ReadBlob() {
    auto str = ReadString();
    if (!str.has_value()) {
      return {};
    }
    return HashingUtils::Base64Decode(str.value());
  }

  Aws::Crt::Optional<int> ReadEnum() { return ReadInteger(); }

  size_t BeginStruct() {
    auto tok = NextToken();
    if (tok != Token::ObjectStart) {
      return 0;
    }
    return 0;
  }

  void EndStruct() {
    auto tok = PeekToken();
    if (tok == Token::ObjectEnd) {
      NextToken();
    }
  }

  size_t BeginList() {
    auto tok = NextToken();
    if (tok != Token::ArrayStart) {
      return 0;
    }
    return 0;
  }

  void EndList() {
    auto tok = PeekToken();
    if (tok == Token::ArrayEnd) {
      NextToken();
    }
  }

  size_t BeginMap() { return BeginStruct(); }
  void EndMap() { EndStruct(); }

  Aws::Crt::Optional<Aws::String> ReadKey() {
    auto tok = NextToken();
    if (tok != Token::String) {
      return {};
    }
    Aws::String key = m_stringValue;
    tok = NextToken();
    if (tok != Token::Colon) {
      return {};
    }
    return key;
  }

  bool IsBreak() {
    auto tok = PeekToken();
    return tok == Token::ObjectEnd || tok == Token::ArrayEnd || tok == Token::EndOfInput;
  }

  bool IsNull() {
    auto tok = PeekToken();
    return tok == Token::Null;
  }

  void ReadNull() { NextToken(); }

  void SkipValue() {
    auto tok = NextToken();
    if (tok == Token::ObjectStart) {
      SkipObject();
    } else if (tok == Token::ArrayStart) {
      SkipArray();
    }
  }

 private:
  Token PeekToken() {
    if (!m_peeked) {
      m_peekedToken = ScanToken();
      m_peeked = true;
    }
    return m_peekedToken;
  }

  Token NextToken() {
    if (m_peeked) {
      m_peeked = false;
      return m_peekedToken;
    }
    return ScanToken();
  }

  Token ScanToken() {
    SkipWhitespaceAndCommas();
    if (m_pos >= m_length) {
      return Token::EndOfInput;
    }

    char c = m_data[m_pos];
    switch (c) {
      case '{':
        m_pos++;
        return Token::ObjectStart;
      case '}':
        m_pos++;
        return Token::ObjectEnd;
      case '[':
        m_pos++;
        return Token::ArrayStart;
      case ']':
        m_pos++;
        return Token::ArrayEnd;
      case ':':
        m_pos++;
        return Token::Colon;
      case ',':
        m_pos++;
        return Token::Comma;
      case '"':
        return ParseStringToken();
      case 't':
        return ParseLiteral("true", 4, Token::True);
      case 'f':
        return ParseLiteral("false", 5, Token::False);
      case 'n':
        return ParseLiteral("null", 4, Token::Null);
      default:
        if (c == '-' || (c >= '0' && c <= '9')) {
          return ParseNumberToken();
        }
        return Token::Error;
    }
  }

  void SkipWhitespaceAndCommas() {
    while (m_pos < m_length) {
      char c = m_data[m_pos];
      if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == ',') {
        m_pos++;
      } else {
        break;
      }
    }
  }

  Token ParseStringToken() {
    m_pos++;  // skip opening quote
    m_stringValue.clear();

    while (m_pos < m_length) {
      char c = m_data[m_pos];
      if (c == '"') {
        m_pos++;
        return Token::String;
      }
      if (c == '\\') {
        m_pos++;
        if (m_pos >= m_length) {
          return Token::Error;
        }
        char esc = m_data[m_pos];
        m_pos++;
        switch (esc) {
          case '"': m_stringValue += '"'; break;
          case '\\': m_stringValue += '\\'; break;
          case '/': m_stringValue += '/'; break;
          case 'b': m_stringValue += '\b'; break;
          case 'f': m_stringValue += '\f'; break;
          case 'n': m_stringValue += '\n'; break;
          case 'r': m_stringValue += '\r'; break;
          case 't': m_stringValue += '\t'; break;
          case 'u': {
            uint32_t cp = ParseHex4();
            if (cp >= 0xD800 && cp <= 0xDBFF) {
              if (m_pos + 1 < m_length && m_data[m_pos] == '\\' && m_data[m_pos + 1] == 'u') {
                m_pos += 2;
                uint32_t low = ParseHex4();
                if (low >= 0xDC00 && low <= 0xDFFF) {
                  cp = 0x10000 + ((cp - 0xD800) << 10) + (low - 0xDC00);
                }
              }
            }
            AppendCodePoint(cp);
            break;
          }
          default:
            m_stringValue += esc;
            break;
        }
      } else {
        m_stringValue += c;
        m_pos++;
      }
    }
    return Token::Error;
  }

  uint32_t ParseHex4() {
    uint32_t val = 0;
    for (int i = 0; i < 4 && m_pos < m_length; i++, m_pos++) {
      char c = m_data[m_pos];
      val <<= 4;
      if (c >= '0' && c <= '9') {
        val |= (c - '0');
      } else if (c >= 'a' && c <= 'f') {
        val |= (c - 'a' + 10);
      } else if (c >= 'A' && c <= 'F') {
        val |= (c - 'A' + 10);
      }
    }
    return val;
  }

  void AppendCodePoint(uint32_t cp) {
    if (cp < 0x80) {
      m_stringValue += static_cast<char>(cp);
    } else if (cp < 0x800) {
      m_stringValue += static_cast<char>(0xC0 | (cp >> 6));
      m_stringValue += static_cast<char>(0x80 | (cp & 0x3F));
    } else if (cp < 0x10000) {
      m_stringValue += static_cast<char>(0xE0 | (cp >> 12));
      m_stringValue += static_cast<char>(0x80 | ((cp >> 6) & 0x3F));
      m_stringValue += static_cast<char>(0x80 | (cp & 0x3F));
    } else {
      m_stringValue += static_cast<char>(0xF0 | (cp >> 18));
      m_stringValue += static_cast<char>(0x80 | ((cp >> 12) & 0x3F));
      m_stringValue += static_cast<char>(0x80 | ((cp >> 6) & 0x3F));
      m_stringValue += static_cast<char>(0x80 | (cp & 0x3F));
    }
  }

  Token ParseNumberToken() {
    const char* start = m_data + m_pos;
    char* end = nullptr;
    m_numberValue = strtod(start, &end);
    if (end == start) {
      return Token::Error;
    }
    m_pos += (end - start);
    return Token::Number;
  }

  Token ParseLiteral(const char* expected, size_t len, Token result) {
    if (m_pos + len > m_length) {
      return Token::Error;
    }
    if (std::memcmp(m_data + m_pos, expected, len) == 0) {
      m_pos += len;
      return result;
    }
    return Token::Error;
  }

  void SkipObject() {
    int depth = 1;
    while (depth > 0 && m_pos < m_length) {
      auto tok = ScanToken();
      if (tok == Token::ObjectStart) {
        depth++;
      } else if (tok == Token::ObjectEnd) {
        depth--;
      } else if (tok == Token::ArrayStart) {
        SkipArray();
      } else if (tok == Token::EndOfInput || tok == Token::Error) {
        break;
      }
    }
  }

  void SkipArray() {
    int depth = 1;
    while (depth > 0 && m_pos < m_length) {
      auto tok = ScanToken();
      if (tok == Token::ArrayStart) {
        depth++;
      } else if (tok == Token::ArrayEnd) {
        depth--;
      } else if (tok == Token::ObjectStart) {
        SkipObject();
      } else if (tok == Token::EndOfInput || tok == Token::Error) {
        break;
      }
    }
  }

  const char* m_data;
  size_t m_length;
  size_t m_pos;

  bool m_peeked;
  Token m_peekedToken;

  Aws::String m_stringValue;
  double m_numberValue;
};

JsonShapeDeserializer::JsonShapeDeserializer(const char* data, size_t length)
    : m_impl(Aws::MakeUnique<Impl>("JsonShapeDeserializer", data, length)) {}
JsonShapeDeserializer::~JsonShapeDeserializer() = default;

Aws::Crt::Optional<bool> JsonShapeDeserializer::ReadBoolean() { return m_impl->ReadBoolean(); }
Aws::Crt::Optional<int> JsonShapeDeserializer::ReadInteger() { return m_impl->ReadInteger(); }
Aws::Crt::Optional<int64_t> JsonShapeDeserializer::ReadLong() { return m_impl->ReadLong(); }
Aws::Crt::Optional<float> JsonShapeDeserializer::ReadFloat() { return m_impl->ReadFloat(); }
Aws::Crt::Optional<double> JsonShapeDeserializer::ReadDouble() { return m_impl->ReadDouble(); }
Aws::Crt::Optional<Aws::String> JsonShapeDeserializer::ReadString() { return m_impl->ReadString(); }
Aws::Crt::Optional<DateTime> JsonShapeDeserializer::ReadTimestamp() { return m_impl->ReadTimestamp(); }
Aws::Crt::Optional<ByteBuffer> JsonShapeDeserializer::ReadBlob() { return m_impl->ReadBlob(); }
Aws::Crt::Optional<int> JsonShapeDeserializer::ReadEnum() { return m_impl->ReadEnum(); }
size_t JsonShapeDeserializer::BeginStruct() { return m_impl->BeginStruct(); }
void JsonShapeDeserializer::EndStruct() { m_impl->EndStruct(); }
size_t JsonShapeDeserializer::BeginList() { return m_impl->BeginList(); }
void JsonShapeDeserializer::EndList() { m_impl->EndList(); }
size_t JsonShapeDeserializer::BeginMap() { return m_impl->BeginMap(); }
void JsonShapeDeserializer::EndMap() { m_impl->EndMap(); }
Aws::Crt::Optional<Aws::String> JsonShapeDeserializer::ReadKey() { return m_impl->ReadKey(); }
bool JsonShapeDeserializer::IsBreak() { return m_impl->IsBreak(); }
bool JsonShapeDeserializer::IsNull() { return m_impl->IsNull(); }
void JsonShapeDeserializer::ReadNull() { m_impl->ReadNull(); }
void JsonShapeDeserializer::SkipValue() { m_impl->SkipValue(); }
