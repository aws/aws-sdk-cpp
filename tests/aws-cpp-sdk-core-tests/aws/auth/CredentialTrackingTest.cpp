/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>

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
    // Set environment variables
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "test-access-key", 1);
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "test-secret-key", 1);

    // Setup mock response
    auto request = CreateHttpRequest(Aws::Http::URI("http://test.com"), 
                                   Aws::Http::HttpMethod::HTTP_POST, 
                                   Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto response = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, request);
    response->SetResponseCode(HttpResponseCode::OK);
    response->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(response);

    // Create client configuration
    ClientConfiguration config;
    config.region = Aws::Region::US_EAST_1;

    // Create mock client
    MockAWSClient client(config);

    // Make a request
    AmazonWebServiceRequestMock mockRequest;
    auto outcome = client.MakeRequest(mockRequest);

    // Verify request succeeded
    AWS_ASSERT_SUCCESS(outcome);

    // Verify User-Agent contains environment credentials tracking
    auto lastRequest = mockHttpClient->GetMostRecentHttpRequest();
    EXPECT_TRUE(lastRequest.HasUserAgent());
    const auto& userAgent = lastRequest.GetUserAgent();
    EXPECT_TRUE(!userAgent.empty());

    const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');

    // Check for environment credentials business metric (g) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("g") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());

    // Clean up environment variables
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
}

TEST_F(CredentialTrackingTest, TestEnvironmentProviderType)
{
    // Test that EnvironmentAWSCredentialsProvider has correct provider type
    auto envProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(ALLOCATION_TAG);
    
    // Verify the provider type is set correctly
    EXPECT_EQ(envProvider->GetProviderType(), Aws::Auth::CredentialProviderType::ENVIRONMENT);
}