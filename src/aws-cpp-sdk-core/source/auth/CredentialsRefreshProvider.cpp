/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/CredentialsRefreshProvider.h>
#include <aws/core/internal/CredentialsRefresh.h> // full refresh engine (kept out of the public header)
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Auth;
using namespace Aws::Utils;

namespace Aws
{
    namespace Internal
    {
        class AWS_CORE_LOCAL CredentialsRefreshStateImpl : public CredentialsRefreshState<Aws::Auth::AWSCredentials>
        {
        public:
            using CredentialsRefreshState<Aws::Auth::AWSCredentials>::CredentialsRefreshState;
        };
    }
}

static const char CREDENTIALS_REFRESH_PROVIDER_LOG_TAG[] = "CredentialsRefreshProvider";

CredentialsRefreshProvider::CredentialsRefreshProvider(std::shared_ptr<CredentialsSource> source)
    : m_source(std::move(source)),
      m_refreshState(new Aws::Internal::CredentialsRefreshStateImpl(
          [this]() { return m_source->FetchCredentials(); },
          [this]() { return CurrentTime(); }))
{
}

CredentialsRefreshProvider::~CredentialsRefreshProvider() = default;

AWSCredentials CredentialsRefreshProvider::GetAWSCredentials()
{
    auto outcome = m_refreshState->GetCredentials();
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(CREDENTIALS_REFRESH_PROVIDER_LOG_TAG, "Credential refresh failed, returning empty credentials: " << outcome.GetError());
        return AWSCredentials();
    }
    return outcome.GetResult();
}

void CredentialsRefreshProvider::Invalidate()
{
    m_refreshState->Invalidate();
}

DateTime CredentialsRefreshProvider::CurrentTime() const
{
    return DateTime::Now();
}
