/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/AdaptiveRetryStrategy.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils::Threading;


class MockRetryTokenBucket : public Aws::Client::RetryTokenBucket
{
public:
    MockRetryTokenBucket(
            double fillRate, double maxCapacity, double currentCapacity,
            const Aws::Utils::DateTime& lastTimestamp, double measuredTxRate, double lastTxRateBucket,
            size_t requestCount, bool enabled, double lastMaxRate, const Aws::Utils::DateTime& lastThrottleTime)
            : RetryTokenBucket(fillRate, maxCapacity, currentCapacity, lastTimestamp, measuredTxRate,
                               lastTxRateBucket, requestCount, enabled, lastMaxRate, lastThrottleTime)
    {}

    double T_CalculateTimeWindow() const
    {
        return Aws::Client::RetryTokenBucket::CalculateTimeWindow();
    }
    double T_CUBICSuccess(const Aws::Utils::DateTime& timestamp, double timeWindow) const
    {
        return Aws::Client::RetryTokenBucket::CUBICSuccess(timestamp, timeWindow);
    }
    double T_CUBICThrottle(double rateToUse) const
    {
        return Aws::Client::RetryTokenBucket::CUBICThrottle(rateToUse);
    }
    void T_SetLastMaxRate(double lastMaxRate)
    {
        m_lastMaxRate = lastMaxRate;
    }
    void T_SetLastThrottleTime(const Aws::Utils::DateTime& lastThrottleTime)
    {
        m_lastThrottleTime = lastThrottleTime;
    }

    double T_GetFillRate() const
    {
        return m_fillRate;
    }
    double T_GetMeasuredTxRate() const
    {
        return m_measuredTxRate;
    }
};

struct CUBICTestCaseParams
{
    struct TestStep
    {
        bool success;
        uint64_t timestamp; // ms
        double expectedCalculatedRate;
    };

    double initialLastMaxRate;
    uint64_t lastThrottleTimestamp; // ms
    const std::vector<TestStep> testSteps;
};

static const CUBICTestCaseParams TEST_CASE_1 = {
        10.0, 5,
        {{ true, 5, 7.0 },
        { true, 6, 9.64893600966 },
        { true, 7, 10.000030849917364 },
        { true, 8, 10.453284520772092 },
        { true, 9, 13.408697022224185 },
        { true, 10, 21.26626835427364 },
        { true, 11, 36.425998516920465 }}
        };

static const CUBICTestCaseParams TEST_CASE_2 = {
        10.0, 5,
        {{ true, 5, 7.0 },
         { true, 6, 9.64893600966 },
         { false, 7, 6.754255206761999 },
         { false, 8, 4.727978644733399 },
         { true, 9, 6.606547753887045 },
         { true, 10, 6.763279816944947 },
         { true, 11, 7.598174833907107 },
         { true, 12, 11.511232804773524 }}
};

void TestCUBIC(const CUBICTestCaseParams& tc)
{
    MockRetryTokenBucket retryTokenBucket(0,
                                          0,
                                          0,
                                          Aws::Utils::DateTime(),
                                          0,
                                          0,
                                          0,
                                          false,
                                          tc.initialLastMaxRate,
                                          (int64_t) tc.lastThrottleTimestamp * 1000);

    double lastCalculatedRate = 0.0;
    for(const auto& step : tc.testSteps)
    {
        if(step.success)
        {
            double timeWindow = retryTokenBucket.T_CalculateTimeWindow();
            lastCalculatedRate = retryTokenBucket.T_CUBICSuccess((int64_t) step.timestamp * 1000, timeWindow);
        }
        else
        {
            retryTokenBucket.T_SetLastMaxRate(lastCalculatedRate);
            retryTokenBucket.T_SetLastThrottleTime((int64_t) step.timestamp * 1000);
            lastCalculatedRate = retryTokenBucket.T_CUBICThrottle(lastCalculatedRate);
        }
        EXPECT_DOUBLE_EQ(step.expectedCalculatedRate, lastCalculatedRate);
    }
}

class AdaptiveRetryStrategyTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AdaptiveRetryStrategyTest, TestAdaptiveRetryStrategyCUBIC1)
{
    return TestCUBIC(TEST_CASE_1);
}

TEST_F(AdaptiveRetryStrategyTest, TestAdaptiveRetryStrategyCUBIC2)
{
    return TestCUBIC(TEST_CASE_2);
}

struct UpdateClientSendingRateTestCaseParams
{
    struct TestStep
    {
        bool success;
        double timestamp; // s
        double measuredTxRate;
        double newTokenBucketRate;  // Note: per spec owner, "new_token_bucket_rate" is supposed to be "fill_rate" instead.
    };

    TestStep startConditions;
    const std::vector<TestStep> testSteps;
};

static const UpdateClientSendingRateTestCaseParams TEST_CASE_3 = {
        {true, 0, 0, 0},
        {{ true, 0.2, 0.0, 0.5 },
         { true, 0.4, 0.0, 0.5 },
         { true, 0.6, 4.8, 0.5 },
         { true, 0.8, 4.8, 0.5 },
         { true, 1.0, 4.16, 0.5 },
         { true, 1.2, 4.16, 0.6912 },
         { true, 1.4, 4.16, 1.0976 },
         { true, 1.6, 5.632, 1.6384 },
         { true, 1.8, 5.632, 2.3328 },
         { false, 2.0, 4.3264, 3.02848 },
         { true, 2.2, 4.3264, 3.486639 },
         { true, 2.4, 4.3264, 3.821874 },
         { true, 2.6, 5.66528, 4.053386 },
         { true, 2.8, 5.66528, 4.200373 },
         { true, 3.0, 4.333056, 4.282037 },
         { false, 3.2, 4.333056, 2.997426 },
         { true, 3.4, 4.333056, 3.452226 }}
};

TEST_F(AdaptiveRetryStrategyTest, TestAdaptiveRetryStrategyUpdateClientSendingRate)
{
    MockRetryTokenBucket retryTokenBucket(TEST_CASE_3.startConditions.newTokenBucketRate,
                                          0,
                                          0,
                                          TEST_CASE_3.startConditions.timestamp,
                                          TEST_CASE_3.startConditions.measuredTxRate,
                                          0,
                                          0,
                                          false,
                                          0,
                                          0.0);

    static const double EPSILON = 1e-6;

    for(const auto& step : TEST_CASE_3.testSteps)
    {
        retryTokenBucket.UpdateClientSendingRate(!step.success, step.timestamp);

        EXPECT_NEAR(step.newTokenBucketRate, retryTokenBucket.T_GetFillRate(), EPSILON);
        EXPECT_NEAR(step.measuredTxRate, retryTokenBucket.T_GetMeasuredTxRate(), EPSILON);
    }
}

TEST_F(AdaptiveRetryStrategyTest, TestRetryTokenBucketDateInFutureRuns) {
    RetryTokenBucket retryTokenBucket;
    ASSERT_TRUE(retryTokenBucket.Acquire(1));
    auto oneDayMillis = 86400000;
    retryTokenBucket.UpdateClientSendingRate(true, Aws::Utils::DateTime::Now() + std::chrono::milliseconds(oneDayMillis));
    ASSERT_TRUE(retryTokenBucket.Acquire(1));
}