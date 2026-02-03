#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
//#include <aws/core/auth/AWSCredentials.h>
//#include <aws/crt/auth/Credentials.h>
#include <memory>

namespace Aws
{
    namespace Auth
    {
        /**
         * CRT-based credentials provider that sources credentials from config files with full SEP compliance.
         * Supports assume role, credential_source, role chaining, and all SEP scenarios.
         */
        class AWS_CORE_API CRTProfileCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            CRTProfileCredentialsProvider();
            explicit CRTProfileCredentialsProvider(const char* profileName);
            ~CRTProfileCredentialsProvider();

            CRTProfileCredentialsProvider(const CRTProfileCredentialsProvider&) = delete;
            CRTProfileCredentialsProvider& operator=(const CRTProfileCredentialsProvider&) = delete;

            AWSCredentials GetAWSCredentials() override;

        protected:
            void Reload() override;

        private:
            class Impl;
            std::shared_ptr<Impl> m_impl;
        };
    }
}
