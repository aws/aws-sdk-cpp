/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

using namespace Aws::Utils::RateLimits;

using TestDefaultRateLimiter = DefaultRateLimiter<>;

class DefaultRateLimitTest : public Aws::Testing::AwsCppSdkGTestSuite {
 public:
  static TestDefaultRateLimiter::InternalTimePointType m_currentTime;

  static TestDefaultRateLimiter::InternalTimePointType GetTestTime() { return m_currentTime; }

  static void SetTestTime(TestDefaultRateLimiter::InternalTimePointType currentTime) { m_currentTime = currentTime; }

  using Clock = TestDefaultRateLimiter::InternalTimePointType::clock;
  using Ms = std::chrono::milliseconds;

  static void SetMillisecondsElapsed(int64_t millisecondsElapsed) {
    m_currentTime = std::chrono::time_point_cast<Clock::duration>(std::chrono::time_point<Clock, Ms>(Ms(millisecondsElapsed)));
  }

 protected:
  void SetUp() { SetMillisecondsElapsed(0); }
};

TestDefaultRateLimiter::InternalTimePointType DefaultRateLimitTest::m_currentTime;

TEST_F(DefaultRateLimitTest, nopTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);
  auto delay = limiter.ApplyCost(0);

  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, trivialTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);

  auto delay = limiter.ApplyCost(1);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, limitEdgeTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);

  auto delay = limiter.ApplyCost(10);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, doubleLimitTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);

  auto delay = limiter.ApplyCost(20);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 1000);
}

TEST_F(DefaultRateLimitTest, delayedLimitEdgeLimitTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);
  limiter.ApplyCost(10);

  SetMillisecondsElapsed(500);

  auto delay = limiter.ApplyCost(5);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, delayedOverLimitTest) {
  TestDefaultRateLimiter limiter(10, DefaultRateLimitTest::GetTestTime);
  limiter.ApplyCost(10);

  SetMillisecondsElapsed(500);

  auto delay = limiter.ApplyCost(6);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 100);
}

TEST_F(DefaultRateLimitTest, twoDelayOverLimitTest) {
  TestDefaultRateLimiter limiter(100, DefaultRateLimitTest::GetTestTime);

  // cost to -50
  limiter.ApplyCost(150);

  // advance by 1 second, cost to 50
  SetMillisecondsElapsed(1000);

  // cost to 1, one short of the limit
  auto delay = limiter.ApplyCost(49);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);

  // push over the limit by 10 units, cost to -10
  delay = limiter.ApplyCost(11);
  ASSERT_TRUE(delay.count() == 0);

  // expect a delay of ( 10 / 100 ) * 1000 = 100
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 100);
}

TEST_F(DefaultRateLimitTest, longDelayLimitTest) {
  TestDefaultRateLimiter limiter(100, DefaultRateLimitTest::GetTestTime);
  limiter.ApplyCost(150);

  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 500);

  // long wait, should decay to nothing
  SetMillisecondsElapsed(100000);

  delay = limiter.ApplyCost(99);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(11);
  ASSERT_TRUE(delay.count() == 0);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 100);
}

TEST_F(DefaultRateLimitTest, renormalizedChangeRateLimitTest) {
  TestDefaultRateLimiter limiter(100, DefaultRateLimitTest::GetTestTime);

  // cost to -600
  limiter.ApplyCost(700);

  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 6000);

  // cost to -500
  SetMillisecondsElapsed(1000);

  // rate change, cost to -50 (rate change renormalizes accumulator by default)
  limiter.SetRate(10);

  // cost to -55
  limiter.ApplyCost(5);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 5500);

  // cost to -53
  SetMillisecondsElapsed(1200);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 5300);

  // cost to -51
  SetMillisecondsElapsed(1400);

  // rate change, cost renormalizes to -510
  limiter.SetRate(100);

  // cost to -570
  limiter.ApplyCost(60);

  // cost to -500
  SetMillisecondsElapsed(2100);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 5000);
}

TEST_F(DefaultRateLimitTest, unnormalizedChangeRateLimitTest) {
  // same operations as the normalized test, just with different assert values
  DefaultRateLimiter<std::chrono::steady_clock, std::chrono::seconds, false> limiter(100, DefaultRateLimitTest::GetTestTime);

  // cost to -600
  limiter.ApplyCost(700);

  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 6000);

  // cost to -500
  SetMillisecondsElapsed(1000);

  // rate change, cost status at -500
  limiter.SetRate(10);

  // cost to -505
  limiter.ApplyCost(5);

  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 50500);

  // cost to -503
  SetMillisecondsElapsed(1200);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 50300);

  // cost to -501
  SetMillisecondsElapsed(1400);

  // rate change, cost stays at -501
  limiter.SetRate(100);

  // cost to -561
  limiter.ApplyCost(60);

  // cost to -491
  SetMillisecondsElapsed(2100);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 4910);
}

TEST_F(DefaultRateLimitTest, overflowTest) {
  // 500MB/s
  int max_rate = 500 * 1024 * 1024;
  TestDefaultRateLimiter limiter(max_rate, DefaultRateLimitTest::GetTestTime);

  // 7 days
  int64_t time_elapsed = 7LL * 24 * 60 * 60 * 1000000;

  limiter.ApplyCost(0);
  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);

  // The original code here would cause the sleep duration to be excessively long
  SetMillisecondsElapsed(time_elapsed);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, fractionalLimitTest) {
  TestDefaultRateLimiter limiter(100, DefaultRateLimitTest::GetTestTime);

  limiter.ApplyCost(101);
  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10);

  SetMillisecondsElapsed(3);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10);

  SetMillisecondsElapsed(6);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10);

  SetMillisecondsElapsed(9);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10);

  SetMillisecondsElapsed(10);
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 0);
}

TEST_F(DefaultRateLimitTest, clockRollbackValidation) {
  auto baseline_time = std::chrono::system_clock::now();
  int call_count = 0;
  constexpr int kRollbackTriggerCount = 3;
  constexpr int kRollbackDurationMs = 100;
  auto clock_lambda = [&]() {
    call_count++;
    if (call_count <= kRollbackTriggerCount) {
      return baseline_time;
    }
    return baseline_time - std::chrono::milliseconds(kRollbackDurationMs);
  };

  DefaultRateLimiter<std::chrono::system_clock, std::chrono::seconds, false> limiter(100, clock_lambda);

  limiter.ApplyCost(101);
  auto delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10);

  // The clock rollback introduced an error in the calculation results
  delay = limiter.ApplyCost(0);
  ASSERT_TRUE(delay.count() == 10 + kRollbackDurationMs);
}
