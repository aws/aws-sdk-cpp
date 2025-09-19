// SSOCredentialTrackingTest.cpp

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/auth/SSOCredentialsProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/config/AWSProfileConfigLoader.h>

#include <fstream>
#include <thread>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::FileSystem;

namespace {
const char* TEST_LOG_TAG = "CredentialTrackingTest";
}

Aws::String computeHashedStartUrl(const Aws::String& startUrl) {
  auto sha1 = HashingUtils::CalculateSHA1(startUrl);
  return HashingUtils::HexEncode(sha1); // lower-case hex the same as provider
}

class CredentialTestingClient : public AWSClient
{
public:
  CredentialTestingClient() : AWSClient(ClientConfiguration(), Aws::MakeShared<AWSAuthV4Signer>(TEST_LOG_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(TEST_LOG_TAG),
      "service", Aws::Region::US_EAST_1), Aws::MakeShared<MockAWSErrorMarshaller>(TEST_LOG_TAG)) {}
  CredentialTestingClient(const Aws::Client::ClientConfiguration& configuration, const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer) :
      AWSClient(configuration, signer, Aws::MakeShared<MockAWSErrorMarshaller>(TEST_LOG_TAG)) {}

  Aws::Client::HttpResponseOutcome PublicAttemptExhaustively(
        const Aws::Http::URI& uri,
        const Aws::AmazonWebServiceRequest& request,
        Http::HttpMethod method,
        const char* signerName) {
    return AttemptExhaustively(uri.GetURIString(), request, method, signerName);
  }

  Aws::Client::AWSError<Aws::Client::CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>&) const override
  {
    Aws::Client::AWSError<Aws::Client::CoreErrors> error;
    return error;
  }
};

class SSOCredentialsProviderTrackingTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
  void SetUp() override {
    AwsCppSdkGTestSuite::SetUp();

    // Build paths the same way the SDK does
    const Aws::String profileDir = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
    const Aws::String ssoDir     = profileDir + PATH_DELIM + "sso";
    const Aws::String cacheDir   = ssoDir    + PATH_DELIM + "cache";

    CreateDirectoryIfNotExists(profileDir.c_str());
    CreateDirectoryIfNotExists(ssoDir.c_str());
    CreateDirectoryIfNotExists(cacheDir.c_str());

    // Point AWS_CONFIG_FILE at a unique temp path the provider will read
    StringStream ss;
    ss << Aws::Auth::GetConfigProfileFilename() << "_blah" << std::this_thread::get_id();
    m_configPath = ss.str();
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configPath.c_str(), 1);

    m_profileDir = profileDir;
    m_ssoCacheDir = cacheDir;

    // Mock HTTP client
    mockHttpClient = Aws::MakeShared<MockHttpClient>(TEST_LOG_TAG);
    mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(TEST_LOG_TAG);
    mockHttpClientFactory->SetClient(mockHttpClient);
    SetHttpClientFactory(mockHttpClientFactory);
  }

  void TearDown() override {
    if (mockHttpClient) { mockHttpClient->Reset(); mockHttpClient = nullptr; }
    mockHttpClientFactory = nullptr;
    Aws::FileSystem::RemoveFileIfExists(m_configPath.c_str());
    AwsCppSdkGTestSuite::TearDown();
  }

  void CreateTestConfig(const Aws::String& startUrl) {
    Aws::OFStream cfg(m_configPath.c_str());
    cfg << "[default]\n"
           "sso_session = my-sso\n"
           "sso_account_id = 123456789012\n"
           "sso_role_name = TestRole\n"
           "\n"
           "[sso-session my-sso]\n"
           "sso_region = us-east-1\n"
           "sso_start_url = " << startUrl << "\n";
    cfg.close();

    Aws::IFStream check(m_configPath.c_str());
    ASSERT_TRUE(check.good()) << "Config not created at: " << m_configPath;
    check.close();

    Aws::Config::ReloadCachedConfigFile();
  }

  void CreateSSOTokenFile(const Aws::String& startUrl) {
    const Aws::String hash = computeHashedStartUrl(startUrl);
    const Aws::String tokenPath = m_ssoCacheDir + PATH_DELIM + hash + ".json";

    Aws::OFStream tokenFile(tokenPath.c_str());
    ASSERT_TRUE(tokenFile.good()) << "Failed to open " << tokenPath;

    const auto futureTime = DateTime::Now() + std::chrono::hours(1);
    tokenFile << "{\n"
                 "  \"accessToken\": \"test-token\",\n"
                 "  \"expiresAt\": \"" << futureTime.ToGmtString(DateFormat::ISO_8601) << "\",\n"
                 "  \"region\": \"us-east-1\",\n"
                 "  \"startUrl\": \"" << startUrl << "\"\n"
                 "}\n";
    tokenFile.close();

    Aws::IFStream check(tokenPath.c_str());
    ASSERT_TRUE(check.good()) << "Token not created at: " << tokenPath;
    check.close();
  }

  void CreateSSOSessionTokenFile(const Aws::String& sessionName) {
    const Aws::String hash = Aws::Utils::HashingUtils::HexEncode(
        Aws::Utils::HashingUtils::CalculateSHA1(sessionName));
    const Aws::String tokenPath = m_ssoCacheDir + PATH_DELIM + hash + ".json";

    Aws::OFStream tokenFile(tokenPath.c_str());
    ASSERT_TRUE(tokenFile.good()) << "Failed to open " << tokenPath;

    const auto futureTime = Aws::Utils::DateTime::Now().Millis() + 3600000;
    const auto futureDateTime = Aws::Utils::DateTime(futureTime);
    tokenFile << "{\n"
                 "  \"accessToken\": \"test-token\",\n"
                 "  \"expiresAt\": \"" << futureDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601) << "\"\n"
                 // (region/startUrl fields are optional on this path)
                 "}\n";
    tokenFile.close();

    Aws::IFStream check(tokenPath.c_str());
    ASSERT_TRUE(check.good()) << "Token not created at: " << tokenPath;
    check.close();
  }

  void RunTestWithCredentialsProvider(const std::shared_ptr<AWSCredentialsProvider>& provider, const Aws::String& marker) {
    // 200 OK dummy response for the signed call
    auto req = CreateHttpRequest(URI("https://test-service.us-east-1.amazonaws.com/"), HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto ok  = Aws::MakeShared<StandardHttpResponse>(TEST_LOG_TAG, req);
    ok->SetResponseCode(HttpResponseCode::OK);
    ok->GetResponseBody() << "{}";
    mockHttpClient->AddResponseToReturn(ok);

    ClientConfigurationInitValues initVals; initVals.shouldDisableIMDS = true;
    ClientConfiguration cfg(initVals);
    cfg.region = Aws::Region::US_EAST_1;

    auto signer = Aws::MakeShared<Aws::Client::AWSAuthV4Signer>(TEST_LOG_TAG, provider, "test-service", cfg.region);
    CredentialTestingClient client(cfg, signer);
    AmazonWebServiceRequestMock mockReq;
    
    // Use public AWS client method to make a request
    URI uri("https://test-service.us-east-1.amazonaws.com/");
    auto outcome = client.PublicAttemptExhaustively(uri, mockReq, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
    ASSERT_TRUE(outcome.IsSuccess());

    auto last = mockHttpClient->GetMostRecentHttpRequest();
    ASSERT_TRUE(last.HasHeader(USER_AGENT_HEADER));
    const auto userAgent = last.GetHeaderValue(USER_AGENT_HEADER);
    ASSERT_FALSE(userAgent.empty());

    const auto userAgentParsed = StringUtils::Split(userAgent, ' ');
    int mCount = 0;
    for (const auto& p : userAgentParsed) if (p.find("m/") != Aws::String::npos) ++mCount;
    EXPECT_EQ(1, mCount); // only one m/ section

    auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
                           [&marker](const Aws::String& v){ return v.find("m/") != Aws::String::npos && v.find(marker) != Aws::String::npos; });
    EXPECT_TRUE(businessMetrics != userAgentParsed.end());
  }

  Aws::String m_profileDir;
  Aws::String m_ssoCacheDir;
  Aws::String m_configPath;

  std::shared_ptr<MockHttpClient>        mockHttpClient;
  std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(SSOCredentialsProviderTrackingTest, TestSSOCredentialsTracking){
  const Aws::String startUrl = "https://test.awsapps.com/start";

  CreateTestConfig(startUrl);
  CreateSSOSessionTokenFile("my-sso");

  // Prepare mock SSO GetRoleCredentials response
  auto ssoReq = CreateHttpRequest(
      URI("https://portal.sso.us-east-1.amazonaws.com/federation/credentials"),
      HttpMethod::HTTP_GET,
      Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

  auto ssoResp = Aws::MakeShared<StandardHttpResponse>(TEST_LOG_TAG, ssoReq);
  ssoResp->SetResponseCode(HttpResponseCode::OK);
  ssoResp->GetResponseBody()
      << R"({"roleCredentials":{
                "accessKeyId":"AKIAIOSFODNN7EXAMPLE",
                "secretAccessKey":"wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY",
                "sessionToken":"AQoDYXdzEJr...",
                "expiration":)"
      << (DateTime::Now().Millis() + 3600000) << "}}";
  mockHttpClient->AddResponseToReturn(ssoResp);

  // Provider should read config + token from the real cache dir and call mock
  auto provider = Aws::MakeShared<SSOCredentialsProvider>(TEST_LOG_TAG);
  auto creds = provider->GetAWSCredentials();

  ASSERT_FALSE(creds.IsEmpty());
  EXPECT_EQ("AKIAIOSFODNN7EXAMPLE", creds.GetAWSAccessKeyId());
  EXPECT_EQ("wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY", creds.GetAWSSecretKey());

  // Fire a signed request and assert the business metric appears once
  RunTestWithCredentialsProvider(provider, "s");
}

TEST_F(SSOCredentialsProviderTrackingTest, TestSSOLegacyCredentialsTracking){
  const Aws::String startUrl = "https://test.awsapps.com/start";

  // Create legacy SSO config (without sso_session)
  Aws::OFStream cfg(m_configPath.c_str());
  cfg << "[default]\n"
         "sso_account_id = 123456789012\n"
         "sso_region = us-east-1\n"
         "sso_role_name = TestRole\n"
         "sso_start_url = " << startUrl << "\n";
  cfg.close();
  Aws::Config::ReloadCachedConfigFile();

  CreateSSOTokenFile(startUrl);

  // Prepare mock SSO GetRoleCredentials response
  auto ssoReq = CreateHttpRequest(
      URI("https://portal.sso.us-east-1.amazonaws.com/federation/credentials"),
      HttpMethod::HTTP_GET,
      Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

  auto ssoResp = Aws::MakeShared<StandardHttpResponse>(TEST_LOG_TAG, ssoReq);
  ssoResp->SetResponseCode(HttpResponseCode::OK);
  ssoResp->GetResponseBody()
      << R"({"roleCredentials":{
                "accessKeyId":"AKIAIOSFODNN7EXAMPLE",
                "secretAccessKey":"wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY",
                "sessionToken":"AQoDYXdzEJr...",
                "expiration":)" << (DateTime::Now().Millis() + 3600000) << "}}";
  mockHttpClient->AddResponseToReturn(ssoResp);

  auto provider = Aws::MakeShared<SSOCredentialsProvider>(TEST_LOG_TAG);
  auto creds = provider->GetAWSCredentials();

  ASSERT_FALSE(creds.IsEmpty());
  EXPECT_EQ("AKIAIOSFODNN7EXAMPLE", creds.GetAWSAccessKeyId());
  EXPECT_EQ("wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY", creds.GetAWSSecretKey());

  // Fire a signed request and assert the legacy SSO business metric appears
  RunTestWithCredentialsProvider(provider, "u");
}