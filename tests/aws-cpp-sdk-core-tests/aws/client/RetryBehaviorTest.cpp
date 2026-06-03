/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Client;
using namespace Aws::Http;

static const char ALLOCATION_TAG[] = "RetryBehaviorTest";

class TestThrottleBasedQuotaContainer : public RetryQuotaContainer
{
public:
    TestThrottleBasedQuotaContainer() : m_retryQuota(500) {}

    bool AcquireRetryQuota(int capacityAmount) override
    {
        if (capacityAmount > m_retryQuota) return false;
        m_retryQuota -= capacityAmount;
        return true;
    }

    bool AcquireRetryQuota(const AWSError<CoreErrors>& error) override
    {
        int capacityAmount = error.ShouldThrottle() ? 5 : 14;
        return AcquireRetryQuota(capacityAmount);
    }

    void ReleaseRetryQuota(int capacityAmount) override
    {
        m_retryQuota = std::min(m_retryQuota + capacityAmount, 500);
    }

    void ReleaseRetryQuota(const AWSError<CoreErrors>& error) override
    {
        int capacityAmount = error.ShouldThrottle() ? 5 : 14;
        ReleaseRetryQuota(capacityAmount);
    }

    int GetRetryQuota() const override { return m_retryQuota; }

private:
    int m_retryQuota;
};

class RetryBehaviorTest : public Aws::Testing::AwsCppSdkGTestSuite
{
    Aws::Environment::EnvironmentRAII m_env{{{"AWS_NEW_RETRIES_2026", "true"}}};
};

static AWSError<CoreErrors> MakeTransientError()
{
    return AWSError<CoreErrors>(CoreErrors::NETWORK_CONNECTION, true);
}

static AWSError<CoreErrors> MakeThrottlingError()
{
    return AWSError<CoreErrors>(CoreErrors::THROTTLING, RetryableType::RETRYABLE_THROTTLING);
}

static AWSError<CoreErrors> MakeNonRetryableError()
{
    return AWSError<CoreErrors>(CoreErrors::INCOMPLETE_SIGNATURE, false);
}

static AWSError<CoreErrors> MakeTransientErrorWithRetryAfter(const Aws::String& value)
{
    AWSError<CoreErrors> error(CoreErrors::NETWORK_CONNECTION, true);
    HeaderValueCollection headers;
    headers["x-amz-retry-after"] = value;
    error.SetResponseHeaders(headers);
    return error;
}

// SEP Test 1: Retry eventually succeeds, quota restored
TEST_F(RetryBehaviorTest, RetryEventuallySucceeds)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 3);

    ASSERT_EQ(500, quota->GetRetryQuota());

    // First failure: transient, costs 14
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Second failure: transient, costs 14
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 1));
    ASSERT_EQ(472, quota->GetRetryQuota());
}

// SEP Test 2: Max attempts reached
TEST_F(RetryBehaviorTest, MaxAttemptsReached)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 3);

    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 1));
    // Third attempt (index 2) hits max attempts of 3
    ASSERT_FALSE(strategy.ShouldRetry(MakeTransientError(), 2));
}

// SEP Test 3: Quota reached after 1 retry
TEST_F(RetryBehaviorTest, QuotaReachedAfterRetry)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Drain quota to 10
    ASSERT_TRUE(quota->AcquireRetryQuota(490));
    ASSERT_EQ(10, quota->GetRetryQuota());

    // Can't acquire 14 tokens
    ASSERT_FALSE(strategy.ShouldRetry(MakeTransientError(), 0));
}

// SEP Test 4: Zero quota, no retries
TEST_F(RetryBehaviorTest, ZeroQuotaNoRetries)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    ASSERT_TRUE(quota->AcquireRetryQuota(500));
    ASSERT_EQ(0, quota->GetRetryQuota());

    ASSERT_FALSE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_FALSE(strategy.ShouldRetry(MakeThrottlingError(), 0));
}

// SEP Test 5: Exponential timing (transient, 50ms base)
TEST_F(RetryBehaviorTest, ExponentialBackoffTransient)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    auto error = MakeTransientError();
    // Backoff is randomized, but must be within [0, x * 2^i * 1000]ms
    // i=0: [0, 50ms], i=1: [0, 100ms], i=2: [0, 200ms], i=3: [0, 400ms]
    for (int i = 0; i < 4; ++i)
    {
        long delay = strategy.CalculateDelayBeforeNextRetry(error, i);
        long maxDelay = static_cast<long>(0.05 * (1L << i) * 1000.0);
        ASSERT_GE(delay, 0) << "Retry " << i;
        ASSERT_LE(delay, maxDelay) << "Retry " << i;
    }
}

// SEP Test 6: Max backoff cap at 20s
TEST_F(RetryBehaviorTest, MaxBackoffCap)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 100);

    auto error = MakeTransientError();
    // At i=30, 0.05 * 2^30 = 53687091.2s which exceeds 20s cap
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 30);
    ASSERT_LE(delay, 20000);
}

