/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/auth/GeneralHTTPCredentialsProvider.h>
#include <aws/core/auth/SSOCredentialsProvider.h>
#include <aws/core/auth/STSCredentialsProvider.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBClientConfiguration.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/utils/UserAgentUtils.h>
#include <gtest/gtest.h>

#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::DynamoDB;
using namespace Aws::Monitoring;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

namespace {
const char* LOG_TAG = "DynamoDBUnitTest";
const int MAX_RETRIES = 2;
const char* CONFIGURATION_FILE_ENV_VAR = "AWS_CONFIG_FILE";
const char* CREDS_FILE_ENV_VAR = "AWS_SHARED_CREDENTIALS_FILE";
}  // namespace

class  MonitoringContext
{
public:
  void Reset()
  {
    started = 0;
    succeeded = 0;
    failed = 0;
    retryCount = 0;
    finished = 0;
  }

  int started{0};
  int succeeded{0};
  int failed{0};
  int retryCount{0};
  int finished{0};
};

class DynamoUnitTestMonitorMock : public MonitoringInterface
{
public:
  ~DynamoUnitTestMonitorMock() override = default;

  explicit DynamoUnitTestMonitorMock(const std::shared_ptr<MonitoringContext>& monitoring_context)
    : monitoring_context_(monitoring_context)
  {
  }

  void* OnRequestStarted(const String& serviceName,
                         const String& requestName,
                         const std::shared_ptr<const HttpRequest>& request) const override
  {
    AWS_UNREFERENCED_PARAM(serviceName);
    AWS_UNREFERENCED_PARAM(requestName);
    AWS_UNREFERENCED_PARAM(request);
    monitoring_context_->started++;
    return &monitoring_context_;
  }

  void OnRequestSucceeded(const String& serviceName,
    const String& requestName,
    const std::shared_ptr<const HttpRequest>& request,
    const HttpResponseOutcome& outcome,
    const CoreMetricsCollection& metricsFromCore,
    void* context) const override
  {
    AWS_UNREFERENCED_PARAM(serviceName);
    AWS_UNREFERENCED_PARAM(requestName);
    AWS_UNREFERENCED_PARAM(request);
    AWS_UNREFERENCED_PARAM(outcome);
    AWS_UNREFERENCED_PARAM(metricsFromCore);
    AWS_UNREFERENCED_PARAM(context);
    monitoring_context_->succeeded++;
  }

  void OnRequestFailed(const String& serviceName,
    const String& requestName,
    const std::shared_ptr<const HttpRequest>& request,
    const HttpResponseOutcome& outcome,
    const CoreMetricsCollection& metricsFromCore,
    void* context) const override
  {
    AWS_UNREFERENCED_PARAM(serviceName);
    AWS_UNREFERENCED_PARAM(requestName);
    AWS_UNREFERENCED_PARAM(request);
    AWS_UNREFERENCED_PARAM(outcome);
    AWS_UNREFERENCED_PARAM(metricsFromCore);
    AWS_UNREFERENCED_PARAM(context);
    monitoring_context_->failed++;
  }

  void OnRequestRetry(const String& serviceName,
    const String& requestName,
    const std::shared_ptr<const HttpRequest>& request,
    void* context) const override
  {
    AWS_UNREFERENCED_PARAM(serviceName);
    AWS_UNREFERENCED_PARAM(requestName);
    AWS_UNREFERENCED_PARAM(request);
    AWS_UNREFERENCED_PARAM(context);
    monitoring_context_->retryCount++;
  }

  void OnFinish(const String& serviceName,
    const String& requestName,
    const std::shared_ptr<const HttpRequest>& request,
    void* context) const override
  {
    AWS_UNREFERENCED_PARAM(serviceName);
    AWS_UNREFERENCED_PARAM(requestName);
    AWS_UNREFERENCED_PARAM(request);
    AWS_UNREFERENCED_PARAM(context);
    monitoring_context_->finished++;
  }

private:
  mutable std::shared_ptr<MonitoringContext> monitoring_context_{};
};

class DynamoUnitTestMonitorFactoryMock: public  MonitoringFactory
{
public:
  explicit DynamoUnitTestMonitorFactoryMock(const std::shared_ptr<MonitoringContext>& monitoring_context)
    : monitoring_context_(monitoring_context)
  {
  }

