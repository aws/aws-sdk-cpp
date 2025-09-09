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
const char* STS_LOG_TAG = "STSAssumeRoleWebIdentityCredentialsProvider";
}

STSAssumeRoleWebIdentityCredentialsProvider::STSAssumeRoleWebIdentityCredentialsProvider(
    Aws::Client::ClientConfiguration::CredentialProviderConfiguration credentialsConfig)
    : m_credentialsProvider(nullptr), m_providerFuturesTimeoutMs(credentialsConfig.stsCredentialsProviderConfig.retrieveCredentialsFutureTimeout)
{
  Aws::Crt::Auth::CredentialsProviderSTSWebIdentityConfig stsConfig{};
  stsConfig.Bootstrap = GetDefaultClientBootstrap();
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
  }().c_str();
  m_credentialsProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderSTSWebIdentity(stsConfig);
  if (m_credentialsProvider && m_credentialsProvider->IsValid()) {
    m_state = STATE::INITIALIZED;
  } else {
    AWS_LOGSTREAM_WARN(STS_LOG_TAG, "Failed to create STS credentials provider");
  }
}

Aws::String GetLegacySettingFromEnvOrProfile(const Aws::String& envVar,
  std::function<Aws::String (Aws::Config::Profile)> profileFetchFunction)
{
  auto value = Aws::Environment::GetEnv(envVar.c_str());
  if (value.empty()) {
    auto profile = Aws::Config::GetCachedConfigProfile(Aws::Auth::GetConfigProfileName());
    value = profileFetchFunction(profile);
  }
  return value;
}

STSAssumeRoleWebIdentityCredentialsProvider::STSAssumeRoleWebIdentityCredentialsProvider()
    : STSAssumeRoleWebIdentityCredentialsProvider(
          Aws::Client::ClientConfiguration::CredentialProviderConfiguration{
            Aws::Auth::GetConfigProfileName(),
            GetLegacySettingFromEnvOrProfile("AWS_DEFAULT_REGION",
              [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRegion(); }),
            {},
            {
              GetLegacySettingFromEnvOrProfile("AWS_ROLE_ARN",
                [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetRoleArn(); }),
              GetLegacySettingFromEnvOrProfile("AWS_ROLE_SESSION_NAME",
                [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("role_session_name"); }),
              GetLegacySettingFromEnvOrProfile("AWS_WEB_IDENTITY_TOKEN_FILE",
                [](const Aws::Config::Profile& profile) -> Aws::String { return profile.GetValue("web_identity_token_file"); })
            }})
{}

STSAssumeRoleWebIdentityCredentialsProvider::~STSAssumeRoleWebIdentityCredentialsProvider()  = default;

AWSCredentials STSAssumeRoleWebIdentityCredentialsProvider::GetAWSCredentials() {
  if (m_state != STATE::INITIALIZED) {
    AWS_LOGSTREAM_DEBUG(STS_LOG_TAG, "STSCredentialsProvider is not initialized, returning empty credentials");
    return AWSCredentials{};
  }
  AWSCredentials credentials{};
  auto refreshDone = false;
  m_credentialsProvider->GetCredentials(
      [this, &credentials, &refreshDone](std::shared_ptr<Aws::Crt::Auth::Credentials> crtCredentials, int errorCode) -> void {
        {
          const std::unique_lock<std::mutex> lock{m_refreshMutex};
          if (errorCode != AWS_ERROR_SUCCESS) {
            AWS_LOGSTREAM_ERROR(STS_LOG_TAG, "Failed to get credentials from STS: " << errorCode);
          } else {
            const auto accountIdCursor = crtCredentials->GetAccessKeyId();
            credentials.SetAWSAccessKeyId({reinterpret_cast<char*>(accountIdCursor.ptr), accountIdCursor.len});
            const auto secretKeuCursor = crtCredentials->GetSecretAccessKey();
            credentials.SetAWSSecretKey({reinterpret_cast<char*>(secretKeuCursor.ptr), secretKeuCursor.len});
            const auto expiration = crtCredentials->GetExpirationTimepointInSeconds();
            credentials.SetExpiration(DateTime{static_cast<double>(expiration)});
            const auto sessionTokenCursor = crtCredentials->GetSessionToken();
            credentials.SetSessionToken({reinterpret_cast<char*>(sessionTokenCursor.ptr), sessionTokenCursor.len});
          }
          refreshDone = true;
        }
        m_refreshSignal.notify_one();
      });

  std::unique_lock<std::mutex> lock{m_refreshMutex};
  m_refreshSignal.wait_for(lock, m_providerFuturesTimeoutMs, [&refreshDone]() -> bool { return refreshDone; });

  if (!credentials.IsEmpty()) {
    credentials.AddUserAgentFeature(Aws::Client::UserAgentFeature::CREDENTIALS_STS_WEB_IDENTITY_TOKEN);
  }

  return credentials;
}

void STSAssumeRoleWebIdentityCredentialsProvider::Reload() {
  AWS_LOGSTREAM_DEBUG(STS_LOG_TAG, "Calling reload on STSCredentialsProvider is a no-op and no longer in the call path");
}
