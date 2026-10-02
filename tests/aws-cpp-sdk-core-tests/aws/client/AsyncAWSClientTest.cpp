/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/tracing/MockMeterProvider.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

#include <chrono>
#include <condition_variable>
#include <mutex>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace smithy::components::tracing;

#if defined(AWS_CRT_HTTP_USE_ASYNC_IO)
namespace
{
    const char ALLOCATION_TAG[] = "AsyncAWSClientTest";
    const char URI_STRING[] = "http://domain.com/something";
    const long LONG_POLL_DELAY_MS = 150;

    class InlineExecutor : public Aws::Utils::Threading::Executor
    {
    protected:
        bool SubmitToThread(std::function<void()>&& task) override
        {
            task();
            return true;
        }
    };

    class AsyncAWSClientTest : public Aws::Testing::AwsCppSdkGTestSuite
    {
    protected:
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
        Aws::UniquePtr<MockAWSClient> client;
        std::shared_ptr<Aws::Utils::Threading::Executor> executor;

        void SetUp() override
        {
            ClientConfiguration config;
            config.scheme = Scheme::HTTP;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            auto countedRetryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG, 3);
            config.retryStrategy = std::static_pointer_cast<DefaultRetryStrategy>(countedRetryStrategy);

            mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
            mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
            mockHttpClientFactory->SetClient(mockHttpClient);
            SetHttpClientFactory(mockHttpClientFactory);
            client = Aws::MakeUnique<MockAWSClient>(ALLOCATION_TAG, config);
            executor = Aws::MakeShared<InlineExecutor>(ALLOCATION_TAG);
        }

        void TearDown() override
        {
            executor = nullptr;
            client = nullptr;
            mockHttpClient = nullptr;
            mockHttpClientFactory = nullptr;
            CleanupHttp();
            InitHttp();
        }

        std::shared_ptr<StandardHttpResponse> MakeSuccessResponse() const
        {
            auto httpRequest = CreateHttpRequest(URI(URI_STRING), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
            httpResponse->SetResponseCode(HttpResponseCode::OK);
            httpResponse->GetResponseBody() << "";
            return httpResponse;
        }

        std::shared_ptr<StandardHttpResponse> MakeRetryableErrorResponse() const
        {
            auto httpRequest = CreateHttpRequest(URI(URI_STRING), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
            httpResponse->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
            httpResponse->SetClientErrorMessage("simulated transient network error");
            return httpResponse;
        }

        HttpResponseOutcome RunAndCapture()
        {
            AmazonWebServiceRequestMock request;
            return RunAndCapture(*client, request);
        }

        template <typename ClientT>
        HttpResponseOutcome RunAndCapture(ClientT& target, const Aws::AmazonWebServiceRequest& request)
        {
            HttpResponseOutcome captured;
            bool handlerCalled = false;
            target.MakeRequestAsync(request,
                [&](HttpResponseOutcome&& outcome)
                {
                    captured = std::move(outcome);
                    handlerCalled = true;
                },
                executor);
            EXPECT_TRUE(handlerCalled);
            return captured;
        }
    };

    TEST_F(AsyncAWSClientTest, SuccessfulRequestDeliversSuccessWithNoRetries)
    {
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        auto outcome = RunAndCapture();

        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_EQ(0, client->GetRequestAttemptedRetries());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncAWSClientTest, RetryableErrorRetriesThenSucceeds)
    {
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        auto outcome = RunAndCapture();

        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_EQ(1, client->GetRequestAttemptedRetries());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncAWSClientTest, RetryBackoffIsCarriedAsScheduledDelay)
    {
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        auto outcome = RunAndCapture();

        ASSERT_TRUE(outcome.IsSuccess());
        const auto& delays = mockHttpClient->GetDelaysSeen();
        ASSERT_EQ(3u, delays.size());
        ASSERT_EQ(std::chrono::milliseconds(0), delays[0]);
        ASSERT_GT(delays[2].count(), 0);
    }

    TEST_F(AsyncAWSClientTest, ExhaustedRetriesDeliverError)
    {
        for (int i = 0; i < 5; ++i)
        {
            mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        }

        auto outcome = RunAndCapture();

        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_EQ(4u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncAWSClientTest, LongPollingQuotaExhaustedDelaysCompletion)
    {
        Aws::Environment::EnvironmentRAII env{{{"AWS_NEW_RETRIES_2026", "true"}}};
        ClientConfiguration config;
        auto quota = Aws::MakeShared<DefaultRetryQuotaContainer>(ALLOCATION_TAG);
        config.retryStrategy = Aws::MakeShared<FixedDelayStandardRetryStrategy>(ALLOCATION_TAG, quota, LONG_POLL_DELAY_MS);
        MockAWSClientWithStandardRetryStrategy lpClient(config);
        ASSERT_TRUE(lpClient.GetRetryQuotaContainer()->AcquireRetryQuota(498));
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());

        AmazonWebServiceRequestMock request;
        request.SetLongPollingOperation(true);
        auto outcome = RunAndCapture(lpClient, request);

        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_EQ(0, lpClient.GetRequestAttemptedRetries());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ(std::chrono::milliseconds(LONG_POLL_DELAY_MS), mockHttpClient->GetGiveUpDelaySeen());
    }

    TEST_F(AsyncAWSClientTest, NonLongPollingQuotaExhaustedCompletesImmediately)
    {
        Aws::Environment::EnvironmentRAII env{{{"AWS_NEW_RETRIES_2026", "true"}}};
        ClientConfiguration config;
        auto quota = Aws::MakeShared<DefaultRetryQuotaContainer>(ALLOCATION_TAG);
        config.retryStrategy = Aws::MakeShared<FixedDelayStandardRetryStrategy>(ALLOCATION_TAG, quota, LONG_POLL_DELAY_MS);
        MockAWSClientWithStandardRetryStrategy lpClient(config);
        ASSERT_TRUE(lpClient.GetRetryQuotaContainer()->AcquireRetryQuota(498));
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());

        AmazonWebServiceRequestMock request;
        auto outcome = RunAndCapture(lpClient, request);

        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
        ASSERT_EQ(std::chrono::milliseconds(0), mockHttpClient->GetGiveUpDelaySeen());
    }

    TEST_F(AsyncAWSClientTest, AsyncAttemptEmitsSerializationSigningAndServiceCallMetrics)
    {
        auto recorded = Aws::MakeShared<MockMetricsRecorder>(ALLOCATION_TAG);
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.retryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG, 3);
        config.telemetryProvider = MockMeterProvider::CreateTelemetryProvider(recorded);
        MockAWSClient metricsClient(config);
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        AmazonWebServiceRequestMock request;
        auto outcome = RunAndCapture(metricsClient, request);

        ASSERT_TRUE(outcome.IsSuccess());
        EXPECT_TRUE(recorded->Contains(TracingUtils::SMITHY_CLIENT_SERIALIZATION_METRIC));
        EXPECT_TRUE(recorded->Contains(TracingUtils::SMITHY_CLIENT_SIGNING_METRIC));
        EXPECT_TRUE(recorded->Contains(TracingUtils::SMITHY_CLIENT_SERVICE_CALL_METRIC));
    }
}
#endif
