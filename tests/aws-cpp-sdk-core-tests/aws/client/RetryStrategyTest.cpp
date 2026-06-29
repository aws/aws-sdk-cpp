/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/URI.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils::Threading;

static const char ALLOCATION_TAG[] = "RetryStrategyTest";

class MockStandardRetryStrategy : public Aws::Client::StandardRetryStrategy
{
public:
    MockStandardRetryStrategy() = default;
    explicit MockStandardRetryStrategy(double transientBackoffBaseSec)
        : StandardRetryStrategy(3, transientBackoffBaseSec) {}

    const std::shared_ptr<Aws::Client::RetryQuotaContainer>& GetRetryQuotaContainer() const
    {
       return m_retryQuotaContainer;
    }
};

class RetryStrategyTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RetryStrategyTest, TestDefaultRetryQuotaContainer)
{
    AWSError<CoreErrors> requestTimeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    AWSError<CoreErrors> retryableError(CoreErrors::NETWORK_CONNECTION, true);

    DefaultRetryQuotaContainer retryQuotaContainer;
    ASSERT_EQ(500, retryQuotaContainer.GetRetryQuota());
    retryQuotaContainer.ReleaseRetryQuota(1);
    ASSERT_EQ(500, retryQuotaContainer.GetRetryQuota());

    // Acquire 5 tokens, remains 495.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(retryableError));
    ASSERT_EQ(495, retryQuotaContainer.GetRetryQuota());

    // Acquire 10 tokens, remains 485.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(requestTimeoutError));
    ASSERT_EQ(485, retryQuotaContainer.GetRetryQuota());

    // Acquire 483 tokens, remains 2.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(483));
    ASSERT_EQ(2, retryQuotaContainer.GetRetryQuota());

    // Not able to acquire more tokens.
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(retryableError));
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(requestTimeoutError));
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(3));
}

