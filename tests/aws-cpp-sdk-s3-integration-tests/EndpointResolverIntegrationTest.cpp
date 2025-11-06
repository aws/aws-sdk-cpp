/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/config/ConfigAndCredentialsCacheManager.h>
#include <aws/core/platform/Environment.h>
#include <aws/testing/platform/PlatformTesting.h>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Config;
using namespace Aws::Environment;

const char* ALLOCATION_TAG = "EndpointResolverIntegrationTest";

class NoRetry: public RetryStrategy
{
public:
    bool ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
    {
        AWS_UNREFERENCED_PARAM(error);
        AWS_UNREFERENCED_PARAM(attemptedRetries);
        return false;
    }

    long CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
    {
        AWS_UNREFERENCED_PARAM(error);
        AWS_UNREFERENCED_PARAM(attemptedRetries);
        return 0;
    }

    const char* GetStrategyName() const override {
        return "standard";
    }
};

class EndpointResolverIntegrationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    void SetUp() override
    {
        // Clear environment variables
        Aws::Environment::EnvironmentRAII setEnv{{
            {"AWS_ENDPOINT_URL", ""},
            {"AWS_ENDPOINT_URL_S3", ""},
            {"AWS_IGNORE_CONFIGURED_ENDPOINT_URLS", ""},
            {"AWS_CONFIG_FILE", ""}
        }};

        // Set up mock HTTP client
        _mockClientFactory = MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        _mockHttpClient = MakeShared<MockHttpClient>(ALLOCATION_TAG);
        _mockClientFactory->SetClient(_mockHttpClient);
        SetHttpClientFactory(_mockClientFactory);
    }

    void TearDown() override
    {
        // Clean up mock clients
        _mockClientFactory.reset();
        _mockHttpClient.reset();
    }

    void SetupMockResponse()
    {
        auto mockRequest = MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_HEAD);
        mockRequest->SetResponseStreamFactory([]() -> IOStream* {
            return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
        });
        auto mockResponse = MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
        mockResponse->SetResponseCode(HttpResponseCode::OK);
        _mockHttpClient->AddResponseToReturn(mockResponse);
    }

    const Aws::Http::HttpRequest& ExecuteHeadBucketRequest(const S3ClientConfiguration& config)
    {
        SetupMockResponse();

        AWSCredentials credentials{"mock", "credentials"};
        const auto epProvider = MakeShared<S3EndpointProvider>(ALLOCATION_TAG);
        auto testClient = MakeShared<S3Client>(ALLOCATION_TAG, credentials, epProvider, config);

        HeadBucketRequest request;
        request.SetBucket("test-bucket");

        auto response = testClient->HeadBucket(request);
        return _mockHttpClient->GetMostRecentHttpRequest();
    }

    std::shared_ptr<MockHttpClient> _mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> _mockClientFactory;
};

TEST_F(EndpointResolverIntegrationTest, DefaultResolution)
{
    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.profileName = "test-default";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.s3.us-east-1.amazonaws.com", seenRequest.GetUri().GetURIString());
}

TEST_F(EndpointResolverIntegrationTest, CodeProvidedEndpoint)
{
    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.endpointOverride = "https://code-provided.example.com";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.code-provided.example.com", seenRequest.GetUri().GetURIString());
}

TEST_F(EndpointResolverIntegrationTest, ServiceSpecificEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", "https://custom-s3.example.com"}
    }};

    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.custom-s3.example.com", seenRequest.GetUri().GetURIString());
}

TEST_F(EndpointResolverIntegrationTest, GlobalEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"}
    }};

    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.global-env.example.com", seenRequest.GetUri().GetURIString());
}

TEST_F(EndpointResolverIntegrationTest, GlobalEnvironmentVariableUsedOverProfile)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile test-profile-precedence]\n";
    configFile << "endpoint_url = https://profile-endpoint.example.com\n";
    configFile.flush();

    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_ENDPOINT_URL", "https://global-env-override.example.com"}
    }};
    ReloadCachedConfigFile();

    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.profileName = "test-profile-precedence";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.global-env-override.example.com", seenRequest.GetUri().GetURIString());

    ReloadCachedConfigFile();
}

TEST_F(EndpointResolverIntegrationTest, ServiceSpecificProfile)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile test-profile-service]\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();

    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.profileName = "test-profile-service";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.s3-profile.example.com", seenRequest.GetUri().GetURIString());
    ReloadCachedConfigFile();
}

TEST_F(EndpointResolverIntegrationTest, GlobalProfile)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile test-profile-global]\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile.flush();

    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();

    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    s3Config.profileName = "test-profile-global";
    s3Config.retryStrategy = MakeShared<NoRetry>(ALLOCATION_TAG);

    const auto& seenRequest = ExecuteHeadBucketRequest(s3Config);

    EXPECT_EQ("https://test-bucket.global-profile.example.com", seenRequest.GetUri().GetURIString());

    ReloadCachedConfigFile();
}