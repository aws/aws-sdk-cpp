/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
namespace Aws
{
    namespace S3Encryption
    {
        class S3EncryptionClient;

        enum class StorageMethod
        {
            METADATA,
            INSTRUCTION_FILE
        };

        enum class CryptoMode
        {
            /*
             * Encrypt with a non-authenticated mode of operation.
             *
             * NOTE: This feature is in maintenance mode, no new updates will be released.
             * Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.
             */
            ENCRYPTION_ONLY,
            /*
             * Encrypt with an authenticated mode of operation, but do not require that objects be authenticated on Get.
             *
             * NOTE: This feature is in maintenance mode, no new updates will be released.
             * Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.
             */
            AUTHENTICATED_ENCRYPTION,
            /*
             * Encrypt and decrypt with an authenticated mode of operation only.
             */
            STRICT_AUTHENTICATED_ENCRYPTION
        };

        enum class SecurityProfile
        {
            V2, // Client decrypt objects encrypted using best practice key wrap algorithms (KMS_CONTEXT and AES_GCM ) and best practice content crypto schemes (AES_GCM), but does not require Key Commitment.
            V2_AND_LEGACY // Client will try to decrypt objects encrypted using all key wrap algorithms (KMS_CONTEXT, KMS, AES_KeyWrap, AES_GCM) and content crypto schemes (AES_GCM, AES_CBC), and does not require Key Commitment.
        };

        enum class CommitmentPolicy {
            FORBID_ENCRYPT_ALLOW_DECRYPT, // Encrypt as V2, decrypt any
            REQUIRE_ENCRYPT_ALLOW_DECRYPT, // Encrypt as V3, decrypt any
            REQUIRE_ENCRYPT_REQUIRE_DECRYPT // Encrypt as V3, decrypt only V3
        };

        //= ../specification/s3-encryption/decryption.md#ranged-gets
        //= type=implication
        //# The S3EC MAY support the "range" parameter on GetObject which specifies a subset of bytes to download and decrypt.
        enum class RangeGetMode
        {
            DISABLED, // Range get is not allowed
            ALL,    // Range get is allowed
        };

        enum class AlgorithmSuite {
            AES_GCM,
            // AES_GCM_WITH_COMMITMENT is AES_GCM, but with key commitment.
            // That is, the encrypted key is used to derive both an encryption key and a commitment key
            // The commitment key is stored in the meta data.
            // On decrypt, commitment key is derived and must match the stored commitment key.
            AES_GCM_WITH_COMMITMENT
        };

        class AWS_S3ENCRYPTION_API CryptoConfiguration
        {
        public:
            /*
            * Default constructor.
            */
            CryptoConfiguration();

            /*
            * Constructor that accepts a storage method and defaults the cryptoMode to authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMethod);

            /*
            * Constructor that accepts a crypto mode and defaults the storage method to metadata.
            */
            CryptoConfiguration(CryptoMode cryptoMode);

            /*
            * Constructor that accepts storage method and crypto mode. Default storage method is metadata and default crypto mode is authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode);

            /**
            * Gets the underlying storage mode.
            */
            inline StorageMethod GetStorageMethod() const
            {
                return m_storageMethod;
            }

            /**
            * Gets the underlying crypto mode.
            */
            inline CryptoMode GetCryptoMode() const
            {
                return m_cryptoMode;
            }

            /**
            * Gets the underlying AlgorithmSuite.
            */
            inline AlgorithmSuite GetEncryptionAlgorithm() const
            {
                return m_algorithmSuite;
            }

            /**
            * Gets the underlying CommitmentPolicy.
            */
            inline CommitmentPolicy GetCommitmentPolicy() const
            {
                return m_commitmentPolicy;
            }

            /**
            * Sets the underlying storage method. Copies from parameter storageMethod.
            */
            inline void SetStorageMethod(StorageMethod storageMethod)
            {
                m_storageMethod = storageMethod;
            }

            /**
            * Sets the underlying cryptoMode. Copies from parameter cryptoMode
            */
            inline void SetCryptoMode(CryptoMode cryptoMode)
            {
                m_cryptoMode = cryptoMode;
            }

        private:
            inline void SetSecurityProfile(SecurityProfile profile) { m_securityProfile = profile; }
            inline void SetUnAuthenticatedRangeGet(RangeGetMode mode) { m_unAuthenticatedRangeGet = mode; }
            inline RangeGetMode GetUnAuthenticatedRangeGet() const { return m_unAuthenticatedRangeGet; }
            inline SecurityProfile GetSecurityProfile() const { return m_securityProfile; }
            inline void SetCommitmentPolicy(CommitmentPolicy commitmentPolicy) { m_commitmentPolicy = commitmentPolicy; }
            inline void SetEncryptionAlgorithm(AlgorithmSuite algorithmSuite) { m_algorithmSuite = algorithmSuite; }

