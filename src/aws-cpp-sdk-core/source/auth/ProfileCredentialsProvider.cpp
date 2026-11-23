/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Globals.h>
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/auth/ProfileCredentialsProvider.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/config/AWSConfigFileProfileConfigLoader.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
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
const long DEFAULT_REFRESH_RATE_MS = 300000;
const char PROFILE_ENV_VAR[] = "AWS_PROFILE";
const char DEFAULT_PROFILE_NAME[] = "default";

// The profile the CRT selects when it is given no override: AWS_PROFILE, then "default".
Aws::String GetCrtDefaultProfileName() {
  const auto profileFromEnv = Aws::Environment::GetEnv(PROFILE_ENV_VAR);
  return profileFromEnv.empty() ? Aws::String(DEFAULT_PROFILE_NAME) : profileFromEnv;
}

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
            std::chrono::milliseconds(DEFAULT_REFRESH_RATE_MS), ResolveUserAgentFeature(GetCrtDefaultProfileName()),
            "ProfileCredentialsProvider") {}

  ProfileCredentialsProviderImp(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig)
      : CrtCredentialsProvider(
            [credentialsConfig]() -> std::shared_ptr<ICredentialsProvider> {
              return GetProfileCrtProvider(credentialsConfig);
            },
            std::chrono::milliseconds(DEFAULT_REFRESH_RATE_MS), ResolveUserAgentFeature(credentialsConfig.profile),
            "ProfileCredentialsProvider") {}

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
  /**
   * The CRT does not report which source produced the credentials, so apply its selection rule to the profile:
   * credential_process is used only when the profile has no role_arn and no static keys.
   */
  static UserAgentFeature ResolveUserAgentFeature(const Aws::String& profileName) {
    bool hasCredentialProcess = false;
    bool hasRoleArn = false;
    bool hasStaticKeys = false;
    const auto inspect = [&](const Aws::String& fileName, bool useProfilePrefix) {
      Aws::Config::AWSConfigFileProfileConfigLoader loader(fileName, useProfilePrefix);
      if (!loader.Load()) {
        return;
      }
      const auto& profiles = loader.GetProfiles();
      const auto profile = profiles.find(profileName);
      if (profile == profiles.end()) {
        return;
      }
      hasCredentialProcess = hasCredentialProcess || !profile->second.GetCredentialProcess().empty();
      hasRoleArn = hasRoleArn || !profile->second.GetRoleArn().empty();
      const auto& credentials = profile->second.GetCredentials();
      hasStaticKeys = hasStaticKeys || !credentials.GetAWSAccessKeyId().empty() || !credentials.GetAWSSecretKey().empty();
    };
    inspect(Aws::Auth::GetConfigProfileFilename(), true);
    inspect(GetCredentialsProfileFilename(), false);

    if (hasCredentialProcess && !hasRoleArn && !hasStaticKeys) {
      return UserAgentFeature::CREDENTIALS_PROFILE_PROCESS;
    }
    return UserAgentFeature::CREDENTIALS_PROFILE;
  }
};

ProfileCredentialsProvider::ProfileCredentialsProvider(long refreshRateMs) : m_impl(std::make_shared<ProfileCredentialsProviderImp>()) {
  AWS_UNREFERENCED_PARAM(refreshRateMs);
}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile, long refreshRateMs) {
  Aws::Client::ClientConfiguration::CredentialProviderConfiguration credentialsConfig{};
  credentialsConfig.profile = profile;
  m_impl = std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig);
  AWS_UNREFERENCED_PARAM(refreshRateMs);
}

ProfileCredentialsProvider::ProfileCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig, long refreshRateMs)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(credentialsConfig)) {
  AWS_UNREFERENCED_PARAM(refreshRateMs);
}

void ProfileCredentialsProvider::Reload() {}

Aws::String ProfileCredentialsProvider::GetCredentialsProfileFilename() {
  return ProfileCredentialsProviderImp::GetCredentialsProfileFilename();
}

Aws::String ProfileCredentialsProvider::GetProfileDirectory() { return ProfileCredentialsProviderImp::GetProfileDirectory(); }

AWSCredentials ProfileCredentialsProvider::GetAWSCredentials() { return m_impl->GetAWSCredentials(); }
