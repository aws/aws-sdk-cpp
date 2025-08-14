/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/platform/Environment.h>

using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;

static const char ALLOCATION_TAG[] = "CredentialTrackingTest";



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
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "test-access-key", 1);
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "test-secret-key", 1);

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

    // Create client with environment credentials signer
    Aws::Client::AWSClient client(clientConfig,
        Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(ALLOCATION_TAG,
            Aws::MakeShared<EnvironmentAWSCredentialsProvider>(ALLOCATION_TAG),
            "service", clientConfig.region),
        Aws::MakeShared<MockAWSErrorMarshaller>(ALLOCATION_TAG));
    
    AmazonWebServiceRequestMock mockRequest;
    auto outcome = client.AttemptExhaustively(Aws::Http::URI("https://test.com"), mockRequest, 
                                             Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
    AWS_ASSERT_SUCCESS(outcome);

    // Verify User-Agent contains environment credentials tracking
    auto lastRequest = mockHttpClient->GetMostRecentHttpRequest();
    EXPECT_TRUE(lastRequest.HasUserAgent());
    const auto& userAgent = lastRequest.GetUserAgent();
    EXPECT_FALSE(userAgent.empty());

    const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');

    // Check for environment credentials business metric (g) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("g") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());

    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
}