            StorageMethod m_storageMethod;
            CryptoMode m_cryptoMode;
            RangeGetMode m_unAuthenticatedRangeGet;
            SecurityProfile m_securityProfile;
            AlgorithmSuite m_algorithmSuite;
            CommitmentPolicy m_commitmentPolicy;

            friend class S3EncryptionClientBase;
            friend class S3EncryptionClientV2;
            friend class S3EncryptionClientV3;
        };

        class AWS_S3ENCRYPTION_API CryptoConfigurationV2
        {
        public:
            CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials);
            CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials);

            inline void SetSecurityProfile(SecurityProfile profile) { m_securityProfile = profile; }
            inline void SetUnAuthenticatedRangeGet(RangeGetMode mode) { m_unAuthenticatedRangeGet = mode; }
            inline void SetStorageMethod(StorageMethod storageMethod) { m_storageMethod = storageMethod; }

            inline SecurityProfile GetSecurityProfile() const { return m_securityProfile; }
            inline RangeGetMode GetUnAuthenticatedRangeGet() const { return m_unAuthenticatedRangeGet; }
            inline StorageMethod GetStorageMethod() const { return m_storageMethod; }
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> GetEncryptionMaterials() const { return m_encryptionMaterials; }
        private:
            StorageMethod m_storageMethod;
            RangeGetMode m_unAuthenticatedRangeGet;
            SecurityProfile m_securityProfile;
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
        };

        //= ../specification/s3-encryption/client.md#aws-sdk-compatibility
        //= type=implication
        //# The S3EC MUST provide a different set of configuration options than the conventional S3 client.
        class AWS_S3ENCRYPTION_API CryptoConfigurationV3
        {
        public:
            CryptoConfigurationV3(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials);
            CryptoConfigurationV3(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials);

            inline void AllowLegacy(bool allow = true) { m_securityProfile = (allow ? SecurityProfile::V2_AND_LEGACY : SecurityProfile::V2); }
            inline void SetCommitmentPolicy(CommitmentPolicy commitmentPolicy) { m_commitmentPolicy = commitmentPolicy; }
            inline void SetUnAuthenticatedRangeGet(RangeGetMode mode) { m_unAuthenticatedRangeGet = mode; }
            inline void SetStorageMethod(StorageMethod storageMethod) { m_storageMethod = storageMethod; }

            inline bool GetAllowLegacy() const { return m_securityProfile == SecurityProfile::V2_AND_LEGACY; }
            inline RangeGetMode GetUnAuthenticatedRangeGet() const { return m_unAuthenticatedRangeGet; }
            inline StorageMethod GetStorageMethod() const { return m_storageMethod; }
            inline CommitmentPolicy GetCommitmentPolicy() const { return m_commitmentPolicy; }
            inline SecurityProfile GetSecurityProfile() const { return m_securityProfile; }
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> GetEncryptionMaterials() const { return m_encryptionMaterials; }

        private:
            //= ../specification/s3-encryption/client.md#enable-legacy-wrapping-algorithms
            //= type=implication
            //# The S3EC MUST support the option to enable or disable legacy wrapping algorithms.

            //= ../specification/s3-encryption/client.md#enable-legacy-unauthenticated-modes
            //= type=implication
            //# The S3EC MUST support the option to enable or disable legacy unauthenticated modes (content encryption algorithms).

            //= ../specification/s3-encryption/client.md#enable-delayed-authentication
            //= type=implication
            //# The S3EC MUST support the option to enable or disable Delayed Authentication mode.

            //= ../specification/s3-encryption/client.md#instruction-file-configuration
            //= type=implication
            //# The S3EC MAY support the option to provide Instruction File Configuration during its initialization.
            //# If the S3EC in a given language supports Instruction Files, then it MUST accept Instruction File Configuration during its initialization.
            //# In this case, the Instruction File Configuration SHOULD be optional, such that its default configuration is used when none is provided.

            //= ../specification/s3-encryption/client.md#key-commitment
            //= type=implication
            //# The S3EC MUST support configuration of the [Key Commitment policy](./key-commitment.md) during its initialization.

            StorageMethod m_storageMethod;
            RangeGetMode m_unAuthenticatedRangeGet;
            SecurityProfile m_securityProfile;
            std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials> m_encryptionMaterials;
            CommitmentPolicy m_commitmentPolicy;
        };
    }
}
