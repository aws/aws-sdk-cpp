/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/internal/CredentialsCachingProvider.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/crt/auth/Credentials.h>

#include <condition_variable>
#include <mutex>

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Utils::Threading;

namespace {
const char* CRT_CREDS_PROVIDER_TAG = "CrtCredentialsProvider";

struct RefreshState {
  std::mutex mutex;
  std::condition_variable condition;
  bool complete{false};
  AWSCredentials credentials;
};
}  // namespace

// CrtRetrieveProvider retrieves credentials through the owner's Reload().
class CrtCredentialsProvider::CrtRetrieveProvider : public AWSCredentialsProvider {
 public:
  explicit CrtRetrieveProvider(CrtCredentialsProvider& owner) : m_owner(owner) {}

  AWSCredentials GetAWSCredentials() override {
    m_owner.m_credentials = AWSCredentials{};
    m_owner.Reload();
    return m_owner.m_credentials;
  }

 private:
  CrtCredentialsProvider& m_owner;
};

CrtCredentialsProvider::CrtCredentialsProvider(
    const std::function<std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider>()>& credentialsProviderFactory,
    std::chrono::milliseconds providerFuturesTimeoutMs, Aws::Client::UserAgentFeature userAgentFeature, const Aws::String& providerName,
    bool staticStability)
    : m_credentialsProvider{credentialsProviderFactory()},
      m_providerFuturesTimeoutMs{providerFuturesTimeoutMs},
      m_userAgentFeature{userAgentFeature},
      m_providerName{providerName},
      m_cachingProvider{Aws::MakeShared<Aws::Internal::CredentialsCachingProvider>(CRT_CREDS_PROVIDER_TAG, Aws::MakeShared<CrtRetrieveProvider>(CRT_CREDS_PROVIDER_TAG, *this), staticStability)} {
  if (m_credentialsProvider && m_credentialsProvider->IsValid()) {
    m_state = STATE::INITIALIZED;
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

void CrtCredentialsProvider::Reload() {
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
  m_credentials = std::move(credentials);
}

AWSCredentials CrtCredentialsProvider::ExtractCredentialsFromCrt(const Aws::Crt::Auth::Credentials& crtCredentials) {
  AWSCredentials credentials{};
  const auto accountIdCursor = crtCredentials.GetAccessKeyId();
  credentials.SetAWSAccessKeyId({reinterpret_cast<char*>(accountIdCursor.ptr), accountIdCursor.len});
  const auto secretKeyCursor = crtCredentials.GetSecretAccessKey();
  credentials.SetAWSSecretKey({reinterpret_cast<char*>(secretKeyCursor.ptr), secretKeyCursor.len});
  const uint64_t expiration = crtCredentials.GetExpirationTimepointInSeconds();
  credentials.SetExpiration(DateTime{expiration});
  const auto sessionTokenCursor = crtCredentials.GetSessionToken();
  credentials.SetSessionToken({reinterpret_cast<char*>(sessionTokenCursor.ptr), sessionTokenCursor.len});
  return credentials;
}