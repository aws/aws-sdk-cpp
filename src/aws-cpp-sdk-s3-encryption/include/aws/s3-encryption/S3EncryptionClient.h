/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3/S3Client.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/core/client/AWSError.h>

namespace Aws
{
    namespace S3Encryption
    {
        struct AWS_S3ENCRYPTION_API S3EncryptionErrors
        {
            S3EncryptionErrors() = default;
            S3EncryptionErrors(const Aws::Utils::Crypto::CryptoErrors& error) :cryptoError(error), m_isS3Error(false) {}
            S3EncryptionErrors(const Aws::S3::S3Errors& error) :s3Error(error), m_isS3Error(true) {}

            inline bool IsS3Error() const { return m_isS3Error; }
            inline bool IsCryptoError() const { return !m_isS3Error; }

            union {
                Aws::Utils::Crypto::CryptoErrors cryptoError;
                Aws::S3::S3Errors s3Error;
            };
        private:
            bool m_isS3Error;
        };

        template<typename ERROR_TYPE>
        Aws::Client::AWSError<S3EncryptionErrors> BuildS3EncryptionError(const Aws::Client::AWSError<ERROR_TYPE>& error)
        {
            Aws::Client::AWSError<S3EncryptionErrors> s3EncryptionError = Aws::Client::AWSError<S3EncryptionErrors>(error.GetErrorType(), error.GetExceptionName(), error.GetMessage(), error.ShouldRetry());
            s3EncryptionError.SetResponseCode(error.GetResponseCode());
            s3EncryptionError.SetResponseHeaders(error.GetResponseHeaders());
            return s3EncryptionError;
        }

        typedef Aws::Utils::Outcome<Aws::S3::Model::PutObjectResult, Aws::Client::AWSError<S3EncryptionErrors>> S3EncryptionPutObjectOutcome;
        typedef Aws::Utils::Outcome<Aws::S3::Model::GetObjectResult, Aws::Client::AWSError<S3EncryptionErrors>> S3EncryptionGetObjectOutcome;

        class AWS_S3ENCRYPTION_API S3EncryptionClientBase
        {
        public:
            /*
            * Initialize the S3EncryptionClientBase with encryption materials, crypto configuration, and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientBase(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

            /*
            * Initialize the S3EncryptionClientBase with encryption materials, crypto configuration, AWS credentials and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientBase(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

            /*
            * Initialize the S3EncryptionClientBase with encryption materials, crypto configuration, AWS credentials provider and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientBase(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

            S3EncryptionClientBase(const S3EncryptionClientBase&) = delete;
            S3EncryptionClientBase& operator=(const S3EncryptionClientBase&) = delete;

            /*
            * Function to put an object encrypted to S3.
            * For KMSWithContext encryption materials, you can provide a context map as the KMS context for encrypting the CEK.
            * For other encryption materials, this context map must be an empty map.
            */
            S3EncryptionPutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request, const Aws::Map<Aws::String, Aws::String>& contextMap) const;

            /*
            * Function to get an object decrypted from S3.
            *
            * Range gets using this method are deprecated. Please see
            * <https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html> for more information
            */
            S3EncryptionGetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const;

            inline bool MultipartUploadSupported() const { return false; }

        protected:
            /*
            * Function to get the instruction file object of a encrypted object from S3. This instruction file object will be used to assist decryption.
            */
            Aws::S3::Model::GetObjectOutcome GetInstructionFileObject(const Aws::S3::Model::GetObjectRequest& originalGetRequest) const;

            Aws::UniquePtr<Aws::S3::S3Client> m_s3Client;
            Aws::S3Encryption::Modules::CryptoModuleFactory m_cryptoModuleFactory;
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
            Aws::S3Encryption::CryptoConfiguration m_cryptoConfig;
        };

        /**
         * @deprecated This class is in the maintenance mode, no new updates will be released, use S3EncryptionClientV2.
         */
        class
        AWS_DEPRECATED("This class is in the maintenance mode, no new updates will be released, use S3EncryptionClientV2. Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.")
        AWS_S3ENCRYPTION_API S3EncryptionClient : public S3EncryptionClientBase
        {
        public:
            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(encryptionMaterials, cryptoConfig, clientConfiguration)
            {}

            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, AWS credentials and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(encryptionMaterials, cryptoConfig, credentials, clientConfiguration)
            {}

            /*
            * Initialize the S3 Encryption Client with encryption materials, crypto configuration, AWS credentials provider and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClient(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
                const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(encryptionMaterials, cryptoConfig, credentialsProvider, clientConfiguration)
            {}

            /*
            * Function to put an object encrypted to S3.
            */
            S3EncryptionPutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const { return S3EncryptionClientBase::PutObject(request, {}); }
        };

        /**
         * S3EncryptionClientV2 enforce the secure postures for customers. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html
         * Examples: https://github.com/awsdocs/aws-doc-sdk-examples/blob/master/cpp/example_code/s3encryption/s3Encryption.cpp
         */
        class AWS_S3ENCRYPTION_API S3EncryptionClientV2 : public S3EncryptionClientBase
        {
        public:
            /*
            * Initialize the S3 Encryption Client V2 with crypto configuration v2, and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientV2(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig,
                const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(cryptoConfig.GetEncryptionMaterials(), CryptoConfiguration(), clientConfig)
            {
                Init(cryptoConfig);
            }


            /*
            * Initialize the S3 Encryption Client V2 with crypto configuration v2, AWS credentials and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientV2(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig, const Aws::Auth::AWSCredentials& credentials,
                const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(cryptoConfig.GetEncryptionMaterials(), CryptoConfiguration(), credentials, clientConfig)
            {
                Init(cryptoConfig);
            }

            /*
            * Initialize the S3 Encryption Client V2 with crypto configuration v2, AWS credentials provider and a client configuration. If no client configuration is supplied,
            * the default client configuration will be used.
            */
            S3EncryptionClientV2(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig, const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                const Aws::Client::ClientConfiguration& clientConfig = Aws::Client::ClientConfiguration())
                : S3EncryptionClientBase(cryptoConfig.GetEncryptionMaterials(), CryptoConfiguration(), credentialsProvider, clientConfig)
            {
                Init(cryptoConfig);
            }

            S3EncryptionClientV2(const S3EncryptionClientV2&) = delete;
            S3EncryptionClientV2& operator=(const S3EncryptionClientV2&) = delete;

        private:
            void Init(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig);
        };
    }
}
