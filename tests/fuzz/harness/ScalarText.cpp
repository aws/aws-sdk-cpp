/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <harness/ScalarText.h>
#include <locale.h>

#include <chrono>
#include <cmath>
#include <cstdlib>
#include <limits>

namespace smithy {
namespace schema {
namespace fuzz {

IntegerText ParseIntegerText(const Aws::String& text) {
  size_t at = 0;
  const bool negative = !text.empty() && text[0] == '-';
  if (!text.empty() && (text[0] == '-' || text[0] == '+')) {
    ++at;
  }
  if (at == text.size()) {
    return {};
  }
  // Accumulate the magnitude as unsigned so INT64_MIN fits.
  const uint64_t limit = negative ? uint64_t{1} << 63 : static_cast<uint64_t>((std::numeric_limits<int64_t>::max)());
  uint64_t magnitude = 0;
  bool overflow = false;
  for (; at < text.size(); ++at) {
    if (text[at] < '0' || text[at] > '9') {
      return {};
    }
    const uint64_t digit = static_cast<uint64_t>(text[at] - '0');
    overflow = overflow || magnitude > (limit - digit) / 10;
    magnitude = overflow ? magnitude : magnitude * 10 + digit;
  }
  if (overflow) {
    return {IntegerTextKind::OUT_OF_RANGE, 0};
  }
  const int64_t value = negative ? static_cast<int64_t>(0 - magnitude) : static_cast<int64_t>(magnitude);
  return {IntegerTextKind::VALUE, value};
}

Aws::Crt::Optional<double> ParseDoubleText(const Aws::String& text) {
  static const locale_t cLocale = newlocale(LC_NUMERIC_MASK, "C", static_cast<locale_t>(0));
  // strtod would skip leading whitespace.
  if (text.empty() || text.find('\0') != Aws::String::npos || Aws::String(" \t\n\v\f\r").find(text[0]) != Aws::String::npos) {
    return {};
  }
  char* end = nullptr;
  const double value = strtod_l(text.c_str(), &end, cLocale);
  if (end != text.c_str() + text.size()) {
    return {};
  }
  return value;
}

Aws::Crt::Optional<Aws::Utils::DateTime> EpochSecondsInClockRange(double seconds) {
  const double clockSeconds =
      static_cast<double>(std::chrono::duration_cast<std::chrono::milliseconds>((std::chrono::system_clock::duration::max)()).count()) /
      1000.0;
  if (!std::isfinite(seconds) || !(std::fabs(seconds) < clockSeconds)) {
    return {};
  }
  return Aws::Utils::DateTime(seconds);
}

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
