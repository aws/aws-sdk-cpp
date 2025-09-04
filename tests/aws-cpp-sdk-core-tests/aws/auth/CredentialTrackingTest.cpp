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
#include <aws/core/auth/GeneralHTTPCredentialsProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <fstream>
#include <sys/stat.h>
#include <thread>

using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::FileSystem;
using namespace Aws::Http::Standard;

namespace {
const char* TEST_LOG_TAG =  "CredentialTrackingTest";
}

static Aws::String WrapEchoStringWithSingleQuoteForUnixShell(Aws::String str)
{
#ifndef _WIN32
  str.insert(0, 1, '\'');
  str.append(1, '\'');
#endif
  return str;
}

// Custom client that uses default credential provider for testing
class CredentialTestingClient : public Aws::Client::AWSClient
{
public:
    explicit CredentialTestingClient(const Aws::Client::ClientConfiguration& configuration)
        : AWSClient(configuration,
                   Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(TEST_LOG_TAG,
                       Aws::MakeShared<DefaultAWSCredentialsProviderChain>(TEST_LOG_TAG),
                       "service", configuration.region),
                   Aws::MakeShared<MockAWSErrorMarshaller>(TEST_LOG_TAG))
    {
    }

    // Constructor with custom credential provider for IMDS test
    explicit CredentialTestingClient(const Aws::Client::ClientConfiguration& configuration,
                                   std::shared_ptr<AWSCredentialsProvider> credentialsProvider)
        : AWSClient(configuration,
                   Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(TEST_LOG_TAG,
                       credentialsProvider,
                       "service", configuration.region),
                   Aws::MakeShared<MockAWSErrorMarshaller>(TEST_LOG_TAG))
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
    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;

    void SetUp() override
    {
        mockHttpClient = Aws::MakeShared<MockHttpClient>(TEST_LOG_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(TEST_LOG_TAG);
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

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

    void RunTestWithCredentialsProvider(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::String& id) {
      // Setup mock response
      std::shared_ptr<HttpRequest> requestTmp =
          CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST,
                          Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
      auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(TEST_LOG_TAG, requestTmp);
      successResponse->SetResponseCode(HttpResponseCode::OK);
      successResponse->GetResponseBody() << "{}";
      mockHttpClient->AddResponseToReturn(successResponse);

      // Create client configuration
      Aws::Client::ClientConfigurationInitValues cfgInit;
      cfgInit.shouldDisableIMDS = true;
      Aws::Client::ClientConfiguration clientConfig(cfgInit);
      clientConfig.region = Aws::Region::US_EAST_1;

      // Create credential testing client that uses default provider chain
      CredentialTestingClient client(clientConfig, credentialsProvider);

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
          [&id](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find(id) != Aws::String::npos; });

      EXPECT_TRUE(businessMetrics != userAgentParsed.end());
    }
};

TEST_F(CredentialTrackingTest, TestEnvironmentCredentialsTracking)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ACCESS_KEY_ID", "test-access-key"},
        {"AWS_SECRET_ACCESS_KEY", "test-secret-key"},
    }};
    auto credsProvider = Aws::MakeShared<Aws::Auth::EnvironmentAWSCredentialsProvider>(TEST_LOG_TAG);
    RunTestWithCredentialsProvider(std::move(credsProvider), "g");
}

TEST_F(CredentialTrackingTest, TestProfileCredentialsTracking)
{
    // Create temporary credentials file
    Aws::Utils::TempFile credentialsFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(credentialsFile.good());
    credentialsFile << "[default]" << std::endl;
    credentialsFile << "aws_access_key_id = test-profile-access-key" << std::endl;
    credentialsFile << "aws_secret_access_key = test-profile-secret-key" << std::endl;
    credentialsFile.close();

    // Set environment to use our test credentials file
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_SHARED_CREDENTIALS_FILE", credentialsFile.GetFileName().c_str()},
    }};
    Aws::Config::ReloadCachedCredentialsFile();

    auto credsProvider = Aws::MakeShared<Aws::Auth::ProfileConfigFileAWSCredentialsProvider>(TEST_LOG_TAG);
    RunTestWithCredentialsProvider(std::move(credsProvider), "n");
}

TEST_F(CredentialTrackingTest, TestProfileProcessCredentialsTracking)
{
    // Create temporary config file with credential_process
    Aws::Utils::TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"test-process-key\", \"SecretAccessKey\": \"test-process-secret\"}") << std::endl;
    configFile.close();

    // Set environment to use our test config file
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_CONFIG_FILE", configFile.GetFileName().c_str()},
    }};

    // Force reload config file after setting environment variable
    Aws::Config::ReloadCachedConfigFile();

    auto credsProvider = Aws::MakeShared<Aws::Auth::ProcessCredentialsProvider>(TEST_LOG_TAG);
    RunTestWithCredentialsProvider(std::move(credsProvider), "v");
}

TEST_F(CredentialTrackingTest, TestInstanceProfileCredentialsTracking)
{
    // Create mock EC2 metadata client with valid credentials
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(TEST_LOG_TAG);
    const char* validCredentials = R"({ "AccessKeyId": "test-imds-access-key", "SecretAccessKey": "test-imds-secret-key", "Token": "test-imds-token", "Code": "Success", "Expiration": "2037-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    // Create IMDS credential provider with mock client
    auto imdsProvider = Aws::MakeShared<InstanceProfileCredentialsProvider>(TEST_LOG_TAG,
        Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(TEST_LOG_TAG, mockClient), 1000);

    RunTestWithCredentialsProvider(std::move(imdsProvider), "0");
}

