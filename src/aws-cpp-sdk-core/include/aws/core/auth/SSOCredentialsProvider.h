/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/bearer-token-provider/SSOBearerTokenProvider.h>
#include <memory>

namespace Aws {
    namespace Auth {
        class CredentialsCachingProvider;

        /**
         * To support usage of SSO credentials
         */
        class AWS_CORE_API SSOCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            SSOCredentialsProvider();
            explicit SSOCredentialsProvider(const Aws::String& profile);
            explicit SSOCredentialsProvider(const Aws::String& profile, std::shared_ptr<const Aws::Client::ClientConfiguration> config);

            /**
             * Retrieves the credentials if found, otherwise returns empty credential set.
             */
            AWSCredentials GetAWSCredentials() override;

            /**
             * Invalidate marks the cached credentials for refresh if they match accessKeyId.
             */
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            // SSORetrieveProvider retrieves credentials for m_cachingProvider.
            class SSORetrieveProvider;

            std::shared_ptr<CredentialsCachingProvider> m_cachingProvider;
        };
    } // namespace Auth
} // namespace Aws
