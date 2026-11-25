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
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpConnection.h>

#include <chrono>

using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Utils::Threading;
using namespace Aws::Crt::Auth;

namespace {
const char PROFILE_AWS_CREDENTIALS_FILE[] = "AWS_SHARED_CREDENTIALS_FILE";
const char PROFILE_DEFAULT_CREDENTIALS_FILE[] = "credentials";
const char PROFILE_PROFILE_DIRECTORY[] = ".aws";
const long PROFILE_FUTURES_TIMEOUT_MS = 60'000;

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
  ProfileCredentialsProviderImp(long refreshRateMs)
      : CrtCredentialsProvider(
            []() -> std::shared_ptr<ICredentialsProvider> {
              CredentialsProviderProfileConfig config;
              return CredentialsProvider::CreateCredentialsProviderProfile(config);
            },
            std::chrono::milliseconds(PROFILE_FUTURES_TIMEOUT_MS), UserAgentFeature::CREDENTIALS_PROFILE, "ProfileCredentialsProvider"),
        m_loadFrequencyMs(refreshRateMs) {}

  ProfileCredentialsProviderImp(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig,
                                long refreshRateMs)
      : CrtCredentialsProvider(
            [credentialsConfig]() -> std::shared_ptr<ICredentialsProvider> {
              return GetProfileCrtProvider(credentialsConfig);
            },
            std::chrono::milliseconds(PROFILE_FUTURES_TIMEOUT_MS), UserAgentFeature::CREDENTIALS_PROFILE,
            "ProfileCredentialsProvider"),
        m_loadFrequencyMs(refreshRateMs) {}


  void RefreshIfExpired() override {
    ReaderLockGuard guard(m_reloadLock);
    if (!IsTimeToRefresh(m_loadFrequencyMs)) {
       return;
    }

    guard.UpgradeToWriterLock();
    if (!IsTimeToRefresh(m_loadFrequencyMs)) { // double-checked lock to avoid refreshing twice
        return;
    }

    Reload();
    AWSCredentialsProvider::Reload();
  }


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

 private:
  long m_loadFrequencyMs;
};

ProfileCredentialsProvider::ProfileCredentialsProvider(long refreshRateMs) :
    m_impl(std::make_shared<ProfileCredentialsProviderImp>(refreshRateMs)) {}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile, long refreshRateMs) {
  Aws::Client::ClientConfiguration::CredentialProviderConfiguration credentialsConfig{};
  credentialsConfig.profile = profile;
  m_impl = std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig, refreshRateMs);
}

ProfileCredentialsProvider::ProfileCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig, long refreshRateMs)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig, refreshRateMs)) {}

Aws::String ProfileCredentialsProvider::GetCredentialsProfileFilename() {
  return ProfileCredentialsProviderImp::GetCredentialsProfileFilename();
}

Aws::String ProfileCredentialsProvider::GetProfileDirectory() { return ProfileCredentialsProviderImp::GetProfileDirectory(); }

AWSCredentials ProfileCredentialsProvider::GetAWSCredentials() { return m_impl->GetAWSCredentials(); }