  ~DynamoUnitTestMonitorFactoryMock() override = default;

  UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override
  {
    return Aws::MakeUnique<DynamoUnitTestMonitorMock>(LOG_TAG, monitoring_context_);
  };
private:
  mutable std::shared_ptr<MonitoringContext> monitoring_context_{};
};

class DynamoDBUnitTest : public testing::Test {
protected:

  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    test_memory_system.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = test_memory_system.get();
#endif
    monitoring_context_ = Aws::MakeShared<MonitoringContext>(LOG_TAG);
    options_.monitoringOptions.customizedMonitoringFactory_create_fn = {
      []() -> UniquePtr<MonitoringFactory> {
        return Aws::MakeUnique<DynamoUnitTestMonitorFactoryMock>(LOG_TAG, monitoring_context_);
      }
    };
    InitAPI(options_);
    mock_client_factory_ = Aws::MakeShared<MockHttpClientFactory>(LOG_TAG);
    mock_http_client_ = Aws::MakeShared<MockHttpClient>(LOG_TAG);
    mock_client_factory_->SetClient(mock_http_client_);
    SetHttpClientFactory(mock_client_factory_);
    AWSCredentials credentials{"mock", "credentials"};
    const auto epProvider = Aws::MakeShared<DynamoDBEndpointProvider>(LOG_TAG);
    DynamoDBClientConfiguration configuration;
    configuration.retryStrategy = Aws::MakeShared<StandardRetryStrategy>(LOG_TAG, MAX_RETRIES);
    configuration.region = "us-east-1";
    client_ = Aws::MakeShared<DynamoDBClient>("ALLOCATION_TAG", credentials, epProvider, configuration);
  }

  void SetUp() override
  {
    monitoring_context_->Reset();

    auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
    Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    Aws::StringStream ssCachedTokenDirectory;
    ssCachedTokenDirectory << profileDirectory << FileSystem::PATH_DELIM << "sso";
    Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str());
    ssCachedTokenDirectory << FileSystem::PATH_DELIM << "cache";
    Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str());

    // setting up token file for tests
    Aws::StringStream ssToken;
    ssToken << ssCachedTokenDirectory.str();
    auto ssoTokenDirectory = ssToken.str();
    // SHA1 of "https://d-92671207e4.awsapps.com/start" -> 13f9d35043871d073ab260e020f0ffde092cb14b
    ssToken << FileSystem::PATH_DELIM << "13f9d35043871d073ab260e020f0ffde092cb14b.json";
    m_ssoTokenFileName = ssToken.str();
  };

  void TearDown() override
  {
    Aws::FileSystem::RemoveFileIfExists(m_ssoTokenFileName.c_str());
  }

  static void TearDownTestSuite() {
    mock_client_factory_.reset();
    mock_http_client_.reset();
    client_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(test_memory_system->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(test_memory_system->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(test_memory_system->IsClean());
    if (test_memory_system->GetCurrentOutstandingAllocations() != 0ULL)
      FAIL();
    if (test_memory_system->GetCurrentBytesAllocated() != 0ULL)
      FAIL();
    if (!test_memory_system->IsClean())
      FAIL();
    test_memory_system.reset();
#endif
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mock_http_client_;
  static std::shared_ptr<MockHttpClientFactory> mock_client_factory_;
  static std::shared_ptr<DynamoDB::DynamoDBClient> client_;
  static std::shared_ptr<MonitoringContext> monitoring_context_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> test_memory_system;
#endif
  Aws::String m_ssoTokenFileName;
  Environment::EnvironmentRAII m_unsetEnvVare{{
      {"AWS_SHARED_CREDENTIALS_FILE", ""},
      {"AWS_CONFIG_FILE", ""},
      {"AWS_DEFAULT_PROFILE", ""},
      {"AWS_PROFILE", ""},
      {"AWS_ACCESS_KEY_ID", ""},
      {"AWS_SECRET_ACCESS_KEY", ""},
      {"AWS_EC2_METADATA_DISABLED", ""},
      {"AWS_ACCOUNT_ID", ""},
      {"AWS_ACCESS_KEY_ID", ""},
      {"AWS_SECRET_ACCESS_KEY", ""},
      {"AWS_SESSION_TOKEN", ""},
      {"AWS_ROLE_SESSION_NAME", ""},
      {"AWS_PROFILE", ""},
      {"AWS_CONTAINER_CREDENTIALS_RELATIVE_URI", ""},
      {"AWS_DEFAULT_REGION", ""},
      {"AWS_REGION", ""},
      {"profile", ""},
    }};
};

SDKOptions DynamoDBUnitTest::options_;
std::shared_ptr<MockHttpClient> DynamoDBUnitTest::mock_http_client_ = nullptr;
std::shared_ptr<MockHttpClientFactory> DynamoDBUnitTest::mock_client_factory_ = nullptr;
std::shared_ptr<DynamoDBClient> DynamoDBUnitTest::client_ = nullptr;
std::shared_ptr<MonitoringContext> DynamoDBUnitTest::monitoring_context_= nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  std::unique_ptr<ExactTestMemorySystem> DynamoDBUnitTest::test_memory_system = nullptr;
#endif

static Aws::String WrapEchoStringWithSingleQuoteForUnixShell(Aws::String str)
{
#ifndef _WIN32
  str.insert(0, 1, '\'');
  str.append(1, '\'');
#endif
  return str;
}

TEST_F(DynamoDBUnitTest, RetryShouldWork)
{
  //Mock bad request
  auto failed_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(LOG_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto failed_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  failed_response->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);

  //Mock good request
  auto success_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    auto list_tables_string =  R"({"LastEvaluatedTableName": "Thread","TableNames": ["Forum","Reply","Thread"]}))";
    return Aws::New<StringStream>(LOG_TAG, list_tables_string, std::ios_base::in | std::ios_base::binary);
  });
  auto success_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  success_response->SetResponseCode(HttpResponseCode::OK);

  //succeed on second attempt
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(success_response);

  const auto list_tables_outcome = client_->ListTables();
  EXPECT_TRUE(list_tables_outcome.IsSuccess());
  EXPECT_EQ(2, monitoring_context_->started);
  EXPECT_EQ(1, monitoring_context_->finished);
  EXPECT_EQ(1, monitoring_context_->succeeded);
  EXPECT_EQ(1, monitoring_context_->failed);
  EXPECT_EQ(1, monitoring_context_->retryCount);
}