TEST_F(CredentialTrackingTest, TestHTTPCredentialsTracking)
{
    // Create mock HTTP response with valid credentials
    std::shared_ptr<HttpRequest> requestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET,
                        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(TEST_LOG_TAG, requestTmp);
    successResponse->SetResponseCode(HttpResponseCode::OK);
    successResponse->GetResponseBody() << R"({
        "AccessKeyId": "test-http-access-key",
        "SecretAccessKey": "test-http-secret-key",
        "Token": "test-http-token",
        "Expiration": "2037-04-19T00:00:00Z"
    })";
    mockHttpClient->AddResponseToReturn(successResponse);

    // Set environment for HTTP credentials provider
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_CONTAINER_CREDENTIALS_FULL_URI", "http://127.0.0.1/credentials"},
    }};

    auto credsProvider = Aws::MakeShared<Aws::Auth::GeneralHTTPCredentialsProvider>(TEST_LOG_TAG,
        "", "http://127.0.0.1/credentials", "", "");
    RunTestWithCredentialsProvider(std::move(credsProvider), "z");
}

class SSOCredentialsProviderTest : public CredentialTrackingTest
{
public:
    void SetUp() override
    {
        CredentialTrackingTest::SetUp();

        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_DEFAULT_REGION");

        // Create unique config filename
        Aws::StringStream ssConfig;
        ssConfig << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ssConfig.str();
        
        // Set environment variables
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
        Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");

        // Create directory structure safely
        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        if (profileDirectory.empty()) {
            GTEST_SKIP() << "Profile directory not available";
            return;
        }
        
        AWS_LOGSTREAM_DEBUG(TEST_LOG_TAG, "Creating SSO directories in: " << profileDirectory);
        
        if (!Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str())) {
            GTEST_SKIP() << "Failed to create profile directory";
            return;
        }
        
        Aws::StringStream ssCachedTokenDirectory;
        ssCachedTokenDirectory << profileDirectory << PATH_DELIM << "sso";
        if (!Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str())) {
            GTEST_SKIP() << "Failed to create SSO directory";
            return;
        }
        
        ssCachedTokenDirectory << PATH_DELIM << "cache";
        if (!Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str())) {
            GTEST_SKIP() << "Failed to create SSO cache directory";
            return;
        }

        // Setup token file paths
        Aws::StringStream ssToken;
        ssToken << ssCachedTokenDirectory.str() << PATH_DELIM 
                << "13f9d35043871d073ab260e020f0ffde092cb14b.json";  // SHA1 of SSO URL
        m_ssoTokenFileName = ssToken.str();

        AWS_LOGSTREAM_DEBUG(TEST_LOG_TAG, "SSO token file will be created at: " << m_ssoTokenFileName);
    }

    void TearDown() override
    {
        // Force cleanup of cached config before file removal
        Aws::Config::ReloadCachedConfigFile();
        
        // Cleanup files with explicit sync
        AWS_LOGSTREAM_DEBUG(TEST_LOG_TAG, "Cleaning up test files");
        if (Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str())) {
            AWS_LOGSTREAM_DEBUG(TEST_LOG_TAG, "Removed config file: " << m_configFileName);
        }
        if (Aws::FileSystem::RemoveFileIfExists(m_ssoTokenFileName.c_str())) {
            AWS_LOGSTREAM_DEBUG(TEST_LOG_TAG, "Removed token file: " << m_ssoTokenFileName);
        }

        // Restore environment before parent cleanup
        RestoreEnvironmentVariables();
        
        // Force another config reload after environment restore
        Aws::Config::ReloadCachedConfigFile();

        CredentialTrackingTest::TearDown();
    }

protected:
    Aws::String m_configFileName;
    Aws::String m_ssoTokenFileName;
};

TEST_F(SSOCredentialsProviderTest, TestSSOCredentialsTracking)
{
    // Create config file
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[default]" << std::endl;
    configFile << "sso_account_id = [REDACTED:BANK_ACCOUNT_NUMBER]" << std::endl;
    configFile << "sso_region = us-east-1" << std::endl;
    configFile << "sso_role_name = TestRole" << std::endl;
    configFile << "sso_start_url = https://test.awsapps.com/start" << std::endl;
    configFile.close();

    // Create token file
    Aws::OFStream tokenFile(m_ssoTokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    ASSERT_TRUE(tokenFile.good());
    tokenFile << R"({
    "accessToken": "test-sso-access-token",
    "expiresAt": ")" << Aws::Utils::DateTime::Now().GetYear() + 1 << R"(-01-02T00:00:00Z",
    "region": "us-east-1",
    "startUrl": "https://test.awsapps.com/start"
})";
    tokenFile.close();

    // Force reload config file
    Aws::Config::ReloadCachedConfigFile();

    // Setup mock response
    std::shared_ptr<HttpRequest> requestTmp = CreateHttpRequest(
        Aws::Http::URI("https://portal.sso.us-east-1.amazonaws.com/federation/credentials"), 
        Aws::Http::HttpMethod::HTTP_GET,
        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    auto goodResponse = Aws::MakeShared<StandardHttpResponse>(TEST_LOG_TAG, requestTmp);
    goodResponse->SetResponseCode(HttpResponseCode::OK);
    goodResponse->GetResponseBody() << R"({
        "roleCredentials": {
            "accessKeyId": "test-sso-access-key",
            "secretAccessKey": "test-sso-secret-key",
            "sessionToken": "test-sso-session-token",
            "expiration": 9999999999000
        }
    })";
    mockHttpClient->AddResponseToReturn(goodResponse);

    // Run test
    auto ssoProvider = Aws::MakeShared<SSOCredentialsProvider>(TEST_LOG_TAG);
    RunTestWithCredentialsProvider(std::move(ssoProvider), "s");
}