/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/CryptoConfiguration.h>
namespace Aws
{
    namespace S3Encryption
    {

        CryptoConfiguration::CryptoConfiguration() :
            m_storageMethod(StorageMethod::METADATA),
            m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY),
            m_algorithmSuite(AlgorithmSuite::AES_GCM),
            m_commitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT)

        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMethod) :
            m_storageMethod(storageMethod),
            m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY),
            m_algorithmSuite(AlgorithmSuite::AES_GCM),
            m_commitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT)
        {
        }

        CryptoConfiguration::CryptoConfiguration(CryptoMode cryptoMode) :
            m_storageMethod(StorageMethod::METADATA),
            m_cryptoMode(cryptoMode),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY),
            m_algorithmSuite(AlgorithmSuite::AES_GCM),
            m_commitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT)
        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode) :
            m_storageMethod(storageMode),
            m_cryptoMode(cryptoMode),
            m_unAuthenticatedRangeGet(RangeGetMode::ALL),
            m_securityProfile(SecurityProfile::V2_AND_LEGACY),
            m_algorithmSuite(AlgorithmSuite::AES_GCM),
            m_commitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT)
        {
        }

        CryptoConfigurationV2::CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials) :
            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials)
        {
        }

        CryptoConfigurationV2::CryptoConfigurationV2(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials) :
            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials)
        {
        }

        CryptoConfigurationV3::CryptoConfigurationV3(const std::shared_ptr<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>& materials) :
            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials),
            m_commitmentPolicy(CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT)
        {
        }

        CryptoConfigurationV3::CryptoConfigurationV3(const std::shared_ptr<Aws::S3Encryption::Materials::SimpleEncryptionMaterialsWithGCMAAD>& materials) :
            //= ../specification/s3-encryption/data-format/metadata-strategy.md#object-metadata
            //= type=implication
            //# By default, the S3EC MUST store content metadata in the S3 Object Metadata.

            //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
            //= type=implication
            //# Instruction File writes MUST NOT be enabled by default.

            //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
            //= type=implication
            //# Instruction File writes MUST be optionally configured during client creation or on each PutObject request.

            //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
            //= type=implication
            //# The S3EC MUST support writing some or all (depending on format) content metadata to an Instruction File.

            //= ../specification/s3-encryption/client.md#enable-legacy-wrapping-algorithms
            //= type=implication
            //# The option to enable legacy wrapping algorithms MUST be set to false by default.

            //= ../specification/s3-encryption/client.md#enable-legacy-unauthenticated-modes
            //= type=implication
            //# The option to enable legacy unauthenticated modes MUST be set to false by default.

            //= ../specification/s3-encryption/client.md#enable-delayed-authentication
            //= type=implication
            //# Delayed Authentication mode MUST be set to false by default.

            m_storageMethod(StorageMethod::METADATA),
            m_unAuthenticatedRangeGet(RangeGetMode::DISABLED),
            m_securityProfile(SecurityProfile::V2),
            m_encryptionMaterials(materials),
            m_commitmentPolicy(CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT)
        {
        }
    }
}
