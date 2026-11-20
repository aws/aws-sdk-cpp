/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once
#if !defined(AWS_CREDENTIALS_PROVIDER)
#define AWS_CREDENTIALS_PROVIDER

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/threading/ReaderWriterLock.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/client/RetryStrategy.h>
#include <memory>

namespace Aws
{
    namespace Client
    {
        struct ClientConfiguration;
    }
    namespace Auth
    {
        constexpr int REFRESH_THRESHOLD = 1000 * 60 * 5;

        constexpr int AWS_CREDENTIAL_PROVIDER_EXPIRATION_GRACE_PERIOD = 5 * 1000;

        /**
         * Returns the full path of the config file.
         */
        AWS_CORE_API Aws::String GetConfigProfileFilename(); //defaults to "config"

        /**
         * Returns the default profile name.
         * The value is the first non-empty value of the following:
         * 1. AWS_PROFILE environment variable
         * 2. AWS_DEFAULT_PROFILE environment variable
         * 3. The literal name "default"
         */
        AWS_CORE_API Aws::String GetConfigProfileName(); //defaults to "default"

        /*
         * Fetches credentials by executing the process in the parameter
         */
        AWS_CORE_API AWSCredentials GetCredentialsFromProcess(const Aws::String& process);

        /**
          * Abstract class for retrieving AWS credentials. Create a derived class from this to allow
          * various methods of storing and retrieving credentials. Examples would be cognito-identity, some encrypted store etc...
          */
        class AWS_CORE_API AWSCredentialsProvider
        {
        public:
            /**
             * Initializes provider. Sets last Loaded time count to 0, forcing a refresh on the
             * first call to GetAWSCredentials.
             */
            AWSCredentialsProvider() : m_lastLoadedMs(0)
            {
            }

            virtual ~AWSCredentialsProvider() = default;

            /**
             * The core of the credential provider interface. Override this method to control how credentials are retrieved.
             */
            virtual AWSCredentials GetAWSCredentials() = 0;

        protected:
            /**
             * The default implementation keeps up with the cache times and lets you know if it's time to refresh your internal caching
             *  to aid your implementation of GetAWSCredentials.
             */
            virtual bool IsTimeToRefresh(long reloadFrequency);
            virtual void Reload();
            mutable Aws::Utils::Threading::ReaderWriterLock m_reloadLock;
        private:
            long long m_lastLoadedMs;
        };

        /**
         * Simply a provider that always returns empty credentials. This is useful for a client that needs to make unsigned
         * calls.
         */
        class AWS_CORE_API AnonymousAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            /**
             * Returns empty credentials object.
             */
            inline AWSCredentials GetAWSCredentials() override { return AWSCredentials(); }
        };

        /**
          * A simple string provider. It takes the AccessKeyId and the SecretKey as constructor args and
          * provides them through the interface. This is the default class for AWSClients that take string
          * arguments for credentials.
          */
        class AWS_CORE_API SimpleAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            /**
             * Initializes object from awsAccessKeyId, awsSecretAccessKey, and sessionToken parameters. sessionToken parameter is defaulted to empty.
             */
            inline SimpleAWSCredentialsProvider(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey, const Aws::String& sessionToken = "")
                : m_credentials(awsAccessKeyId, awsSecretAccessKey, sessionToken)
            { }

            /**
            * Initializes object from credentials object. everything is copied.
            */
            inline SimpleAWSCredentialsProvider(const AWSCredentials& credentials)
                : m_credentials(credentials)
            { }

            /**
             * Returns the credentials this object was initialized with as an AWSCredentials object.
             */
            inline AWSCredentials GetAWSCredentials() override
            {
                return m_credentials;
            }

        private:
            AWSCredentials m_credentials;
        };

        /**
        * Reads AWS credentials from the Environment variables AWS_ACCESS_KEY_ID and AWS_SECRET_ACCESS_KEY and AWS_SESSION_TOKEN if they exist. If they
        * are not found, empty credentials are returned.
        */
        class AWS_CORE_API EnvironmentAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            /**
            * Reads AWS credentials from the Environment variables AWS_ACCESS_KEY_ID and AWS_SECRET_ACCESS_KEY and AWS_SESSION_TOKEN if they exist. If they
            * are not found, empty credentials are returned. Credentials are not cached.
            */
            AWSCredentials GetAWSCredentials() override;
        };

        /**
        * Credentials provider implementation that loads credentials from the Amazon
        * EC2 Instance Metadata Service.
        */
        class AWS_CORE_API InstanceProfileCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            /**
             * Initializes the provider to refresh credentials form the EC2 instance metadata service every 5 minutes.
             * Constructs an EC2MetadataClient using the default http stack (most likely what you want).
             */
            InstanceProfileCredentialsProvider(long refreshRateMs = REFRESH_THRESHOLD);

            /**
             * Initializes the provider to refresh credentials form the EC2 instance metadata service every 5 minutes,
             * uses a supplied EC2MetadataClient.
             */
            InstanceProfileCredentialsProvider(const std::shared_ptr<Aws::Config::EC2InstanceProfileConfigLoader>&, long refreshRateMs = REFRESH_THRESHOLD);

            /**
             * Initializes the provider using ClientConfiguration for IMDS settings.
             */
            InstanceProfileCredentialsProvider(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialProviderConfig, long refreshRateMs = REFRESH_THRESHOLD);

            /**
            * Retrieves the credentials if found, otherwise returns empty credential set.
            */
            AWSCredentials GetAWSCredentials() override;

        protected:
            void Reload() override;

        private:
            bool ExpiresSoon() const;
            void RefreshIfExpired();

            std::shared_ptr<Aws::Config::AWSProfileConfigLoader> m_ec2MetadataConfigLoader;
            long m_loadFrequencyMs;
        };
    } // namespace Auth
} // namespace Aws

#endif // !defined(AWS_CREDENTIALS_PROVIDER)
