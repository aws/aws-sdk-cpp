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

  // Create underlying STS provider
  auto stsProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderSTSWebIdentity(stsConfig);
  if (!stsProvider || !stsProvider->IsValid()) {
    AWS_LOGSTREAM_WARN(STS_LOG_TAG, "Failed to create underlying STS credentials provider");
    return;
  }

  // Wrap with caching provider
  Aws::Crt::Auth::CredentialsProviderCachedConfig cachedConfig;
  cachedConfig.Provider = stsProvider;
  cachedConfig.CachedCredentialTTL = credentialsConfig.stsCredentialsProviderConfig.credentialCacheCacheTTL;

  m_credentialsProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderCached(cachedConfig);
  if (m_credentialsProvider && m_credentialsProvider->IsValid()) {
    m_state = STATE::INITIALIZED;
    AWS_LOGSTREAM_INFO(STS_LOG_TAG,
                       "STS credentials provider initialized with cache TTL " << cachedConfig.CachedCredentialTTL.count() << " ms");
  } else {
    AWS_LOGSTREAM_WARN(STS_LOG_TAG, "Failed to create cached STS credentials provider");
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

  // Thread-safe check: If another thread is already fetching, wait for its result
  auto expected = false;
  if (!m_refreshInProgress.compare_exchange_strong(expected, true)) {
    return waitForSharedCredentials();
  }

  // This thread will fetch the credentials
  auto credentials = fetchCredentialsAsync();

  if (!credentials.IsEmpty()) {
    credentials.AddUserAgentFeature(Aws::Client::UserAgentFeature::CREDENTIALS_STS_WEB_IDENTITY_TOKEN);
  }

  return credentials;
}

void STSAssumeRoleWebIdentityCredentialsProvider::Reload() {
  AWS_LOGSTREAM_DEBUG(STS_LOG_TAG, "Calling reload on STSCredentialsProvider is a no-op and no longer in the call path");
}

AWSCredentials STSAssumeRoleWebIdentityCredentialsProvider::waitForSharedCredentials() const {
  AWS_LOGSTREAM_DEBUG(STS_LOG_TAG, "Another thread is fetching credentials, waiting for result");
  std::unique_lock<std::mutex> lock{m_refreshMutex};
  m_refreshSignal.wait_for(lock, m_providerFuturesTimeoutMs, [this]() -> bool { return !m_refreshInProgress.load(); });

  if (m_pendingCredentials) {
    return *m_pendingCredentials;
  }

  AWS_LOGSTREAM_WARN(STS_LOG_TAG, "Failed to get shared credentials after timeout");
  return AWSCredentials{};
}

AWSCredentials STSAssumeRoleWebIdentityCredentialsProvider::extractCredentialsFromCrt(
    const Aws::Crt::Auth::Credentials& crtCredentials) const {
  AWSCredentials credentials{};
  const auto accountIdCursor = crtCredentials.GetAccessKeyId();
  credentials.SetAWSAccessKeyId({reinterpret_cast<char*>(accountIdCursor.ptr), accountIdCursor.len});
  const auto secretKeyCursor = crtCredentials.GetSecretAccessKey();
  credentials.SetAWSSecretKey({reinterpret_cast<char*>(secretKeyCursor.ptr), secretKeyCursor.len});
  const auto expiration = crtCredentials.GetExpirationTimepointInSeconds();
  credentials.SetExpiration(DateTime{static_cast<double>(expiration)});
  const auto sessionTokenCursor = crtCredentials.GetSessionToken();
  credentials.SetSessionToken({reinterpret_cast<char*>(sessionTokenCursor.ptr), sessionTokenCursor.len});
  return credentials;
}

AWSCredentials STSAssumeRoleWebIdentityCredentialsProvider::fetchCredentialsAsync() {
  AWS_LOGSTREAM_DEBUG(STS_LOG_TAG, "Initiating credential fetch from STS/cache");

  AWSCredentials credentials{};
  std::atomic<bool> refreshDone{false};

  m_credentialsProvider->GetCredentials(
      [this, &credentials, &refreshDone](std::shared_ptr<Aws::Crt::Auth::Credentials> crtCredentials, int errorCode) -> void {
        std::unique_lock<std::mutex> lock{m_refreshMutex};
        if (errorCode != AWS_ERROR_SUCCESS) {
          m_pendingCredentials.reset();
        } else {
          credentials = extractCredentialsFromCrt(*crtCredentials);

          // Store for other waiting threads
          m_pendingCredentials = Aws::MakeShared<AWSCredentials>(STS_LOG_TAG, credentials);
        }
        refreshDone.store(true);
        m_refreshInProgress.store(false);
        m_refreshSignal.notify_all();
      });

  // Wait for completion
  std::unique_lock<std::mutex> lock{m_refreshMutex};
  auto completed = m_refreshSignal.wait_for(lock, m_providerFuturesTimeoutMs, [&refreshDone]() -> bool { return refreshDone.load(); });

  if (!completed) {
    AWS_LOGSTREAM_ERROR(STS_LOG_TAG, "Credential fetch timed out after " << m_providerFuturesTimeoutMs.count() << "ms");
    m_refreshInProgress.store(false);
    m_refreshSignal.notify_all();
  }

  return credentials;
}
