/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/auth/CredentialsCachingProvider.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/crt/auth/Credentials.h>

#include <condition_variable>
#include <limits>
#include <mutex>

using namespace Aws::Auth;
using namespace Aws::Utils;

namespace {
const char* CRT_CREDS_PROVIDER_TAG = "CrtCredentialsProvider";

struct RefreshState {
  std::mutex mutex;
  std::condition_variable condition;
  bool complete{false};
  AWSCredentials credentials;
};
}  // namespace

CrtCredentialsProvider::CrtFetchOnlyProvider::CrtFetchOnlyProvider(
    std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> credentialsProvider,
    std::chrono::milliseconds providerFuturesTimeoutMs, Aws::Client::UserAgentFeature userAgentFeature)
    : m_credentialsProvider{std::move(credentialsProvider)},
      m_providerFuturesTimeoutMs{providerFuturesTimeoutMs},
      m_userAgentFeature{userAgentFeature} {}

AWSCredentials CrtCredentialsProvider::CrtFetchOnlyProvider::GetAWSCredentials() {
  auto state = Aws::MakeShared<RefreshState>(CRT_CREDS_PROVIDER_TAG);

  m_credentialsProvider->GetCredentials([state](const std::shared_ptr<Crt::Auth::Credentials>& crtCredentials, int errorCode) -> void {
    (void)errorCode;
    {
      const std::unique_lock<std::mutex> lock(state->mutex);
      if (crtCredentials) {
        state->credentials = ExtractCredentialsFromCrt(*crtCredentials);
      }
      state->complete = true;
      state->condition.notify_all();
    }
  });

  AWSCredentials credentials{};
  {
    std::unique_lock<std::mutex> lock(state->mutex);
    state->condition.wait_for(lock, m_providerFuturesTimeoutMs, [&state]() -> bool { return state->complete; });
    credentials = state->credentials;
  }

  if (!credentials.IsEmpty()) {
    credentials.AddUserAgentFeature(m_userAgentFeature);
  }
  return credentials;
}

CrtCredentialsProvider::CrtCredentialsProvider(
    const std::function<std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>()>& credentialsProviderFactory,
    std::chrono::milliseconds providerFuturesTimeoutMs, Aws::Client::UserAgentFeature userAgentFeature, const Aws::String& providerName)
    : m_credentialsProvider{credentialsProviderFactory()},
      m_providerName{providerName} {
  if (m_credentialsProvider && m_credentialsProvider->IsValid()) {
    m_state = STATE::INITIALIZED;
    auto fetchOnly = Aws::MakeShared<CrtFetchOnlyProvider>(CRT_CREDS_PROVIDER_TAG, m_credentialsProvider,
                                                            providerFuturesTimeoutMs, userAgentFeature);
    m_cachingProvider = Aws::MakeShared<CredentialsCachingProvider>(CRT_CREDS_PROVIDER_TAG, fetchOnly);
  }
}

CrtCredentialsProvider::~CrtCredentialsProvider() = default;

AWSCredentials CrtCredentialsProvider::GetAWSCredentials() {
  if (m_state != STATE::INITIALIZED) {
    return AWSCredentials{};
  }
  return m_cachingProvider->GetAWSCredentials();
}

void CrtCredentialsProvider::Invalidate(const Aws::String& accessKeyId) {
  if (m_state != STATE::INITIALIZED) {
    return;
  }
  m_cachingProvider->Invalidate(accessKeyId);
}

AWSCredentials CrtCredentialsProvider::ExtractCredentialsFromCrt(const Aws::Crt::Auth::Credentials& crtCredentials) {
  AWSCredentials credentials{};
  const auto accountIdCursor = crtCredentials.GetAccessKeyId();
  credentials.SetAWSAccessKeyId({reinterpret_cast<char*>(accountIdCursor.ptr), accountIdCursor.len});
  const auto secretKeyCursor = crtCredentials.GetSecretAccessKey();
  credentials.SetAWSSecretKey({reinterpret_cast<char*>(secretKeyCursor.ptr), secretKeyCursor.len});
  const auto expiration = crtCredentials.GetExpirationTimepointInSeconds();
  // CRT's leaf providers (e.g. static/profile-file credentials) use UINT64_MAX to mean "never expires";
  // converting that directly to a time_point would overflow, so map it onto the same sentinel
  // AWSCredentials' default constructor uses.
  if (expiration == (std::numeric_limits<uint64_t>::max)()) {
    credentials.SetExpiration(DateTime((std::chrono::time_point<std::chrono::system_clock>::max)()));
  } else {
    credentials.SetExpiration(DateTime{static_cast<double>(expiration)});
  }
  const auto sessionTokenCursor = crtCredentials.GetSessionToken();
  credentials.SetSessionToken({reinterpret_cast<char*>(sessionTokenCursor.ptr), sessionTokenCursor.len});
  return credentials;
}