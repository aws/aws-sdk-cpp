/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

#include <atomic>
#include <memory>

namespace Aws {
namespace Crt {
namespace Auth {
class ICredentialsProvider;
class Credentials;
}
}
}

namespace Aws
{
    namespace Auth
    {
        /**
         * To support retrieving credentials of STS AssumeRole with web identity.
         * Note that STS accepts request with protocol of queryxml. Calling GetAWSCredentials() will trigger (if expired)
         * a query request using AWSHttpResourceClient under the hood.
         */
        class AWS_CORE_API STSAssumeRoleWebIdentityCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            STSAssumeRoleWebIdentityCredentialsProvider();
            STSAssumeRoleWebIdentityCredentialsProvider(Aws::Client::ClientConfiguration::CredentialProviderConfiguration config);
            virtual ~STSAssumeRoleWebIdentityCredentialsProvider();

            /**
             * Retrieves the credentials if found, otherwise returns empty credential set.
             */
            AWSCredentials GetAWSCredentials() override;

        protected:
            void Reload() override;

        private:
            enum class STATE {
              INITIALIZED,
              SHUT_DOWN,
            } m_state{STATE::SHUT_DOWN};
            mutable std::mutex m_refreshMutex;
            mutable std::condition_variable m_refreshSignal;
            std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> m_credentialsProvider;
            std::chrono::milliseconds m_providerFuturesTimeoutMs;

            // Thread-safe credential fetch coordination
            mutable std::atomic<bool> m_refreshInProgress{false};
            mutable std::shared_ptr<AWSCredentials> m_pendingCredentials;

            // Helper methods for credential retrieval
            AWSCredentials waitForSharedCredentials() const;
            AWSCredentials extractCredentialsFromCrt(const Aws::Crt::Auth::Credentials& crtCredentials) const;
            AWSCredentials fetchCredentialsAsync();
        };
    } // namespace Auth
} // namespace Aws
