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
        class CredentialsCachingProvider;
    }

    namespace Auth
    {
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

            // RetrieveCredentials makes one IMDS call and stores the credentials in m_profiles on success.
            bool RetrieveCredentials();
            // IMDSRetrieveProvider retrieves credentials for m_cachingProvider.
            class IMDSRetrieveProvider;
            // GetCredentials returns the cached credentials, refreshing them first when a refresh is due.
            Aws::Auth::AWSCredentials GetCredentials() const;
            // Invalidate marks the cached credentials for refresh if they match accessKeyId.
            void Invalidate(const Aws::String& accessKeyId);

            std::shared_ptr<Aws::Internal::EC2MetadataClient> m_ec2metadataClient;
            // m_cachingProvider lives in the loader so direct users of the loader also get the refresh lifecycle.
            std::shared_ptr<Aws::Internal::CredentialsCachingProvider> m_cachingProvider;
        };
    }
}
