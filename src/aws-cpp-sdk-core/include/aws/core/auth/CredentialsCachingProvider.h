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
         * CredentialsCachingProvider caches another provider's credentials and refreshes them per the refresh lifecycle.
         */
        class AWS_CORE_API CredentialsCachingProvider final : public AWSCredentialsProvider
        {
        public:
            explicit CredentialsCachingProvider(std::shared_ptr<AWSCredentialsProvider> delegate);
            ~CredentialsCachingProvider() override;

            AWSCredentials GetAWSCredentials() override;

            // Invalidate marks the cached credentials for refresh if they match accessKeyId.
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            std::shared_ptr<AWSCredentialsProvider> m_delegate;
            std::unique_ptr<Aws::Internal::CredentialsCachingStateImpl> m_cachingState;
        };
    } // namespace Auth
} // namespace Aws
