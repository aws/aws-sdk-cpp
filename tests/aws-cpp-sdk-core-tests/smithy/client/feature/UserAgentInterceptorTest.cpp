/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <smithy/client/features/UserAgentInterceptor.h>

#include <utility>

using namespace smithy::interceptor;
using namespace smithy::client;
using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Testing;
using namespace Aws::Utils;

namespace {
const char* LOG_TAG = "UserAgentInterceptorTest";
const char* CONFIG_FILE_ENV_VAR = "AWS_CONFIG_FILE";
const char* EXECUTION_ENV_VAR = "AWS_EXECUTION_ENV";
const char* APP_ID_ENV_VAR = "AWS_SDK_UA_APP_ID";
}  // namespace

class UserAgentInterceptorTest : public AwsCppSdkGTestSuite {
 public:
  void SetUp() override {
    m_envVars.emplace_back(CONFIG_FILE_ENV_VAR, Environment::GetEnv(CONFIG_FILE_ENV_VAR));
    m_envVars.emplace_back(EXECUTION_ENV_VAR, Environment::GetEnv(EXECUTION_ENV_VAR));
    m_envVars.emplace_back(APP_ID_ENV_VAR, Environment::GetEnv(APP_ID_ENV_VAR));
    Environment::UnSetEnv(CONFIG_FILE_ENV_VAR);
    Environment::UnSetEnv(EXECUTION_ENV_VAR);
    Environment::UnSetEnv(APP_ID_ENV_VAR);
  }

  void TearDown() override {
    for (auto& var : m_envVars) {
      Environment::SetEnv(var.first.c_str(), var.second.c_str(), true);
    }
  }

private:
  Aws::Vector<std::pair<Aws::String, Aws::String>> m_envVars{};
};

TEST_F(UserAgentInterceptorTest, VerifyUserAgentFormat) {
  // Create Interceptor
  Environment::SetEnv(EXECUTION_ENV_VAR, "lambda", true);
  Environment::SetEnv(APP_ID_ENV_VAR, "123456", true);
  Client::ClientConfiguration configuration;
  UserAgentInterceptor userAgentInterceptor{configuration, "standard", "TestService"};
  userAgentInterceptor.AddLegacyFeaturesToUserAgent("ft/s3-transfer");

  // Intercept Request
  AmazonWebServiceRequestMock request{};
  InterceptorContext context{request};
  const auto wireRequest = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, URI{"heismay.com/ninja"}, HttpMethod::HTTP_POST);
  context.SetTransmitRequest(wireRequest);
  userAgentInterceptor.ModifyBeforeSigning(context);

  // Check for user agent header
  EXPECT_TRUE(wireRequest->HasHeader("user-agent"));
  const auto userAgentHeader = wireRequest->GetHeaderValue("user-agent");
  const auto userAgentParsed = Utils::StringUtils::Split(userAgentHeader, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto execEnvMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("exec-env/lambda") != Aws::String::npos; });
  EXPECT_TRUE(execEnvMetadata != userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto appMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("app/123456") != Aws::String::npos; });
  EXPECT_TRUE(appMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata < execEnvMetadata);
  EXPECT_TRUE(execEnvMetadata < archMetadata);
  EXPECT_TRUE(archMetadata < appMetadata);
  EXPECT_TRUE(appMetadata < businessMetrics);
}

TEST_F(UserAgentInterceptorTest, ValidAppIdAsEnviornmentVariable) {
  // Create Interceptor
  Environment::SetEnv(APP_ID_ENV_VAR, "123456", true);
  Client::ClientConfiguration configuration;
  UserAgentInterceptor userAgentInterceptor{configuration, "default", "TestService"};

  // Intercept Request
  AmazonWebServiceRequestMock request{};
  InterceptorContext context{request};
  const auto wireRequest = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, URI{"eupha.com/summoner"}, HttpMethod::HTTP_POST);
  context.SetTransmitRequest(wireRequest);
  userAgentInterceptor.ModifyBeforeSigning(context);

  // Check for user agent header
  EXPECT_TRUE(wireRequest->HasHeader("user-agent"));
  const auto userAgentHeader = wireRequest->GetHeaderValue("user-agent");
  const auto userAgentParsed = Utils::StringUtils::Split(userAgentHeader, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto execEnvMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("exec-env/") != Aws::String::npos; });
  EXPECT_TRUE(execEnvMetadata == userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto appMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("app/123456") != Aws::String::npos; });
  EXPECT_TRUE(appMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata < appMetadata);
  EXPECT_TRUE(appMetadata < businessMetrics);
}

