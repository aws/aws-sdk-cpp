/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <chrono>
#include <cmath>
#include <limits>

using namespace smithy::schema;
using namespace Aws::Utils;

class SerdeTraitsTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(SerdeTraitsTest, EpochSecondsToDateTimeMatchesLegacyDateTimeDouble) {
  // 1.001 is stored as 1.000999..., which DateTime(double) truncates to 1000 ms; schema clients must agree.
  EXPECT_EQ(1000, EpochSecondsToDateTime(1.001)->Millis());
  for (const double seconds : {1.001, -1.001, 1.5, 0.0005, 1.9996, 1700000000.123, -4307758798.296}) {
    EXPECT_EQ(DateTime(seconds).Millis(), EpochSecondsToDateTime(seconds)->Millis()) << seconds;
  }
}

TEST_F(SerdeTraitsTest, EpochSecondsToDateTimeRejectsUnrepresentableSeconds) {
  const double bound = static_cast<double>(std::chrono::duration_cast<std::chrono::milliseconds>(
                           (std::chrono::system_clock::duration::max)()).count()) / 1000.0;
  EXPECT_TRUE(EpochSecondsToDateTime(std::nextafter(bound, 0.0)).has_value());
  EXPECT_TRUE(EpochSecondsToDateTime(-std::nextafter(bound, 0.0)).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(bound).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(-bound).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(1e300).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(std::numeric_limits<double>::infinity()).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(-std::numeric_limits<double>::infinity()).has_value());
  EXPECT_FALSE(EpochSecondsToDateTime(std::numeric_limits<double>::quiet_NaN()).has_value());
}
