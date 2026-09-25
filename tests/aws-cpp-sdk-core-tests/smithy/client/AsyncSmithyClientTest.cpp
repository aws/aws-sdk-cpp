/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/endpoint/AWSEndpoint.h>
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/built-in/GenericAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>

#include <chrono>
#include <condition_variable>
#include <mutex>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

#if defined(AWS_CRT_HTTP_USE_ASYNC_IO)
namespace
{
    const char ALLOCATION_TAG[] = "AsyncSmithyClientTest";
    const char ENDPOINT_URL[] = "https://domain.com";

    class InlineExecutor : public Aws::Utils::Threading::Executor
    {
    protected:
        bool SubmitToThread(std::function<void()>&& task) override
        {
            task();
            return true;
        }
    };

    class TestEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
    {
    public:
        using Aws::Endpoint::EndpointProviderBase<>::InitBuiltInParameters;
        void InitBuiltInParameters(const Aws::Client::GenericClientConfiguration& config) override { AWS_UNREFERENCED_PARAM(config); }
        void OverrideEndpoint(const Aws::String& endpoint) override { AWS_UNREFERENCED_PARAM(endpoint); }
        ClientContextParameters& AccessClientContextParameters() override { return m_clientContext; }
        const ClientContextParameters& GetClientContextParameters() const override { return m_clientContext; }
        Aws::Endpoint::ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& parameters) const override
        {
            AWS_UNREFERENCED_PARAM(parameters);
            Aws::Endpoint::AWSEndpoint endpoint;
            endpoint.SetURL(ENDPOINT_URL);
            return endpoint;
        }
        ~TestEndpointProvider() override = default;

    private:
        ClientContextParameters m_clientContext;
    };

    class TestCredentialsProvider : public Aws::Auth::AWSCredentialsProvider
    {
    public:
        Aws::Auth::AWSCredentials GetAWSCredentials() override
        {
            return Aws::Auth::AWSCredentials{"dummyAccessId", "dummySecretKey", "dummySessionToken"};
        }
    };

    class TestCredentialsProviderChain : public Aws::Auth::AWSCredentialsProviderChain
    {
    public:
        TestCredentialsProviderChain()
        {
            AddProvider(Aws::MakeShared<TestCredentialsProvider>(ALLOCATION_TAG));
        }
    };

    static constexpr char AsyncSmithyServiceName[] = "AsyncSmithyService";

    using AsyncSmithyClient = smithy::client::AwsSmithyClientT<AsyncSmithyServiceName,
        Aws::Client::ClientConfiguration,
        smithy::GenericAuthSchemeResolver<>,
        Aws::Crt::Variant<smithy::SigV4AuthScheme>,
        TestEndpointProvider,
        smithy::client::JsonOutcomeSerializer,
        smithy::client::JsonOutcome,
        Aws::Client::JsonErrorMarshaller>;

    class AsyncSmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite
    {
    protected:
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<AsyncSmithyClient> client;
        std::shared_ptr<Aws::Utils::Threading::Executor> executor;

        void SetUp() override
        {
            mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
            executor = Aws::MakeShared<InlineExecutor>(ALLOCATION_TAG);

            ClientConfiguration config;
            config.retryStrategy = Aws::MakeShared<DefaultRetryStrategy>(ALLOCATION_TAG, 3);

            auto credentialsResolver = Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG,
                Aws::MakeShared<TestCredentialsProviderChain>(ALLOCATION_TAG));

            Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4AuthScheme>> authSchemesMap;
            authSchemesMap.emplace(smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                Aws::Crt::Variant<smithy::SigV4AuthScheme>{smithy::SigV4AuthScheme(credentialsResolver, AsyncSmithyServiceName, "us-east-1")});

            auto authSchemeResolver = Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(ALLOCATION_TAG,
                Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption}));

            client = Aws::MakeShared<AsyncSmithyClient>(ALLOCATION_TAG,
                config,
                AsyncSmithyServiceName,
                "AsyncSmithyServiceUserAgentName",
                mockHttpClient,
                Aws::MakeShared<Aws::Client::JsonErrorMarshaller>(ALLOCATION_TAG),
                Aws::MakeShared<TestEndpointProvider>(ALLOCATION_TAG),
                authSchemeResolver,
                authSchemesMap);
        }

        void TearDown() override
        {
            client = nullptr;
            executor = nullptr;
            mockHttpClient = nullptr;
        }

        std::shared_ptr<StandardHttpResponse> MakeSuccessResponse() const
        {
            auto httpRequest = CreateHttpRequest(URI(ENDPOINT_URL), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
            httpResponse->SetResponseCode(HttpResponseCode::OK);
            httpResponse->GetResponseBody() << "";
            return httpResponse;
        }

        std::shared_ptr<StandardHttpResponse> MakeRetryableErrorResponse() const
        {
            auto httpRequest = CreateHttpRequest(URI(ENDPOINT_URL), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
            httpResponse->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
            httpResponse->SetClientErrorMessage("simulated transient network error");
            return httpResponse;
        }

        HttpResponseOutcome RunAndCapture()
        {
            AmazonWebServiceRequestMock request;
            HttpResponseOutcome captured;
            bool handlerCalled = false;
            client->MakeRequestAsync(&request,
                "TestOperation",
                HttpMethod::HTTP_GET,
                [](Aws::Endpoint::AWSEndpoint&) {},
                [&](HttpResponseOutcome&& outcome)
                {
                    captured = std::move(outcome);
                    handlerCalled = true;
                },
                nullptr,
                executor);
            EXPECT_TRUE(handlerCalled);
            return captured;
        }
    };

    TEST_F(AsyncSmithyClientTest, SuccessfulRequestDeliversSuccess)
    {
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        auto outcome = RunAndCapture();

        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncSmithyClientTest, RetryableErrorRetriesThenSucceeds)
    {
        mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        auto outcome = RunAndCapture();

        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncSmithyClientTest, RetryBackoffIsCarriedAsScheduledDelay)
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

    TEST_F(AsyncSmithyClientTest, ExhaustedRetriesDeliverError)
    {
        for (int i = 0; i < 5; ++i)
        {
            mockHttpClient->AddResponseToReturn(MakeRetryableErrorResponse());
        }

        auto outcome = RunAndCapture();

        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_EQ(4u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(AsyncSmithyClientTest, SynchronousCallBlocksUntilAsyncCompletion)
    {
        mockHttpClient->SetCompleteAsynchronously(true);
        mockHttpClient->AddResponseToReturn(MakeSuccessResponse());

        AmazonWebServiceRequestMock request;
        auto outcome = client->MakeRequestSync(&request, "TestOperation", HttpMethod::HTTP_GET,
            [](Aws::Endpoint::AWSEndpoint&) {}, nullptr);

        ASSERT_TRUE(outcome.IsSuccess())
            << "MakeRequestSync must block for the async completion instead of returning the default 'Response handler was not called' error";
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }
}
#endif