TEST_F(UserAgentInterceptorTest, ValidAppIdAsAppIdSharedConfig) {
  // Create Interceptor
  TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());
  configFile << "[default]" <<std::endl;
  configFile << "sdk_ua_app_id = will" <<std::endl;
  configFile << "region = us-east-1" <<std::endl;
  configFile << "output = json" <<std::endl;

  Environment::SetEnv(CONFIG_FILE_ENV_VAR, configFile.GetFileName().c_str(), true);

  Aws::Config::ReloadCachedConfigFile();

  Client::ClientConfiguration configuration;
  UserAgentInterceptor userAgentInterceptor{configuration, "default", "TestService"};

  // Intercept Request
  AmazonWebServiceRequestMock request{};
  InterceptorContext context{request};
  const auto wireRequest = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, URI{"basilio.com/berserker"}, HttpMethod::HTTP_POST);
  context.SetTransmitRequest(wireRequest);
  userAgentInterceptor.ModifyBeforeSigning(context);

  // Check for user agent header
  EXPECT_TRUE(wireRequest->HasHeader("user-agent"));
  const auto userAgentHeader = wireRequest->GetHeaderValue("user-agent");
  const auto userAgentParsed = Utils::StringUtils::Split(userAgentHeader, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto execEnvMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("exec-env/") != Aws::String::npos; });
  EXPECT_TRUE(execEnvMetadata == userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto appMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("app/will") != Aws::String::npos; });
  EXPECT_TRUE(appMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata < appMetadata);
  EXPECT_TRUE(appMetadata < businessMetrics);
}

TEST_F(UserAgentInterceptorTest, AppIdEnvVarHasPrescedencOverSharedConfig) {
  // Create Interceptor
  TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());
  configFile << "[default]" <<std::endl;
  configFile << "sdk_ua_app_id = louis" <<std::endl;
  configFile << "region = us-east-1" <<std::endl;
  configFile << "output = json" <<std::endl;

  Environment::SetEnv(APP_ID_ENV_VAR, "will", true);
  Environment::SetEnv(CONFIG_FILE_ENV_VAR, configFile.GetFileName().c_str(), true);

  Aws::Config::ReloadCachedConfigFile();

  Client::ClientConfiguration configuration;
  UserAgentInterceptor userAgentInterceptor{configuration, "default", "TestService"};

  // Intercept Request
  AmazonWebServiceRequestMock request{};
  InterceptorContext context{request};
  const auto wireRequest = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, URI{"juna.com/maskeddancer"}, HttpMethod::HTTP_POST);
  context.SetTransmitRequest(wireRequest);
  userAgentInterceptor.ModifyBeforeSigning(context);

  // Check for user agent header
  EXPECT_TRUE(wireRequest->HasHeader("user-agent"));
  const auto userAgentHeader = wireRequest->GetHeaderValue("user-agent");
  const auto userAgentParsed = Utils::StringUtils::Split(userAgentHeader, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto execEnvMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("exec-env/") != Aws::String::npos; });
  EXPECT_TRUE(execEnvMetadata == userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto appMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("app/will") != Aws::String::npos; });
  EXPECT_TRUE(appMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata < appMetadata);
  EXPECT_TRUE(appMetadata < businessMetrics);
}

TEST_F(UserAgentInterceptorTest, AppIdEnvVarHasInvalidCharacters) {
  // Create Interceptor
  Environment::SetEnv(APP_ID_ENV_VAR, "1234(", true);
  Client::ClientConfiguration configuration;
  UserAgentInterceptor userAgentInterceptor{configuration, "default", "TestService"};

  // Intercept Request
  AmazonWebServiceRequestMock request{};
  InterceptorContext context{request};
  const auto wireRequest = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, URI{"juna.com/maskeddancer"}, HttpMethod::HTTP_POST);
  context.SetTransmitRequest(wireRequest);
  userAgentInterceptor.ModifyBeforeSigning(context);

  // Check for user agent header
  EXPECT_TRUE(wireRequest->HasHeader("user-agent"));
  const auto userAgentHeader = wireRequest->GetHeaderValue("user-agent");
  const auto userAgentParsed = Utils::StringUtils::Split(userAgentHeader, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto execEnvMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("exec-env/") != Aws::String::npos; });
  EXPECT_TRUE(execEnvMetadata == userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto appMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("app/1234-") != Aws::String::npos; });
  EXPECT_TRUE(appMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata < appMetadata);
  EXPECT_TRUE(appMetadata < businessMetrics);
}
