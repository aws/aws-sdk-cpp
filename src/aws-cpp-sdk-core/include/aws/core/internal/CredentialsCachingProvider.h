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
    namespace Internal
    {
        class CredentialsCachingStateImpl;

        /**
         * CredentialsCachingProvider caches another provider's credentials and refreshes them per the refresh lifecycle.
         */
        class AWS_CORE_API CredentialsCachingProvider final : public Aws::Auth::AWSCredentialsProvider
        {
        public:
            /**
             * CredentialsCachingProvider serves expired credentials after a failed refresh only when staticStability is set.
             */
            explicit CredentialsCachingProvider(std::shared_ptr<Aws::Auth::AWSCredentialsProvider> delegate, bool staticStability = true);

            Aws::Auth::AWSCredentials GetAWSCredentials() override;

            /**
             * Invalidate marks the cached credentials for refresh if they match accessKeyId.
             */
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            std::shared_ptr<Aws::Auth::AWSCredentialsProvider> m_delegate;
            std::shared_ptr<CredentialsCachingStateImpl> m_cachingState;
        };
    } // namespace Internal
} // namespace Aws
