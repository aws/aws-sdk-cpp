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
  Aws::Crt::Io::TlsContextOptions tlsCtxOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
  const Aws::Crt::Io::TlsContext tlsContext(tlsCtxOptions, Aws::Crt::Io::TlsMode::CLIENT);
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

  return Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderSTSWebIdentity(stsConfig);
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

Aws::String GetLegacySettingFromEnvOrProfile(const Aws::String& envVar,
                                             std::function<Aws::String(Aws::Config::Profile)> profileFetchFunction) {
  auto value = Aws::Environment::GetEnv(envVar.c_str());
  if (value.empty()) {
    auto profile = Aws::Config::GetCachedConfigProfile(Aws::Auth::GetConfigProfileName());
    value = profileFetchFunction(profile);
  }
  return value;
}

STSAssumeRoleWebIdentityCredentialsProvider::STSAssumeRoleWebIdentityCredentialsProvider()
    : STSAssumeRoleWebIdentityCredentialsProvider(Aws::Client::ClientConfiguration::CredentialProviderConfiguration{
          Aws::Auth::GetConfigProfileName(),
          GetLegacySettingFromEnvOrProfile("AWS_DEFAULT_REGION",
                                           [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRegion(); }),
          {},
          {GetLegacySettingFromEnvOrProfile("AWS_ROLE_ARN",
                                            [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRoleArn(); }),
           GetLegacySettingFromEnvOrProfile(
               "AWS_ROLE_SESSION_NAME",
               [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("role_session_name"); }),
           GetLegacySettingFromEnvOrProfile(
               "AWS_WEB_IDENTITY_TOKEN_FILE",
               [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("web_identity_token_file"); })},
          {}}) {}

STSAssumeRoleWebIdentityCredentialsProvider::~STSAssumeRoleWebIdentityCredentialsProvider() = default;
