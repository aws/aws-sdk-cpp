/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <smithy/client/schema/HttpBindingValues.h>

#include <cerrno>
#include <cmath>
#include <cstdlib>
#include <iomanip>

namespace smithy {
namespace schema {
namespace HttpBindingValues {

namespace {

bool IsUnreserved(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '-' || c == '.' || c == '_' ||
         c == '~';
}

Aws::String Trimmed(const Aws::String& text) { return Aws::Utils::StringUtils::Trim(text.c_str()); }

}  // namespace

Aws::String FormatBoolean(bool value) { return value ? "true" : "false"; }

Aws::String FormatDouble(double value) {
  if (std::isnan(value)) {
    return "NaN";
  }
  if (std::isinf(value)) {
    return value > 0 ? "Infinity" : "-Infinity";
  }
  // 15 significant digits is exact for most decimal inputs ("1.1"); fall back to 17 (max_digits10).
  Aws::OStringStream s15;
  s15 << std::setprecision(15) << value;
  Aws::String text = s15.str();
  if (std::strtod(text.c_str(), nullptr) != value) {
    Aws::OStringStream s17;
    s17 << std::setprecision(17) << value;
    text = s17.str();
  }
  return text;
}

Aws::String EncodeUnreserved(const Aws::String& value, bool preserveSlashes) {
  static const char* const HEX = "0123456789ABCDEF";
  Aws::String out;
  out.reserve(value.size());
  for (char c : value) {
    if (IsUnreserved(c) || (preserveSlashes && c == '/')) {
      out += c;
    } else {
      const auto byte = static_cast<unsigned char>(c);
      out += '%';
      out += HEX[byte >> 4];
      out += HEX[byte & 0x0F];
    }
  }
  return out;
}

Aws::String JoinHeaderList(const Aws::Vector<Aws::String>& values, bool quoteElements) {
  Aws::String out;
  for (size_t i = 0; i < values.size(); ++i) {
    if (i > 0) {
      out += ", ";
    }
    const Aws::String& value = values[i];
    if (!quoteElements || value.find_first_of(",\"") == Aws::String::npos) {
      out += value;
      continue;
    }
    out += '"';
    for (char c : value) {
      if (c == '"' || c == '\\') {
        out += '\\';
      }
      out += c;
    }
    out += '"';
  }
  return out;
}

Aws::Crt::Optional<bool> ParseBoolean(const Aws::String& text) {
  const Aws::String value = Trimmed(text);
  if (value == "true") {
    return true;
  }
  if (value == "false") {
    return false;
  }
  return {};
}

Aws::Crt::Optional<int64_t> ParseInteger(const Aws::String& text) {
  const Aws::String value = Trimmed(text);
  if (value.empty()) {
    return {};
  }
  char* end = nullptr;
  errno = 0;
  const long long parsed = std::strtoll(value.c_str(), &end, 10);
  if (errno != 0 || end != value.c_str() + value.size()) {
    return {};
  }
  return static_cast<int64_t>(parsed);
}

Aws::Crt::Optional<double> ParseDouble(const Aws::String& text) {
  const Aws::String value = Trimmed(text);
  if (value == "NaN") {
    return std::nan("");
  }
  if (value == "Infinity") {
    return HUGE_VAL;
  }
  if (value == "-Infinity") {
    return -HUGE_VAL;
  }
  if (value.empty()) {
    return {};
  }
  char* end = nullptr;
  const double parsed = std::strtod(value.c_str(), &end);
  if (end != value.c_str() + value.size()) {
    return {};
  }
  return parsed;
}

Aws::Crt::Optional<Aws::Utils::DateTime> ParseTimestamp(const Aws::String& text, TimestampFormatTrait::Format format) {
  const Aws::String value = Trimmed(text);
  if (format == TimestampFormatTrait::Format::EPOCH_SECONDS) {
    const auto seconds = ParseDouble(value);
    if (!seconds.has_value() || !std::isfinite(*seconds)) {
      return {};
    }
    return Aws::Utils::DateTime(*seconds);
  }
  Aws::Utils::DateTime parsed(value,
                              format == TimestampFormatTrait::Format::HTTP_DATE ? Aws::Utils::DateFormat::RFC822 : Aws::Utils::DateFormat::ISO_8601);
  if (!parsed.WasParseSuccessful()) {
    return {};
  }
  return parsed;
}

Aws::Vector<Aws::String> SplitHeaderList(const Aws::String& value) {
  Aws::Vector<Aws::String> out;
  size_t i = 0;
  const size_t n = value.size();
  while (i < n) {
    while (i < n && (value[i] == ' ' || value[i] == '\t')) {
      ++i;
    }
    Aws::String element;
    if (i < n && value[i] == '"') {
      // Quoted element: unescape until the closing quote, then skip to the next separator.
      for (++i; i < n && value[i] != '"'; ++i) {
        if (value[i] == '\\' && i + 1 < n) {
          ++i;
        }
        element += value[i];
      }
      for (++i; i < n && value[i] != ','; ++i) {
      }
    } else {
      for (; i < n && value[i] != ','; ++i) {
        element += value[i];
      }
      element = Trimmed(element);
    }
    out.push_back(std::move(element));
    ++i;  // skip the separator
  }
  return out;
}

Aws::Vector<Aws::String> SplitHttpDateList(const Aws::String& value) {
  Aws::Vector<Aws::String> out;
  Aws::String current;
  int commas = 0;
  for (char c : value) {
    if (c == ',' && ++commas % 2 == 0) {
      out.push_back(Trimmed(current));
      current.clear();
      continue;
    }
    current += c;
  }
  if (!Trimmed(current).empty()) {
    out.push_back(Trimmed(current));
  }
  return out;
}

bool IsOmittedPrefixHeader(const Aws::String& lowercaseName) {
  static const char* const OMITTED[] = {"authorization",      "connection", "content-length", "expect",           "host",
                                        "max-forwards",       "proxy-authenticate", "server",  "te",               "trailer",
                                        "transfer-encoding", "upgrade",    "user-agent",     "www-authenticate", "x-forwarded-for"};
  for (const char* name : OMITTED) {
    if (lowercaseName == name) {
      return true;
    }
  }
  return false;
}

}  // namespace HttpBindingValues
}  // namespace schema
}  // namespace smithy