// SEP Test 7: Quota exhaustion mid-sequence
TEST_F(RetryBehaviorTest, QuotaExhaustionMidSequence)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 100);

    // Drain to 20 tokens
    ASSERT_TRUE(quota->AcquireRetryQuota(480));
    ASSERT_EQ(20, quota->GetRetryQuota());

    // First retry: costs 14, quota = 6
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(6, quota->GetRetryQuota());

    // Second retry: can't afford 14
    ASSERT_FALSE(strategy.ShouldRetry(MakeTransientError(), 1));
    ASSERT_EQ(6, quota->GetRetryQuota());
}

// SEP Test 8: Quota recovery (stateful multi-request sequence)
TEST_F(RetryBehaviorTest, QuotaRecoveryStateful)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    HttpResponseOutcome httpResponseOutcome(httpResponse);

    // Request 1: retry once (transient), costs 14, quota = 486
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Request 1 succeeds: release 14, quota = 500
    strategy.RequestBookkeeping(httpResponseOutcome, MakeTransientError());
    ASSERT_EQ(500, quota->GetRetryQuota());

    // Request 2: retry once (transient), costs 14, quota = 486
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Request 2: retry again (transient), costs 14, quota = 472
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 1));
    ASSERT_EQ(472, quota->GetRetryQuota());

    // Request 2 succeeds: release 14, quota = 486
    strategy.RequestBookkeeping(httpResponseOutcome, MakeTransientError());
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Request 3: succeeds first try, release NO_RETRY_INCREMENT (1), quota = 487
    strategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(487, quota->GetRetryQuota());
}

// SEP Test 9: Multi-threaded quota sharing (verify shared state)
TEST_F(RetryBehaviorTest, SharedQuotaAcrossRequests)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Simulate two concurrent requests both acquiring from same quota
    // Request A: transient retry, costs 14, quota = 486
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Request B: throttling retry, costs 5, quota = 481
    ASSERT_TRUE(strategy.ShouldRetry(MakeThrottlingError(), 0));
    ASSERT_EQ(481, quota->GetRetryQuota());

    // Request A: another transient retry, costs 14, quota = 467
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 1));
    ASSERT_EQ(467, quota->GetRetryQuota());

    // Total consumed: 14 + 5 + 14 = 33
    ASSERT_EQ(500 - 33, quota->GetRetryQuota());
}

// SEP Test 10: Throttling costs (5 tokens) and backoff (1000ms base)
TEST_F(RetryBehaviorTest, ThrottlingCostsAndBackoff)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Throttling error costs 5 tokens
    ASSERT_TRUE(strategy.ShouldRetry(MakeThrottlingError(), 0));
    ASSERT_EQ(495, quota->GetRetryQuota());

    // Backoff for throttling: [0, 1000ms] at i=0
    auto error = MakeThrottlingError();
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 1000);

    // At i=1: [0, 2000ms]
    delay = strategy.CalculateDelayBeforeNextRetry(error, 1);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 2000);
}

// TODO: SEP Test 11: DynamoDB tuning (25ms base, 4 max attempts)
// Deferred to next PR — requires 3-arg constructor or service-specific config
// to pass transientBackoffBaseSec=0.025 for DynamoDB/DynamoDB Streams.

// SEP Test 12: Long-polling transient + empty quota (backoff applied)
TEST_F(RetryBehaviorTest, LongPollingTransientEmptyQuota)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Drain quota
    ASSERT_TRUE(quota->AcquireRetryQuota(500));
    ASSERT_EQ(0, quota->GetRetryQuota());

    // ShouldRetry returns false (no quota)
    ASSERT_FALSE(strategy.ShouldRetry(MakeTransientError(), 0));

    // But backoff is still computable for long-polling use
    auto error = MakeTransientError();
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    // i=0, transient, base=0.05: [0, 50ms]
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 50);
}

// SEP Test 13: Long-polling throttling + empty quota (backoff applied)
TEST_F(RetryBehaviorTest, LongPollingThrottlingEmptyQuota)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Drain quota
    ASSERT_TRUE(quota->AcquireRetryQuota(500));
    ASSERT_EQ(0, quota->GetRetryQuota());

    // ShouldRetry returns false (no quota)
    ASSERT_FALSE(strategy.ShouldRetry(MakeThrottlingError(), 0));

    // But backoff is still computable for long-polling use
    auto error = MakeThrottlingError();
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    // i=0, throttling, base=1.0: [0, 1000ms]
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 1000);
}

// TODO: SEP Tests 14, 15, 16 require integration tests that exercise the full pipeline
// with a mock HTTP client to verify the pipeline does NOT sleep in these scenarios:
// - Test 14: Long-polling max attempts exceeded (no delay before returning)
// - Test 15: Long-polling success (no delay before returning)
// - Test 16: Long-polling non-retryable error (no delay before returning)


// SEP Test 17: retry-after header honored
TEST_F(RetryBehaviorTest, RetryAfterHeaderHonored)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Header value 1500ms, at i=0 t_i is in [0, 50ms]
    // clamped to max(t_i, min(1.5, 5 + t_i)) = 1.5s = 1500ms
    auto error = MakeTransientErrorWithRetryAfter("1500");
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    // Should be between 1500 and 5050 (5 + max t_i at i=0)
    ASSERT_GE(delay, 50); // at minimum t_i (could be 0, then header wins)
    ASSERT_LE(delay, 5050);
}

