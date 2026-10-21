/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/config/AWSProfileConfigLoaderBase.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>

namespace Aws
{
    namespace Internal
    {
        class EC2MetadataClient;
    }

    namespace Auth
    {
        class AWSCredentialsProvider;
        class InstanceProfileCredentialsProvider;
    }

    namespace Config
    {
        static const char* const INSTANCE_PROFILE_KEY = "InstanceProfile";

        /**
         * Loads configuration from the EC2 Metadata Service
         */
        class AWS_CORE_API EC2InstanceProfileConfigLoader : public AWSProfileConfigLoader
        {
        public:
            /**
             * If client is nullptr, the default EC2MetadataClient will be created.
             */
            EC2InstanceProfileConfigLoader(const std::shared_ptr<Aws::Internal::EC2MetadataClient>& = nullptr);

            /**
             * Creates EC2MetadataClient using the provided CredentialProviderConfiguration.
             */
            EC2InstanceProfileConfigLoader(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialConfig);

            virtual ~EC2InstanceProfileConfigLoader() = default;

        protected:
            virtual bool LoadInternal() override;
        private:
            friend class Aws::Auth::InstanceProfileCredentialsProvider;

            bool RetrieveCredentials();
            Aws::Auth::AWSCredentials GetCredentials() const;
            void Invalidate(const Aws::String& accessKeyId);

            std::shared_ptr<Aws::Internal::EC2MetadataClient> m_ec2metadataClient;
            Aws::Auth::AWSCredentials RetrieveForCache();
            std::shared_ptr<Aws::Auth::AWSCredentialsProvider> m_cachingProvider;
        };
    }
}
