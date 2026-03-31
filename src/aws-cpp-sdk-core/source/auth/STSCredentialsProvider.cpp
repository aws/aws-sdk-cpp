/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Globals.h>
#include <aws/core/auth/STSCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/platform/Environment.h>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;
using namespace Aws::Utils;

namespace {
std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> GetSTSCrtProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig,
    Aws::Crt::Io::ClientBootstrap* defaultClientBootstrap) {
  Aws::Crt::Auth::CredentialsProviderSTSWebIdentityConfig stsConfig{};
  stsConfig.Bootstrap = defaultClientBootstrap;
  const auto tlsOptions = Aws::GetDefaultTlsConnectionOptions();
  if (tlsOptions) {
    stsConfig.TlsConnectionOptions = *tlsOptions;
  }
  stsConfig.Region = credentialsConfig.region.c_str();
  stsConfig.TokenFilePath = credentialsConfig.stsCredentialsProviderConfig.tokenFilePath.c_str();
  stsConfig.RoleArn = credentialsConfig.stsCredentialsProviderConfig.roleArn.c_str();
  stsConfig.SessionName = [&credentialsConfig]() -> Aws::String {
    if (!credentialsConfig.stsCredentialsProviderConfig.sessionName.empty()) {
      return credentialsConfig.stsCredentialsProviderConfig.sessionName;
    }
    return UUID::RandomUUID();
  }()
                                                        .c_str();

  if (credentialsConfig.allowSystemProxy) {
    Aws::Crt::Http::ProxyEnvVarOptions options{};
    options.proxyEnvVarType = Aws::Crt::Http::ProxyEnvVarType::Enabled;
    options.connectionType = Aws::Crt::Http::AwsHttpProxyConnectionType::Legacy;
    if (tlsOptions) {
      options.TlsOptions = *tlsOptions;
    }
    stsConfig.ProxyEnvVarOptions = options;
  }

  return Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderSTSWebIdentity(stsConfig);
}

Aws::String GetLegacySettingFromEnvOrProfile(const Aws::String& envVar,
                                             std::function<Aws::String(Aws::Config::Profile)> profileFetchFunction) {
  auto value = Aws::Environment::GetEnv(envVar.c_str());
  if (value.empty()) {
    auto profile = Aws::Config::GetCachedConfigProfile(Aws::Auth::GetConfigProfileName());
    value = profileFetchFunction(profile);
  }
  return value;
}

Aws::Client::ClientConfiguration::CredentialProviderConfiguration BuildLegacyConfig() {
  Aws::Client::ClientConfiguration::CredentialProviderConfiguration config{};
  config.profile = Aws::Auth::GetConfigProfileName();
  config.region = GetLegacySettingFromEnvOrProfile(
      "AWS_DEFAULT_REGION",
      [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRegion(); });
  config.stsCredentialsProviderConfig.roleArn = GetLegacySettingFromEnvOrProfile(
      "AWS_ROLE_ARN",
      [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRoleArn(); });
  config.stsCredentialsProviderConfig.sessionName = GetLegacySettingFromEnvOrProfile(
      "AWS_ROLE_SESSION_NAME",
      [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("role_session_name"); });
  config.stsCredentialsProviderConfig.tokenFilePath = GetLegacySettingFromEnvOrProfile(
      "AWS_WEB_IDENTITY_TOKEN_FILE",
      [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("web_identity_token_file"); });
  return config;
}
}  // namespace

STSAssumeRoleWebIdentityCredentialsProvider::STSAssumeRoleWebIdentityCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig)
    : CrtCredentialsProvider{[&credentialsConfig]() -> std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> {
                               return GetSTSCrtProvider(credentialsConfig, GetDefaultClientBootstrap());
                             },
                             credentialsConfig.stsCredentialsProviderConfig.retrieveCredentialsFutureTimeout,
                             Aws::Client::UserAgentFeature::CREDENTIALS_STS_WEB_IDENTITY_TOKEN,
                             "STSAssumeRoleWebIdentityCredentialsProvider"} {}

STSAssumeRoleWebIdentityCredentialsProvider::STSAssumeRoleWebIdentityCredentialsProvider()
    : STSAssumeRoleWebIdentityCredentialsProvider(BuildLegacyConfig()) {}

STSAssumeRoleWebIdentityCredentialsProvider::~STSAssumeRoleWebIdentityCredentialsProvider() = default;
