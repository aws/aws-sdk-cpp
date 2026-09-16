/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/DateTime.h>
#include <memory>

namespace Aws
{
    namespace Internal { class CredentialsCachingStateImpl; }
    namespace Auth
    {
        /**
         * Caches an AWSCredentialsProvider's credentials: advisory/mandatory refresh windows, jittered
         * backoff, a single in-flight fetch, and serving the last-good credentials when a fetch fails.
         * Empty credentials from the wrapped provider mark a failed fetch.
         */
        class AWS_CORE_API CredentialsCachingProvider final : public AWSCredentialsProvider
        {
        public:
            explicit CredentialsCachingProvider(std::shared_ptr<AWSCredentialsProvider> delegate);
            ~CredentialsCachingProvider() override;

            AWSCredentials GetAWSCredentials() override;

            // Marks the cached credentials for refresh, only if they are the ones that were rejected.
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            std::shared_ptr<AWSCredentialsProvider> m_delegate;
            std::unique_ptr<Aws::Internal::CredentialsCachingStateImpl> m_cachingState;
        };
    } // namespace Auth
} // namespace Aws
