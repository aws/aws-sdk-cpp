/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Globals.h>
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/auth/ProfileCredentialsProvider.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpConnection.h>

#include <chrono>

using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Crt::Auth;

namespace {
const char PROFILE_AWS_CREDENTIALS_FILE[] = "AWS_SHARED_CREDENTIALS_FILE";
const char PROFILE_DEFAULT_CREDENTIALS_FILE[] = "credentials";
const char PROFILE_PROFILE_DIRECTORY[] = ".aws";
const char PROFILE_PROVIDER_LOG_TAG[] = "ProfileCredentialsProvider";
const long PROVIDER_FUTURES_TIMEOUT_MS = 300000;

std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> GetProfileCrtProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig) {
  CredentialsProviderProfileConfig config{};
  config.ProfileNameOverride = Aws::Crt::ByteCursorFromCString(credentialsConfig.profile.c_str());
  config.Bootstrap = Aws::GetDefaultClientBootstrap();
  const auto tlsOptions = Aws::GetDefaultTlsConnectionOptions();
  if (tlsOptions) {
    config.TlsConnectionOptions = *tlsOptions;
  }

  if (credentialsConfig.allowSystemProxy) {
    Aws::Crt::Http::ProxyEnvVarOptions options{};
    options.proxyEnvVarType = Aws::Crt::Http::ProxyEnvVarType::Enabled;
    options.connectionType = Aws::Crt::Http::AwsHttpProxyConnectionType::Legacy;
    if (tlsOptions) {
      options.TlsOptions = *tlsOptions;
    }
    config.ProxyEnvVarOptions = options;
  }

  return CredentialsProvider::CreateCredentialsProviderProfile(config);
}
}  // namespace

class ProfileCredentialsProvider::ProfileCredentialsProviderImp : public CrtCredentialsProvider {
 public:
  ProfileCredentialsProviderImp()
      : CrtCredentialsProvider(
            []() -> std::shared_ptr<ICredentialsProvider> {
              CredentialsProviderProfileConfig config;
              return CredentialsProvider::CreateCredentialsProviderProfile(config);
            },
            std::chrono::milliseconds(PROVIDER_FUTURES_TIMEOUT_MS), UserAgentFeature::CREDENTIALS_PROFILE, "ProfileCredentialsProvider") {}

  ProfileCredentialsProviderImp(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig)
      : CrtCredentialsProvider(
            [credentialsConfig]() -> std::shared_ptr<ICredentialsProvider> { return GetProfileCrtProvider(credentialsConfig); },
            std::chrono::milliseconds(PROVIDER_FUTURES_TIMEOUT_MS), UserAgentFeature::CREDENTIALS_PROFILE, "ProfileCredentialsProvider") {}

  static Aws::String GetCredentialsProfileFilename() {
    auto credentialsFileNameFromVar = Aws::Environment::GetEnv(PROFILE_AWS_CREDENTIALS_FILE);

    if (credentialsFileNameFromVar.empty()) {
      return GetHomeDirectory() + PROFILE_PROFILE_DIRECTORY + PATH_DELIM + PROFILE_DEFAULT_CREDENTIALS_FILE;
    }
    return credentialsFileNameFromVar;
  }

  static Aws::String GetProfileDirectory() {
    Aws::String credentialsFileName = GetCredentialsProfileFilename();
    auto lastSeparator = credentialsFileName.find_last_of(PATH_DELIM);
    if (lastSeparator != std::string::npos) {
      return credentialsFileName.substr(0, lastSeparator);
    } else {
      return {};
    }
  }
};

ProfileCredentialsProvider::ProfileCredentialsProvider() : m_impl(std::make_shared<ProfileCredentialsProviderImp>()) {}

ProfileCredentialsProvider::ProfileCredentialsProvider(long refreshRateMs) : ProfileCredentialsProvider() {
  AWS_UNREFERENCED_PARAM(refreshRateMs);
  AWS_LOGSTREAM_WARN(PROFILE_PROVIDER_LOG_TAG, "refreshRateMs is ignored, credentials refresh when they expire");
}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile) {
  Aws::Client::ClientConfiguration::CredentialProviderConfiguration credentialsConfig{};
  credentialsConfig.profile = profile;
  m_impl = std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig);
}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile, long refreshRateMs) : ProfileCredentialsProvider(profile) {
  AWS_UNREFERENCED_PARAM(refreshRateMs);
  AWS_LOGSTREAM_WARN(PROFILE_PROVIDER_LOG_TAG, "refreshRateMs is ignored, credentials refresh when they expire");
}

ProfileCredentialsProvider::ProfileCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig)) {}

ProfileCredentialsProvider::ProfileCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig, long refreshRateMs)
    : ProfileCredentialsProvider(credentialsConfig) {
  AWS_UNREFERENCED_PARAM(refreshRateMs);
  AWS_LOGSTREAM_WARN(PROFILE_PROVIDER_LOG_TAG, "refreshRateMs is ignored, credentials refresh when they expire");
}

void ProfileCredentialsProvider::Reload() {
  AWS_LOGSTREAM_WARN(PROFILE_PROVIDER_LOG_TAG, "Reload does nothing, credentials refresh when they expire");
}

Aws::String ProfileCredentialsProvider::GetCredentialsProfileFilename() {
  return ProfileCredentialsProviderImp::GetCredentialsProfileFilename();
}

Aws::String ProfileCredentialsProvider::GetProfileDirectory() { return ProfileCredentialsProviderImp::GetProfileDirectory(); }

AWSCredentials ProfileCredentialsProvider::GetAWSCredentials() { return m_impl->GetAWSCredentials(); }
