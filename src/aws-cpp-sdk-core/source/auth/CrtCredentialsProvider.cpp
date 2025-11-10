/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Utils::Threading;

namespace {
const int FIVE_MINUTES_IN_MILLIS = 5 * 60 * 1000;
}

CrtCredentialsProvider::CrtCredentialsProvider(
    const std::function<std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>()>& credentialsProviderFactory,
    std::chrono::milliseconds providerFuturesTimeoutMs, Aws::Client::UserAgentFeature userAgentFeature, const Aws::String& providerName)
    : m_credentialsProvider{credentialsProviderFactory()},
      m_providerFuturesTimeoutMs{providerFuturesTimeoutMs},
      m_userAgentFeature{userAgentFeature},
      m_providerName{providerName} {
  if (m_credentialsProvider && m_credentialsProvider->IsValid()) {
    m_state = STATE::INITIALIZED;
  }
}

CrtCredentialsProvider::~CrtCredentialsProvider() = default;

AWSCredentials CrtCredentialsProvider::GetAWSCredentials() {
  if (m_state != STATE::INITIALIZED) {
    return AWSCredentials{};
  }
  RefreshIfExpired();
  const ReaderLockGuard guard(m_reloadLock);
  return m_credentials;
}

void CrtCredentialsProvider::Reload() {
  AWSCredentials credentials{};
  std::mutex refresh_mutex{};
  std::condition_variable refresh_condition;
  bool refresh_complete{false};
  m_credentialsProvider->GetCredentials([&credentials, &refresh_mutex, &refresh_complete, &refresh_condition](
                                            const std::shared_ptr<Crt::Auth::Credentials>& crtCredentials, int errorCode) -> void {
    {
      const std::unique_lock<std::mutex> lock(refresh_mutex);
      (void)errorCode;
      credentials = ExtractCredentialsFromCrt(*crtCredentials);
      refresh_complete = true;
    }
    refresh_condition.notify_all();
  });

  std::unique_lock<std::mutex> lock(refresh_mutex);
  refresh_condition.wait_for(lock, m_providerFuturesTimeoutMs, [&refresh_complete]() -> bool { return refresh_complete; });
  if (!credentials.IsEmpty()) {
    credentials.AddUserAgentFeature(m_userAgentFeature);
  }
  m_credentials = credentials;
}

void CrtCredentialsProvider::RefreshIfExpired() {
  ReaderLockGuard guard(m_reloadLock);
  if (!m_credentials.IsEmpty() && !m_credentials.ExpiresSoon(FIVE_MINUTES_IN_MILLIS)) {
    return;
  }

  guard.UpgradeToWriterLock();
  // double-checked lock to avoid refreshing twice
  if (!m_credentials.IsEmpty() && !m_credentials.ExpiresSoon(FIVE_MINUTES_IN_MILLIS)) {
    return;
  }

  Reload();
}

AWSCredentials CrtCredentialsProvider::ExtractCredentialsFromCrt(const Aws::Crt::Auth::Credentials& crtCredentials) {
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