TEST_F(RetryStrategyTest, TestStandardRetryStrategy)
{
    AWSError<CoreErrors> requestTimeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    AWSError<CoreErrors> retryableError(CoreErrors::NETWORK_CONNECTION, true);
    AWSError<CoreErrors> nonRetryableError(CoreErrors::INCOMPLETE_SIGNATURE, false);

    MockStandardRetryStrategy retryStrategy;
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
    ASSERT_EQ(3, retryStrategy.GetMaxAttempts());

    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    HttpResponseOutcome httpResponseOutcome(httpResponse);
    retryStrategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Non-retryable error.
    ASSERT_FALSE(retryStrategy.ShouldRetry(nonRetryableError, 0));
    // Hit attempt limit.
    ASSERT_FALSE(retryStrategy.ShouldRetry(retryableError, 2));

    // Acquire 5 tokens, remains 495.
    ASSERT_TRUE(retryStrategy.ShouldRetry(retryableError, 0));
    ASSERT_EQ(495, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Acquire 10 tokens, remains 485.
    ASSERT_TRUE(retryStrategy.ShouldRetry(requestTimeoutError, 0));
    ASSERT_EQ(485, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Acquire 478 tokens, remains 7.
    ASSERT_TRUE(retryStrategy.GetRetryQuotaContainer()->AcquireRetryQuota(478));
    ASSERT_EQ(7, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Not able to retry with request timeout error with insufficient tokens.
    ASSERT_FALSE(retryStrategy.ShouldRetry(requestTimeoutError, 0));

    // Still able to retry with other errors. Acquire 5 tokens, remains 2.
    ASSERT_TRUE(retryStrategy.ShouldRetry(retryableError, 0));
    ASSERT_EQ(2, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 5 tokens, remains 7.
    retryStrategy.RequestBookkeeping(httpResponseOutcome, retryableError);
    ASSERT_EQ(7, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 10 tokens, remains 17.
    retryStrategy.RequestBookkeeping(httpResponseOutcome, requestTimeoutError);
    ASSERT_EQ(17, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 1 token, remains 18.
    retryStrategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(18, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 480 tokens, remains 498
    retryStrategy.GetRetryQuotaContainer()->ReleaseRetryQuota(480);
    ASSERT_EQ(498, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Hit the max token capicity, remains 500.
    retryStrategy.RequestBookkeeping(httpResponse, retryableError);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Hit the max token capicity, not able to release more tokens.
    retryStrategy.RequestBookkeeping(httpResponse, requestTimeoutError);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
}

class NewRetriesStrategyTest : public Aws::Testing::AwsCppSdkGTestSuite
{
    Aws::Environment::EnvironmentRAII m_env{{{"AWS_NEW_RETRIES_2026", "true"}}};
};

// SEP Test Case 1
TEST_F(NewRetriesStrategyTest, TransientRetryCost)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    ASSERT_TRUE(retryStrategy.ShouldRetry(transientError, 0));
    ASSERT_EQ(486, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    ASSERT_TRUE(retryStrategy.ShouldRetry(transientError, 1));
    ASSERT_EQ(472, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
}

// SEP Test Case 3
TEST_F(NewRetriesStrategyTest, QuotaExhaustionWithNewCosts)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    // Drain to 10 tokens
    ASSERT_TRUE(retryStrategy.GetRetryQuotaContainer()->AcquireRetryQuota(490));
    ASSERT_EQ(10, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Can't acquire 14 tokens for transient error
    ASSERT_FALSE(retryStrategy.ShouldRetry(transientError, 0));
}

// SEP Test Case 5
TEST_F(NewRetriesStrategyTest, ExponentialBackoffTransient)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    // Backoff with 50ms base: [0, 50ms] at i=0, [0, 100ms] at i=1, etc.
    for (int i = 0; i < 4; ++i)
    {
        long delay = retryStrategy.CalculateDelayBeforeNextRetry(transientError, i);
        long maxDelay = static_cast<long>(0.05 * (1L << i) * 1000.0);
        ASSERT_GE(delay, 0) << "Retry " << i;
        ASSERT_LE(delay, maxDelay) << "Retry " << i;
    }
}

// SEP Test Case 6
TEST_F(NewRetriesStrategyTest, MaxBackoffCap)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    // At high retry index, cap at 20s
    long delay = retryStrategy.CalculateDelayBeforeNextRetry(transientError, 30);
    ASSERT_LE(delay, 20000);
}

// SEP Test Case 8
TEST_F(NewRetriesStrategyTest, QuotaRecoveryOnSuccess)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    HttpResponseOutcome httpResponseOutcome(httpResponse);

    // Retry costs 14, quota = 486
    ASSERT_TRUE(retryStrategy.ShouldRetry(transientError, 0));
    ASSERT_EQ(486, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Success releases 14, quota = 500
    retryStrategy.RequestBookkeeping(httpResponseOutcome, transientError);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
}

// SEP Test Case 9
TEST_F(NewRetriesStrategyTest, ThrottlingRetryCost)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> throttlingError(CoreErrors::THROTTLING, RetryableType::RETRYABLE_THROTTLING);

    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    ASSERT_TRUE(retryStrategy.ShouldRetry(throttlingError, 0));
    ASSERT_EQ(495, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
}

// SEP Test Case 10
TEST_F(NewRetriesStrategyTest, ExponentialBackoffThrottling)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> throttlingError(CoreErrors::THROTTLING, RetryableType::RETRYABLE_THROTTLING);

    // Backoff with 1000ms base: [0, 1000ms] at i=0, [0, 2000ms] at i=1
    long delay = retryStrategy.CalculateDelayBeforeNextRetry(throttlingError, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 1000);

    delay = retryStrategy.CalculateDelayBeforeNextRetry(throttlingError, 1);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 2000);
}

// SEP Test Case 17
TEST_F(NewRetriesStrategyTest, RetryAfterHeaderHonored)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> error(CoreErrors::NETWORK_CONNECTION, true);
    HeaderValueCollection headers;
    headers["x-amz-retry-after"] = "1500";
    error.SetResponseHeaders(headers);

    long delay = retryStrategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 5050);
}

// SEP Test Case 18
TEST_F(NewRetriesStrategyTest, RetryAfterFloorClamped)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> error(CoreErrors::NETWORK_CONNECTION, true);
    HeaderValueCollection headers;
    headers["x-amz-retry-after"] = "0";
    error.SetResponseHeaders(headers);

    long delay = retryStrategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 50);
}

// SEP Test Case 19
TEST_F(NewRetriesStrategyTest, RetryAfterCeilingClamped)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> error(CoreErrors::NETWORK_CONNECTION, true);
    HeaderValueCollection headers;
    headers["x-amz-retry-after"] = "10000";
    error.SetResponseHeaders(headers);

    long delay = retryStrategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 5050);
}

// SEP Test Case 20
TEST_F(NewRetriesStrategyTest, InvalidRetryAfterFallsBack)
{
    MockStandardRetryStrategy retryStrategy;
    AWSError<CoreErrors> error(CoreErrors::NETWORK_CONNECTION, true);
    HeaderValueCollection headers;
    headers["x-amz-retry-after"] = "abc";
    error.SetResponseHeaders(headers);

    long delay = retryStrategy.CalculateDelayBeforeNextRetry(error, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 50);
}

// SEP Test Case 11 - DynamoDB tuning: 25ms non-throttling backoff base
TEST_F(NewRetriesStrategyTest, DynamoDBBackoffBase)
{
    MockStandardRetryStrategy retryStrategy(0.025);
    AWSError<CoreErrors> transientError(CoreErrors::NETWORK_CONNECTION, true);

    // Backoff with 25ms base: [0, 25ms] at i=0, [0, 50ms] at i=1, etc.
    for (int i = 0; i < 4; ++i)
    {
        long delay = retryStrategy.CalculateDelayBeforeNextRetry(transientError, i);
        long maxDelay = static_cast<long>(0.025 * (1L << i) * 1000.0);
        ASSERT_GE(delay, 0) << "Retry " << i;
        ASSERT_LE(delay, maxDelay) << "Retry " << i;
    }

    // Throttling base is unchanged at 1s regardless of the transient base.
    AWSError<CoreErrors> throttlingError(CoreErrors::THROTTLING, RetryableType::RETRYABLE_THROTTLING);
    long delay = retryStrategy.CalculateDelayBeforeNextRetry(throttlingError, 0);
    ASSERT_GE(delay, 0);
    ASSERT_LE(delay, 1000);
}
