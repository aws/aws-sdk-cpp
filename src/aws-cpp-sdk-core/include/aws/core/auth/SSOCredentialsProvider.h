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

            // Marks the cached credentials for refresh, only if they are the ones that were rejected.
            void Invalidate(const Aws::String& accessKeyId) override;

        private:
            // Fetch-only: one SSO token read plus one GetRoleCredentials call, no cache of its own.
            // Composed into m_cachingProvider below, which owns the refresh lifecycle.
            class SSOFetchOnlyProvider : public AWSCredentialsProvider
            {
            public:
                SSOFetchOnlyProvider(Aws::String profile, std::shared_ptr<const Aws::Client::ClientConfiguration> config);
                AWSCredentials GetAWSCredentials() override;

            private:
                Aws::String LoadAccessTokenFile(const Aws::String& ssoAccessTokenPath);

                Aws::UniquePtr<Aws::Internal::SSOCredentialsClient> m_client;
                Aws::String m_profileToUse;
                Aws::String m_ssoAccountId;
                // The AWS region where the SSO directory for the given sso_start_url is hosted.
                // This is independent of the general region configuration and MUST NOT be conflated.
                Aws::String m_ssoRegion;
                // The expiration time of the accessToken.
                Aws::Utils::DateTime m_expiresAt;
                Aws::Auth::SSOBearerTokenProvider m_bearerTokenProvider;
                std::shared_ptr<const Aws::Client::ClientConfiguration> m_config;
            };

            std::shared_ptr<CredentialsCachingProvider> m_cachingProvider;
        };
    } // namespace Auth
} // namespace Aws
