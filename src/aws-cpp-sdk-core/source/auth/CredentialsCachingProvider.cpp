/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/CredentialsCachingProvider.h>
#include <aws/core/internal/CredentialsCaching.h> // the caching engine (kept out of the public header)
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Auth;
using namespace Aws::Utils;

namespace Aws
{
    namespace Internal
    {
        class AWS_CORE_LOCAL CredentialsCachingStateImpl : public CredentialsCachingState<Aws::Auth::AWSCredentials>
        {
        public:
            using CredentialsCachingState<Aws::Auth::AWSCredentials>::CredentialsCachingState;
        };
    }
}

static const char CREDENTIALS_CACHING_PROVIDER_LOG_TAG[] = "CredentialsCachingProvider";

CredentialsCachingProvider::CredentialsCachingProvider(std::shared_ptr<AWSCredentialsProvider> delegate)
    : m_delegate(std::move(delegate)),
      m_cachingState(new Aws::Internal::CredentialsCachingStateImpl(
          // GetAWSCredentials() carries no failure reason, so empty credentials classify as Recoverable.
          [this]() -> Aws::Internal::RefreshResult<AWSCredentials> {
              AWSCredentials credentials = m_delegate->GetAWSCredentials();
              if (credentials.IsEmpty())
              {
                  return Aws::Internal::RefreshResult<AWSCredentials>::Recoverable("wrapped provider returned no credentials");
              }
              return Aws::Internal::RefreshResult<AWSCredentials>::Success(credentials, credentials.GetExpiration());
          },
          [](const AWSCredentials& credentials) { return credentials.GetAWSAccessKeyId(); }))
{
}

CredentialsCachingProvider::~CredentialsCachingProvider() = default;

AWSCredentials CredentialsCachingProvider::GetAWSCredentials()
{
    auto outcome = m_cachingState->GetCredentials();
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CREDENTIALS_CACHING_PROVIDER_LOG_TAG, "Credential fetch failed and no cached credentials are available, returning empty: " << outcome.GetError());
        return AWSCredentials();
    }
    return outcome.GetResult();
}

void CredentialsCachingProvider::Invalidate(const Aws::String& accessKeyId)
{
    m_cachingState->Invalidate(accessKeyId);
}
