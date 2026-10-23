/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/DateTime.h>
#include <functional>
#include <memory>

namespace Aws
{
    namespace Internal
    {
        class CredentialsCachingStateImpl;

        /**
         * RefreshFailurePolicy picks what CredentialsCachingProvider serves after a failed refresh.
         */
        enum class RefreshFailurePolicy
        {
            StaticStability,
            ServeUntilExpiry
        };

        /**
         * CredentialsCachingProvider caches another provider's credentials and refreshes them per the refresh lifecycle.
         */
        class AWS_CORE_API CredentialsCachingProvider final : public Aws::Auth::AWSCredentialsProvider
        {
        public:
            using RetrieveFunction = std::function<Aws::Auth::AWSCredentials()>;

            explicit CredentialsCachingProvider(RetrieveFunction retrieve,
                                                RefreshFailurePolicy failurePolicy = RefreshFailurePolicy::StaticStability);

            Aws::Auth::AWSCredentials GetAWSCredentials() override;

            /**
             * Invalidate marks the cached credentials for refresh if they match accessKeyId.
             */
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            RetrieveFunction m_retrieve;
            std::shared_ptr<CredentialsCachingStateImpl> m_cachingState;
        };
    } // namespace Internal
} // namespace Aws
