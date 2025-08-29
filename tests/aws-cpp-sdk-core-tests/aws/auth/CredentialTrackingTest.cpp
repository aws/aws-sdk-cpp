/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;

static const char ALLOCATION_TAG[] = "CredentialTrackingTest";

// Custom client that uses default credential provider for testing
class CredentialTestingClient : public Aws::Client::AWSClient
{
public:
    explicit CredentialTestingClient(const Aws::Client::ClientConfiguration& configuration)
        : AWSClient(configuration,
                   Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(ALLOCATION_TAG,
                       Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                       "service", configuration.region),
                   Aws::MakeShared<MockAWSErrorMarshaller>(ALLOCATION_TAG))
    {
    }

    Aws::Client::HttpResponseOutcome MakeRequest(const Aws::AmazonWebServiceRequest& request)
    {
        auto uri = Aws::Http::URI("https://test.com");
        return AWSClient::AttemptExhaustively(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
    }

    const char* GetServiceClientName() const override { return "CredentialTestingClient"; }

protected:
    Aws::Client::AWSError<Aws::Client::CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override
    {
        AWS_UNREFERENCED_PARAM(response);
        return Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::UNKNOWN, false);
    }
};

class CredentialTrackingTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;

    void SetUp() override
    {
        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
    }

    void TearDown() override
    {
        mockHttpClient->Reset();
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;
        Aws::Http::CleanupHttp();
        Aws::Http::InitHttp();
    }
};

TEST_F(CredentialTrackingTest, TestEnvironmentCredentialsTracking)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ACCESS_KEY_ID", "test-access-key"},
        {"AWS_SECRET_ACCESS_KEY", "test-secret-key"},
    }};

    // Setup mock response
    std::shared_ptr<HttpRequest> requestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST,
                        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
    successResponse->SetResponseCode(HttpResponseCode::OK);
    successResponse->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(successResponse);

    // Create client configuration
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    clientConfig.region = Aws::Region::US_EAST_1;

    // Create credential testing client that uses default provider chain
    CredentialTestingClient client(clientConfig);

    // Create mock request
    AmazonWebServiceRequestMock mockRequest;

    // Make request
    auto outcome = client.MakeRequest(mockRequest);
    ASSERT_TRUE(outcome.IsSuccess());

    // Verify User-Agent contains environment credentials tracking
    auto lastRequest = mockHttpClient->GetMostRecentHttpRequest();
    EXPECT_TRUE(lastRequest.HasHeader(Aws::Http::USER_AGENT_HEADER));
    const auto& userAgent = lastRequest.GetHeaderValue(Aws::Http::USER_AGENT_HEADER);
    EXPECT_FALSE(userAgent.empty());

    const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');

    // Verify there's only one m/ section (no duplicate m/ sections)
    int mSectionCount = 0;
    for (const auto& part : userAgentParsed) {
        if (part.find("m/") != Aws::String::npos) {
            mSectionCount++;
        }
    }
    EXPECT_EQ(1, mSectionCount);

    // Check for environment credentials business metric (g) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("g") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());
}
