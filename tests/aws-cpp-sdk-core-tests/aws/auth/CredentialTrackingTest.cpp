/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/auth/SSOCredentialsProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/platform/FileSystem.h>
#include <fstream>
#include <sys/stat.h>

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

    // Constructor with custom credential provider for IMDS test
    explicit CredentialTestingClient(const Aws::Client::ClientConfiguration& configuration,
                                   std::shared_ptr<AWSCredentialsProvider> credentialsProvider)
        : AWSClient(configuration,
                   Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(ALLOCATION_TAG,
                       credentialsProvider,
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

TEST_F(CredentialTrackingTest, TestProfileCredentialsTracking)
{
    // Create a temporary credentials file
    Aws::String tempDir = "/tmp";
    Aws::String awsDir = tempDir + "/.aws";
    Aws::String credentialsFile = awsDir + "/credentials";

    // Ensure directory exists
    mkdir(tempDir.c_str(), 0755);
    mkdir(awsDir.c_str(), 0755);

    // Write test credentials to file
    std::ofstream credFile(credentialsFile.c_str());
    credFile << "[default]\n";
    credFile << "aws_access_key_id = test-profile-access-key\n";
    credFile << "aws_secret_access_key = test-profile-secret-key\n";
    credFile.close();

    // Set environment to use our test credentials file
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_SHARED_CREDENTIALS_FILE", credentialsFile},
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

    // Verify User-Agent contains profile credentials tracking
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

    // Check for profile credentials business metric (n) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("n") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());

    // Cleanup
    std::remove(credentialsFile.c_str());
}

TEST_F(CredentialTrackingTest, TestProcessCredentialsTracking)
{
    // Create a temporary config file with credential_process
    Aws::String tempDir = "/tmp";
    Aws::String awsDir = tempDir + "/.aws";
    Aws::String configFile = awsDir + "/config";

    // Ensure directory exists
    mkdir(tempDir.c_str(), 0755);
    mkdir(awsDir.c_str(), 0755);

    // Write test config with credential_process
    std::ofstream confFile(configFile.c_str());
    confFile << "[default]\n";
    confFile << "credential_process = echo '{\"Version\": 1, \"AccessKeyId\": \"test-process-key\", \"SecretAccessKey\": \"test-process-secret\"}'\n";
    confFile.close();

    // Set environment to use our test config file
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_CONFIG_FILE", configFile},
    }};

    // Force reload config file after setting environment variable
    Aws::Config::ReloadCachedConfigFile();

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

    // Verify User-Agent contains process credentials tracking
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

    // Check for process credentials business metric (w) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("w") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());

    // Cleanup
    std::remove(configFile.c_str());
}

TEST_F(CredentialTrackingTest, TestInstanceProfileCredentialsTracking)
{
    // Create mock EC2 metadata client with valid credentials
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    const char* validCredentials = R"({ "AccessKeyId": "test-imds-access-key", "SecretAccessKey": "test-imds-secret-key", "Token": "test-imds-token", "Code": "Success", "Expiration": "2037-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    // Create IMDS credential provider with mock client
    auto imdsProvider = Aws::MakeShared<InstanceProfileCredentialsProvider>(ALLOCATION_TAG,
        Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(ALLOCATION_TAG, mockClient), 1000 * 60 * 15);

    // Setup mock response for service call
    std::shared_ptr<HttpRequest> requestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST,
                        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
    successResponse->SetResponseCode(HttpResponseCode::OK);
    successResponse->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(successResponse);

    // Create client configuration
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = false;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    clientConfig.region = Aws::Region::US_EAST_1;

    // Create credential testing client with IMDS provider
    CredentialTestingClient client(clientConfig, imdsProvider);

    // Create mock request
    AmazonWebServiceRequestMock mockRequest;

    // Make request
    auto outcome = client.MakeRequest(mockRequest);
    ASSERT_TRUE(outcome.IsSuccess());

    // Verify User-Agent contains IMDS credentials tracking
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

    // Check for IMDS credentials business metric (0) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("0") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());
}

