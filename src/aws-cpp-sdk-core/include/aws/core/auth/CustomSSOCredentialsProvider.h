/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/auth/SSOCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>

namespace Aws {
    namespace Auth {
        class AWS_CORE_API CustomSSOCredentialsProvider : public SSOCredentialsProvider {
        public:
            CustomSSOCredentialsProvider(const Aws::Client::ClientConfiguration& clientConfig)
                : SSOCredentialsProvider(), m_clientConfig(clientConfig)
            {
            }

            void Reload() override {
                Aws::Client::ClientConfiguration config = m_clientConfig;
                config.scheme = Aws::Http::Scheme::HTTPS;
                config.region = m_ssoRegion;

                m_client = Aws::MakeUnique<Aws::Internal::SSOCredentialsClient>(SSO_CREDENTIALS_PROVIDER_LOG_TAG, config);

                SSOCredentialsProvider::Reload();
            }

        private:
            Aws::Client::ClientConfiguration m_clientConfig;
        };
    } // namespace Auth
} // namespace Aws