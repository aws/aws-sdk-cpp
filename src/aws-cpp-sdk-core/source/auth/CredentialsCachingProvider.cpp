/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/internal/CredentialsCachingProvider.h>
#include <aws/core/internal/CredentialsCaching.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>

using namespace Aws::Auth;
using namespace Aws::Internal;
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

CredentialsCachingProvider::CredentialsCachingProvider(RetrieveFunction retrieve, bool staticStability)
    : m_retrieve(std::move(retrieve)),
      m_cachingState(Aws::MakeShared<Aws::Internal::CredentialsCachingStateImpl>(CREDENTIALS_CACHING_PROVIDER_LOG_TAG,
          [this]() -> Aws::Internal::RefreshResult<AWSCredentials> {
              AWSCredentials credentials = m_retrieve();
              if (credentials.IsEmpty())
              {
                  return Aws::Internal::RefreshResult<AWSCredentials>::Recoverable("credential source returned no credentials");
              }
              Aws::Utils::DateTime expiration = credentials.GetExpiration();
              if (!expiration.WasParseSuccessful())
              {
                  expiration = Aws::Utils::DateTime((std::chrono::time_point<std::chrono::system_clock>::max)());
              }
              return Aws::Internal::RefreshResult<AWSCredentials>::Success(credentials, expiration);
          },
          [](const AWSCredentials& credentials) { return credentials.GetAWSAccessKeyId(); },
          staticStability))
{
}

AWSCredentials CredentialsCachingProvider::GetAWSCredentials()
{
    auto outcome = m_cachingState->GetCredentials();
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CREDENTIALS_CACHING_PROVIDER_LOG_TAG, "Credential retrieve failed and no cached credentials are available, returning empty: " << outcome.GetError());
        return AWSCredentials();
    }
    return outcome.GetResult();
}

void CredentialsCachingProvider::Invalidate(const Aws::String& accessKeyId)
{
    m_cachingState->Invalidate(accessKeyId);
}
