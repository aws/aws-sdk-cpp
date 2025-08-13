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
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "test-access-key");
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "test-secret-key");

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
    
    // Check for environment credentials feature (should contain "g")
    EXPECT_TRUE(userAgent.find("g") != Aws::String::npos);

    // Clean up environment variables
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
}

TEST_F(CredentialTrackingTest, TestDirectEnvironmentProviderTracking)
{
    // Create client with direct environment provider
    ClientConfiguration config;
    config.region = Aws::Region::US_EAST_1;
    
    // Set up environment credentials
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "test-access-key");
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "test-secret-key");
    
    // Create client with environment provider directly
    auto envProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(ALLOCATION_TAG);
    
    // Setup mock response
    auto request = CreateHttpRequest(Aws::Http::URI("http://test.com"), 
                                   Aws::Http::HttpMethod::HTTP_POST, 
                                   Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto response = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, request);
    response->SetResponseCode(HttpResponseCode::OK);
    response->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(response);
    
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
    
    // Check for environment credentials feature (should contain "g")
    EXPECT_TRUE(userAgent.find("g") != Aws::String::npos);
    
    // Clean up
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
}

TEST_F(CredentialTrackingTest, TestNoEnvironmentCredentialsNoTracking)
{
    // Ensure no environment variables are set
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
    
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
    
    MockAWSClient client(config);
    
    // Make a request
    AmazonWebServiceRequestMock mockRequest;
    auto outcome = client.MakeRequest(mockRequest);
    
    // Verify request succeeded
    AWS_ASSERT_SUCCESS(outcome);
    
    // Verify User-Agent does NOT contain environment credentials tracking
    auto lastRequest = mockHttpClient->GetMostRecentHttpRequest();
    EXPECT_TRUE(lastRequest.HasUserAgent());
    const auto& userAgent = lastRequest.GetUserAgent();
    
    // Should not contain environment credentials feature "g" when not using env vars
    EXPECT_TRUE(userAgent.find("g") == Aws::String::npos);
}