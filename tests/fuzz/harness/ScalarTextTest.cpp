/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <harness/ScalarText.h>

#include <clocale>
#include <cmath>
#include <string>

using namespace smithy::schema::fuzz;

namespace {

IntegerText Parse(const char* text) { return ParseIntegerText(text); }

}  // namespace

TEST(ScalarText, IntegersAreASignAndDigitsOnly) {
  EXPECT_EQ(Parse("0").value, 0);
  EXPECT_EQ(Parse("+7").value, 7);
  EXPECT_EQ(Parse("-007").value, -7);
  EXPECT_EQ(Parse("9223372036854775807").value, INT64_MAX);
  EXPECT_EQ(Parse("-9223372036854775808").value, INT64_MIN);
  EXPECT_EQ(Parse("-9223372036854775808").kind, IntegerTextKind::VALUE);
  for (const char* outOfRange : {"9223372036854775808", "-9223372036854775809", "99999999999999999999999"}) {
    EXPECT_EQ(Parse(outOfRange).kind, IntegerTextKind::OUT_OF_RANGE) << outOfRange;
  }
  for (const char* notInteger : {"", "-", "+", " 1", "1 ", "1.0", "1e3", "0x10", "--1", "1-"}) {
    EXPECT_EQ(Parse(notInteger).kind, IntegerTextKind::NOT_AN_INTEGER) << notInteger;
  }
}

TEST(ScalarText, DoublesMustBeWholeAndIgnoreTheNumericLocale) {
  EXPECT_EQ(ParseDoubleText("2.5").value(), 2.5);
  EXPECT_EQ(ParseDoubleText("-1e-3").value(), -1e-3);
  EXPECT_TRUE(std::isinf(ParseDoubleText("1e400").value()));
  for (const char* partial : {"", "2.5x", " 2.5", "2,5"}) {
    EXPECT_FALSE(ParseDoubleText(partial).has_value()) << partial;
  }
  const std::string previous = std::setlocale(LC_NUMERIC, nullptr);
  if (std::setlocale(LC_NUMERIC, "de_DE.UTF-8") != nullptr) {
    EXPECT_EQ(ParseDoubleText("2.5").value(), 2.5);
    EXPECT_FALSE(ParseDoubleText("2,5").has_value());
  }
  std::setlocale(LC_NUMERIC, previous.c_str());
}

TEST(ScalarText, EpochSecondsMustFitTheSystemClock) {
  EXPECT_EQ(EpochSecondsInClockRange(1.5)->Millis(), 1500);
  EXPECT_EQ(EpochSecondsInClockRange(-1.5)->Millis(), -1500);
  EXPECT_FALSE(EpochSecondsInClockRange(1e300).has_value());
  EXPECT_FALSE(EpochSecondsInClockRange(std::nan("")).has_value());
  EXPECT_FALSE(EpochSecondsInClockRange(INFINITY).has_value());
}