TEST_F(DynamoDBUnitTest, DefaultRetryStrategyShouldFailWhenRetriesFail)
{
  //Mock bad request
  auto failed_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(LOG_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto failed_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  failed_response->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);

  //Mock good request
  auto success_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    auto list_tables_string =  R"({"LastEvaluatedTableName": "Thread","TableNames": ["Forum","Reply","Thread"]}))";
    return Aws::New<StringStream>(LOG_TAG, list_tables_string, std::ios_base::in | std::ios_base::binary);
  });
  auto success_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  success_response->SetResponseCode(HttpResponseCode::OK);

  // We will only retry twice
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(success_response);

  const auto list_tables_outcome = client_->ListTables();
  EXPECT_FALSE(list_tables_outcome.IsSuccess());
  EXPECT_EQ(2, monitoring_context_->started);
  EXPECT_EQ(1, monitoring_context_->finished);
  EXPECT_EQ(2, monitoring_context_->failed);
  EXPECT_EQ(0, monitoring_context_->succeeded);
  EXPECT_EQ(1, monitoring_context_->retryCount);
}

TEST_F(DynamoDBUnitTest, ListTablesShouldHaveCorrectUserAgent)
{
  // mock response
  auto success_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "grantrad.com/honeybeeinn", HttpMethod::HTTP_GET);
  success_stream_->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Thread","TableNames": ["Forum","Reply","Thread"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, success_stream_);
  successResponse->SetResponseCode(HttpResponseCode::OK);
  mock_http_client_->AddResponseToReturn(successResponse);

  const auto listTablesOutcome = client_->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());

  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_TRUE(requestSeen.HasUserAgent());
  const auto& userAgent = requestSeen.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());
  const auto userAgentParsed = Utils::StringUtils::Split(userAgent, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto apiMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("api/DynamoDB") != Aws::String::npos; });
  EXPECT_TRUE(apiMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < apiMetadata);
  EXPECT_TRUE(apiMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata <  archMetadata);
  EXPECT_TRUE(archMetadata < businessMetrics);
}

TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointSetOnConfiguration)
{
  // create client with account id configuration
  AWSCredentials credentials{"mock", "credentials"};
  const auto epProvider = Aws::MakeShared<DynamoDBEndpointProvider>(LOG_TAG);
  DynamoDBClientConfiguration configuration;
  configuration.accountId = "123456789012";
  configuration.region = "us-east-1";
  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, credentials, epProvider, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "the_grand_budapest.hotel/zero", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Hotels","TableNames": ["Hotels"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://123456789012.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
}

TEST_F(DynamoDBUnitTest, ShouldUseStandardEndpointIfAccountIdMissingFromCredentialsFile)
{
  // create shared credentials file with account id
  Utils::TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());
  configFile << "[default]" << std::endl;
  configFile << "aws_access_key_id = ballad" << std::endl;
  configFile << "aws_secret_access_key = of-fallen" << std::endl;
  configFile << "aws_session_token = angels" << std::endl;
  configFile.close();
  Environment::EnvironmentRAII envVars{{{CREDS_FILE_ENV_VAR, configFile.GetFileName().c_str()}}};
  Aws::Config::ReloadCachedCredentialsFile();

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";
  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://dynamodb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") == features.end());
}


TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointFromCredentialsFile)
{
  // create shared credentials file with account id
  Utils::TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());
  configFile << "[default]" << std::endl;
  configFile << "aws_access_key_id = ballad" << std::endl;
  configFile << "aws_secret_access_key = of-fallen" << std::endl;
  configFile << "aws_session_token = angels" << std::endl;
  configFile << "aws_account_id = spike-spiegel" << std::endl;;
  configFile.close();
  Environment::EnvironmentRAII envVars{{{CREDS_FILE_ENV_VAR, configFile.GetFileName().c_str()}}};
  Aws::Config::ReloadCachedCredentialsFile();

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";

  auto credsProvider = Aws::MakeShared<ProfileConfigFileAWSCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://spike-spiegel.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointFromEnviornmentCredentialsProvider)
{
  // create enviornment variables with account id
  const Environment::EnvironmentRAII environmentVariables{
    {
      {"AWS_ACCESS_KEY_ID", "stray"},
      {"AWS_SECRET_ACCESS_KEY", "dog"},
      {"AWS_SESSION_TOKEN", "strut"},
      {"AWS_ACCOUNT_ID", "ein"},
    }};

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";

  auto credsProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://ein.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointFromProcessCredentialsProvider)
{
  // create configruation file with process credentials provider with account id
  Utils::TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());
  configFile << "[default]" << std::endl;
  configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"honky\", \"SecretAccessKey\": \"tonk\", \"SecretAccessKey\": \"woman\", \"AccountId\": \"faye\"}") << std::endl;
  configFile.close();
  Environment::EnvironmentRAII envVars{{{CONFIGURATION_FILE_ENV_VAR, configFile.GetFileName().c_str()}}};
  Aws::Config::ReloadCachedConfigFile();

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";

  auto credsProvider = Aws::MakeShared<ProcessCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://faye.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointFromSSOCredentialsProvider)
{
  Aws::OFStream tokenFile(m_ssoTokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);;
  tokenFile << R"({
    "accessToken": "base64string",
    "expiresAt": ")";
  tokenFile << Utils::DateTime::Now().GetYear() + 1;
  tokenFile << R"(-01-02T00:00:00Z",
    "region": "us-west-2",
    "startUrl": "https://d-92671207e4.awsapps.com/start"
})";
  tokenFile.close();

  Utils::TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  configFile << "[default]" << std::endl;
  configFile << "sso_account_id = 012345678901" << std::endl;
  configFile << "sso_region = us-east-1" << std::endl;
  configFile << "sso_role_name = SampleRole" << std::endl;
  configFile << "sso_start_url = https://d-92671207e4.awsapps.com/start" << std::endl;
  configFile << std::endl;
  configFile.close();
  Environment::EnvironmentRAII envVars{{{CONFIGURATION_FILE_ENV_VAR, configFile.GetFileName().c_str()}}};
  Aws::Config::ReloadCachedConfigFile();

  ClientConfigurationInitValues initValues{};
  initValues.shouldDisableIMDS = true;
  DynamoDBClientConfiguration configuration{initValues};
  configuration.region = "us-east-1";

  auto credsProvider = Aws::MakeShared<SSOCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  std::shared_ptr<HttpRequest> requestTmp = CreateHttpRequest(URI{}, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  Aws::String goodResult = R"({
   "roleCredentials": {
      "accessKeyId": "Ganymede",
      "expiration": 2303614800000,
      "secretAccessKey": "Elegy",
      "sessionToken": "session_10",
      "accountId": "jet"
   }
}
)";

  std::shared_ptr<StandardHttpResponse> goodResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, requestTmp);
  goodResponse->SetResponseCode(HttpResponseCode::OK);
  goodResponse->GetResponseBody() << goodResult;
  mock_http_client_->AddResponseToReturn(goodResponse);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://jet.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldUseAccountIDEndpointFromContainerCredentialsProvider)
{
  ClientConfigurationInitValues initValues{};
  initValues.shouldDisableIMDS = true;
  DynamoDBClientConfiguration configuration{initValues};
  configuration.region = "us-east-1";


  auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(LOG_TAG, "/see/you/later");
  const char* validCredentials = R"({"AccessKeyId": "Jupiter", "SecretAccessKey": "Jazz", "Token": "Gren", "AccountId": "Vicious"})";
  mockClient->SetMockedCredentialsValue(validCredentials);

  auto credsProvider = Aws::MakeShared<GeneralHTTPCredentialsProvider>(LOG_TAG, std::move(mockClient));

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://Vicious.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldNotUseAccountIDEndpointWhenDisabled)
{
  // create enviornment variables with account id
  const Environment::EnvironmentRAII environmentVariables{
        {
          {"AWS_ACCESS_KEY_ID", "the"},
          {"AWS_SECRET_ACCESS_KEY", "real"},
          {"AWS_SESSION_TOKEN", "folk"},
          {"AWS_ACCOUNT_ID", "blues"},
        }};

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountIdEndpointMode = "disabled";

  auto credsProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://dynamodb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "Q") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}

TEST_F(DynamoDBUnitTest, ShouldFailWhenNoAccountIDAndRequired)
{
  // create enviornment variables with account id
  const Environment::EnvironmentRAII environmentVariables{
          {
            {"AWS_ACCESS_KEY_ID", "the"},
            {"AWS_SECRET_ACCESS_KEY", "real"},
            {"AWS_SESSION_TOKEN", "folk"},
          }};

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountIdEndpointMode = "required";

  auto credsProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(!listTablesOutcome.IsSuccess());
  EXPECT_EQ(listTablesOutcome.GetError().GetMessage(), "AccountIdEndpointMode is required but no AccountID was provided or able to be loaded");
}

TEST_F(DynamoDBUnitTest, ShouldWorkWhenAccountIDPresentAndRequired)
{
  // create enviornment variables with account id
  const Environment::EnvironmentRAII environmentVariables{
            {
              {"AWS_ACCESS_KEY_ID", "the"},
              {"AWS_SECRET_ACCESS_KEY", "real"},
              {"AWS_SESSION_TOKEN", "folk"},
              {"AWS_ACCOUNT_ID", "blues"},
            }};

  DynamoDBClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountIdEndpointMode = "required";

  auto credsProvider = Aws::MakeShared<EnvironmentAWSCredentialsProvider>(LOG_TAG);

  const auto accountIdClient = Aws::MakeShared<DynamoDBClient>(LOG_TAG, std::move(credsProvider), nullptr, configuration);

  // mock response
  auto successStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "cowboy.bebop/planets", HttpMethod::HTTP_GET);
  successStream->SetResponseStreamFactory([]() -> IOStream* {
    auto listTablesString =  R"({"LastEvaluatedTableName": "Planets","TableNames": ["Planets"]}))";
    return Aws::New<StringStream>(LOG_TAG, listTablesString, std::ios_base::in | std::ios_base::binary);
  });
  auto successResponse = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, successStream);
  successResponse->SetResponseCode(HttpResponseCode::OK);

  mock_http_client_->AddResponseToReturn(successResponse);
  const auto listTablesOutcome = accountIdClient->ListTables();
  EXPECT_TRUE(listTablesOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://blues.ddb.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  // AccountId is disabled
  EXPECT_TRUE(std::find(features.begin(), features.end(), "R") != features.end());
  // Identity resolved a accountId
  EXPECT_TRUE(std::find(features.begin(), features.end(), "T") != features.end());
}