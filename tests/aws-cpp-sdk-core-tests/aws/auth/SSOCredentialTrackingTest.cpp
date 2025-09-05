
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

class SSOCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    void SetUp() override
    {
        AwsCppSdkGTestSuite::SetUp();

        // Create test directories
        Aws::String uuid = Aws::Utils::UUID::RandomUUID();
        m_testDir = "/tmp/aws_sso_test_" + uuid;
        m_configPath = m_testDir + "/config";
        m_ssoDir = m_testDir + "/sso/cache";

        Aws::FileSystem::CreateDirectoryIfNotExists(m_testDir.c_str());
        Aws::FileSystem::CreateDirectoryIfNotExists((m_testDir + "/sso").c_str());
        Aws::FileSystem::CreateDirectoryIfNotExists(m_ssoDir.c_str());

        // Save original AWS_CONFIG_FILE value
        m_originalConfigFile = Aws::Environment::GetEnv("AWS_CONFIG_FILE");

        // Set AWS_CONFIG_FILE to our test config
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configPath.c_str(), 1);

        // Set up mock HTTP client
        mockHttpClient = Aws::MakeShared<MockHttpClient>("SSOTest");
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>("SSOTest");
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
    }

    void TearDown() override
    {
        // Restore original AWS_CONFIG_FILE
        if (!m_originalConfigFile.empty())
        {
            Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_originalConfigFile.c_str(), 1);
        }
        else
        {
            Aws::Environment::UnSetEnv("AWS_CONFIG_FILE");
        }

        // Reset HTTP clients
        if (mockHttpClient) {
            mockHttpClient->Reset();
            mockHttpClient = nullptr;
        }
        if (mockHttpClientFactory) {
            mockHttpClientFactory = nullptr;
        }
        
        // Cleanup test files
        Aws::FileSystem::RemoveFileIfExists(m_configPath.c_str());

        //AwsCppSdkGTestSuite::TearDown();
    }

    void CreateTestConfig(const Aws::String& startUrl = "https://test.awsapps.com/start")
    {
        std::ofstream configFile(m_configPath.c_str());
        configFile << "[default]\n"
                  << "sso_account_id = 123456789012\n"
                  << "sso_region = us-east-1\n"
                  << "sso_role_name = TestRole\n"
                  << "sso_start_url = " << startUrl << std::endl;
        configFile.close();
    }

    void CreateSSOTokenFile(const Aws::String& startUrl)
    {
        // Use a simple hash for the test (SHA1 of the start URL)
        Aws::String hashedStartUrl = "d033e22ae348aeb5660fc2140aec35850c4da997"; // Simple test hash
        Aws::String tokenPath = m_ssoDir + "/" + hashedStartUrl + ".json";

        // Create token file with future expiration
        std::ofstream tokenFile(tokenPath.c_str());
        auto futureTime = Aws::Utils::DateTime::Now() + std::chrono::hours(1);

        tokenFile << "{\n"
                 << "  \"accessToken\": \"test-token\",\n"
                 << "  \"expiresAt\": \"" << futureTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601) << "\",\n"
                 << "  \"region\": \"us-east-1\",\n"
                 << "  \"startUrl\": \"" << startUrl << "\"\n"
                 << "}" << std::endl;
        tokenFile.close();
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

    Aws::String m_testDir;
    Aws::String m_configPath;
    Aws::String m_ssoDir;
    Aws::String m_originalConfigFile;
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(SSOCredentialsProviderTest, TestSSOCredentialsTracking)
{
    const Aws::String startUrl = "https://test.awsapps.com/start";

    // Create test configuration
    CreateTestConfig(startUrl);
    CreateSSOTokenFile(startUrl);

    // Mock SSO credentials API response
    std::shared_ptr<Aws::Http::HttpRequest> ssoRequest = CreateHttpRequest(
        Aws::Http::URI("https://portal.sso.us-east-1.amazonaws.com/federation/credentials"),
        Aws::Http::HttpMethod::HTTP_GET,
        Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    auto ssoResponse = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>("SSOTest", ssoRequest);
    ssoResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    ssoResponse->GetResponseBody() << R"({
        "roleCredentials": {
            "accessKeyId": "AKIAIOSFODNN7EXAMPLE",
            "secretAccessKey": "wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY",
            "sessionToken": "AQoDYXdzEJr...",
            "expiration": )" << (Aws::Utils::DateTime::Now().Millis() + 3600000) << R"(
        }
    })";
    mockHttpClient->AddResponseToReturn(ssoResponse);

    // Create SSO credentials provider as shared_ptr
    auto ssoProvider = Aws::MakeShared<SSOCredentialsProvider>(TEST_LOG_TAG);

    // Get credentials using regular method
    auto credentials = ssoProvider->GetAWSCredentials();

    // Verify credentials were retrieved
    EXPECT_FALSE(credentials.IsEmpty());
    EXPECT_EQ("AKIAIOSFODNN7EXAMPLE", credentials.GetAWSAccessKeyId());
    EXPECT_EQ("wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY", credentials.GetAWSSecretKey());
    
    // Test credential tracking
    RunTestWithCredentialsProvider(ssoProvider, "s");
}