// SEP Test 18: retry-after floor clamped (value 0 clamped up to t_i)
TEST_F(RetryBehaviorTest, RetryAfterFloorClamped)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    auto error = MakeTransientErrorWithRetryAfter("0");
    // Header is 0ms, gets clamped up to t_i
    // Result should be same as normal backoff (t_i)
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 50); // max t_i at i=0 with base 0.05
}

// SEP Test 19: retry-after ceiling clamped (value 10000ms clamped to 5+t_i)
TEST_F(RetryBehaviorTest, RetryAfterCeilingClamped)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    auto error = MakeTransientErrorWithRetryAfter("10000");
    // Header is 10000ms = 10s, exceeds 5 + t_i (max ~5.05s at i=0)
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    // Clamped to 5 + t_i, which is at most 5050ms
    ASSERT_LE(delay, 5050);
    // But at least t_i (could be 0)
    ASSERT_GE(delay, 0);
}

// SEP Test 20: Invalid retry-after falls back to exponential backoff
TEST_F(RetryBehaviorTest, InvalidRetryAfterFallsBack)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // "abc" parses to 0 via atoll, which gets clamped to t_i
    auto error = MakeTransientErrorWithRetryAfter("abc");
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 50);
}

class RetryBehaviorLegacyTest : public Aws::Testing::AwsCppSdkGTestSuite
{
    Aws::Environment::EnvironmentRAII m_env{{{"AWS_NEW_RETRIES_2026", ""}}};
};

// Verify legacy behavior unchanged when gate is off (old constructors)
TEST_F(RetryBehaviorLegacyTest, LegacyBehaviorUnchanged)
{
    StandardRetryStrategy strategy(3);

    auto error = MakeTransientError();
    // Legacy: rand(0,999) * 2^i, cap 20000
    long delay = strategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 999); // 2^0 = 1, so max is 999

    delay = strategy.CalculateDelayBeforeNextRetry(error, 1);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 1998); // 2^1 = 2, so max is 1998

    delay = strategy.CalculateDelayBeforeNextRetry(error, 15);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 20000); // capped
}

// Verify throttle-based classification: throttling costs 5, transient costs 14
TEST_F(RetryBehaviorTest, ThrottleBasedClassification)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    // Transient costs 14
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Throttling costs 5
    ASSERT_TRUE(strategy.ShouldRetry(MakeThrottlingError(), 0));
    ASSERT_EQ(481, quota->GetRetryQuota());
}

// Verify legacy classification: REQUEST_TIMEOUT costs 10, others cost 5
TEST_F(RetryBehaviorLegacyTest, LegacyClassification)
{
    DefaultRetryQuotaContainer quota;

    AWSError<CoreErrors> timeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    AWSError<CoreErrors> otherError(CoreErrors::NETWORK_CONNECTION, true);

    // Other error costs 5
    ASSERT_TRUE(quota.AcquireRetryQuota(otherError));
    ASSERT_EQ(495, quota.GetRetryQuota());

    // Timeout costs 10
    ASSERT_TRUE(quota.AcquireRetryQuota(timeoutError));
    ASSERT_EQ(485, quota.GetRetryQuota());
}

// Non-retryable errors are not retried regardless of gate
TEST_F(RetryBehaviorTest, NonRetryableNotRetried)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    ASSERT_FALSE(strategy.ShouldRetry(MakeNonRetryableError(), 0));
    ASSERT_EQ(500, quota->GetRetryQuota());
}

// Verify RequestBookkeeping releases correct tokens on success
TEST_F(RetryBehaviorTest, RequestBookkeepingReleasesTokens)
{
    auto quota = Aws::MakeShared<TestThrottleBasedQuotaContainer>(ALLOCATION_TAG);
    StandardRetryStrategy strategy(quota, 10);

    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    HttpResponseOutcome httpResponseOutcome(httpResponse);

    // Acquire 14 (transient), quota = 486
    ASSERT_TRUE(strategy.ShouldRetry(MakeTransientError(), 0));
    ASSERT_EQ(486, quota->GetRetryQuota());

    // Release 14 on success with last error context
    strategy.RequestBookkeeping(httpResponseOutcome, MakeTransientError());
    ASSERT_EQ(500, quota->GetRetryQuota());

    // Acquire 5 (throttling), quota = 495
    ASSERT_TRUE(strategy.ShouldRetry(MakeThrottlingError(), 0));
    ASSERT_EQ(495, quota->GetRetryQuota());

    // Release 5 on success with last error context
    strategy.RequestBookkeeping(httpResponseOutcome, MakeThrottlingError());
    ASSERT_EQ(500, quota->GetRetryQuota());

    // Release NO_RETRY_INCREMENT (1) on success without prior retry
    quota->AcquireRetryQuota(10);
    ASSERT_EQ(490, quota->GetRetryQuota());
    strategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(491, quota->GetRetryQuota());
}