TEST_F(CredentialTrackingTest, TestSSOCredentialsTracking)
{
    // Use home directory instead of /tmp to match SSO provider expectations
    Aws::String homeDir = Aws::FileSystem::GetHomeDirectory();
    Aws::String awsDir = homeDir + "/.aws";
    Aws::String ssoDir = awsDir + "/sso/cache";
    Aws::String configFile = awsDir + "/config";
    Aws::String tokenFile = ssoDir + "/d033e22ae348aeb5660fc2140aec35850c4da997.json";

    // Ensure directories exist
    mkdir(awsDir.c_str(), 0755);
    mkdir((awsDir + "/sso").c_str(), 0755);
    mkdir(ssoDir.c_str(), 0755);

    // Write test config with legacy SSO configuration
    std::ofstream confFile(configFile.c_str());
    confFile << "[default]\n";
    confFile << "sso_account_id = 123456789012\n";
    confFile << "sso_region = us-east-1\n";
    confFile << "sso_role_name = TestRole\n";
    confFile << "sso_start_url = https://test.awsapps.com/start\n";
    confFile.close();

    // Calculate correct token file name based on SHA1 hash of start URL
    Aws::String startUrl = "https://test.awsapps.com/start";
    auto hash = Aws::Utils::HashingUtils::CalculateSHA1(startUrl);
    Aws::String tokenFileName = Aws::Utils::HashingUtils::HexEncode(hash) + ".json";
    Aws::String correctTokenFile = ssoDir + "/" + tokenFileName;

    // Write test SSO token file with correct name
    std::ofstream tokenFileStream(correctTokenFile.c_str());
    tokenFileStream << "{\n";
    tokenFileStream << "  \"accessToken\": \"test-sso-access-token\",\n";
    tokenFileStream << "  \"expiresAt\": \"2099-12-31T23:59:59Z\"\n";
    tokenFileStream << "}\n";
    tokenFileStream.close();

    // Set environment to use our test config file
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_CONFIG_FILE", configFile},
        {"AWS_ACCESS_KEY_ID", ""},
        {"AWS_SECRET_ACCESS_KEY", ""},
    }};

    // Force reload config file after setting environment variable
    Aws::Config::ReloadCachedConfigFile();

    // Setup mock response for SSO GetRoleCredentials
    std::shared_ptr<HttpRequest> ssoRequestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST,
                        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto ssoResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, ssoRequestTmp);
    ssoResponse->SetResponseCode(HttpResponseCode::OK);
    ssoResponse->GetResponseBody() << R"({
        "roleCredentials": {
            "accessKeyId": "test-sso-access-key",
            "secretAccessKey": "test-sso-secret-key",
            "sessionToken": "test-sso-session-token",
            "expiration": 9999999999000
        }
    })";
    mockHttpClient->AddResponseToReturn(ssoResponse);

    // Setup mock response for service call
    std::shared_ptr<HttpRequest> requestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST,
                        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
    successResponse->SetResponseCode(HttpResponseCode::OK);
    successResponse->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(successResponse);

    // Create SSO credentials provider with specific profile
    auto ssoProvider = Aws::MakeShared<SSOCredentialsProvider>(ALLOCATION_TAG, "default");

    // Create client configuration
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    clientConfig.region = Aws::Region::US_EAST_1;

    // Create credential testing client with SSO provider
    CredentialTestingClient client(clientConfig, ssoProvider);

    // Create mock request
    AmazonWebServiceRequestMock mockRequest;

    // Make request
    auto outcome = client.MakeRequest(mockRequest);
    ASSERT_TRUE(outcome.IsSuccess());

    // Verify User-Agent contains SSO credentials tracking
    auto lastRequest = mockHttpClient->GetMostRecentHttpRequest();
    EXPECT_TRUE(lastRequest.HasHeader(Aws::Http::USER_AGENT_HEADER));
    const auto& userAgent = lastRequest.GetHeaderValue(Aws::Http::USER_AGENT_HEADER);
    EXPECT_FALSE(userAgent.empty());

    const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');

    // Check for SSO credentials business metric (s) in user agent
    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
        [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("s") != Aws::String::npos; });

    EXPECT_TRUE(businessMetrics != userAgentParsed.end());

    // Cleanup
    std::remove(correctTokenFile.c_str());
    std::remove(configFile.c_str());
}