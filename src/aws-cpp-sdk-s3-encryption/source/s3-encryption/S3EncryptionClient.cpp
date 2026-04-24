/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/logging/LogMacros.h>

// TODO: temporary fix for naming conflicts on Windows.
#ifdef _WIN32
#ifdef GetObject
#undef GetObject
#endif
#endif

#include <aws/s3-encryption/modules/CryptoModule.h>
#include <aws/s3-encryption/S3EncryptionClient.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Client;

namespace Aws
{
    namespace S3Encryption
    {
        static const char* const ALLOCATION_TAG = "S3EncryptionClient";
        using namespace Aws::S3;
        using namespace Aws::S3::Model;

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->AppendToUserAgent("ft/S3CryptoV1n");
        }

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, credentials, Aws::MakeShared<S3::Endpoint::S3EndpointProvider>(ALLOCATION_TAG), clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->AppendToUserAgent("ft/S3CryptoV1n");
        }

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials,
            const Aws::S3Encryption::CryptoConfiguration& cryptoConfig, const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider, const Client::ClientConfiguration& clientConfiguration) :
            m_s3Client(Aws::MakeUnique<S3Client>(ALLOCATION_TAG, credentialsProvider, Aws::MakeShared<S3::Endpoint::S3EndpointProvider>(ALLOCATION_TAG), clientConfiguration)), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->AppendToUserAgent("ft/S3CryptoV1n");
        }

        S3EncryptionClientBase::S3EncryptionClientBase(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials,
            const Aws::S3Encryption::CryptoConfiguration& cryptoConfig,
            const std::function<Aws::UniquePtr<S3::S3Client> ()>& s3ClientFactory) :
            m_s3Client(s3ClientFactory()), m_cryptoModuleFactory(), m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig)
        {
            m_s3Client->AppendToUserAgent("ft/S3CryptoV1n");
        }

        bool S3EncryptionClientBase::ValidateStorageMethod(StorageMethod s)
        {
            if (s != StorageMethod::METADATA && s != StorageMethod::INSTRUCTION_FILE) {
                m_error = "Invalid StorageMethod used.";
                return true;
            }
            return false;
        }

        bool S3EncryptionClientBase::ValidateSecurityProfile(SecurityProfile s)
        {
            if (s != SecurityProfile::V2 && s != SecurityProfile::V2_AND_LEGACY) {
                m_error = "Invalid SecurityProfile used.";
                return true;
            }
            return false;
        }

        bool S3EncryptionClientBase::ValidateCommitmentPolicy(CommitmentPolicy s)
        {
            if (s != CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT && s != CommitmentPolicy::REQUIRE_ENCRYPT_ALLOW_DECRYPT && s != CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT) {
                m_error = "Invalid CommitmentPolicy used.";
                return true;
            }
            return false;
        }

        bool S3EncryptionClientBase::ValidateRangeGetMode(RangeGetMode s)
        {
            if (s != RangeGetMode::DISABLED && s != RangeGetMode::ALL) {
                m_error = "Invalid RangeGetMode used.";
                return true;
            }
            return false;
        }

        S3EncryptionPutObjectOutcome S3EncryptionClientBase::PutObject(const Aws::S3::Model::PutObjectRequest& request, const Aws::Map<Aws::String, Aws::String>& contextMap) const
        {
            if (!m_error.empty()) {
               return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(
                  S3Errors::INVALID_PARAMETER_VALUE, "MaterialsDescriptionMismatch",
                  m_error, false/*not retryable*/)));
            }
            //= ../specification/s3-encryption/encryption.md#content-encryption
            //= type=implication
            //# The S3EC MUST use the encryption algorithm configured during [client](./client.md) initialization.
            auto module = m_cryptoModuleFactory.FetchCryptoModule(m_encryptionMaterials, m_cryptoConfig);
            auto putObjectFunction = [this](const Aws::S3::Model::PutObjectRequest& putRequest) { return m_s3Client->PutObject(putRequest); };
            return module->PutObjectSecurely(request, putObjectFunction, contextMap);
        }

      bool MapsEqual(const Aws::Map<Aws::String, Aws::String>& passed, const Aws::Map<Aws::String, Aws::String>& stored)
      {
        // everything in passed must be in stored, with the same value.
        auto stored_end = stored.end();
        auto passed_end = passed.end();
        for (const auto& pair : passed) {
            auto it = stored.find(pair.first);
            if (it == stored_end) return false;
            if (it->second != pair.second) return false;
        }

        // everything in stored, if it does not begin with 'amz:' must be in passed.
        // if it is, then we already checked the value
        for (const auto& pair : stored) {
          if (strcmp(pair.first.c_str(),  Materials::kmsEncryptionContextKey)
              && strcmp(pair.first.c_str(),Materials::cmkID_Identifier)) {
            auto it = passed.find(pair.first);
            if (it == passed_end) return false;
          }
        }
        return true;
      }

      S3EncryptionGetObjectOutcome S3EncryptionClientBase::GetObject(const Aws::S3::Model::GetObjectRequest & request) const
      {
        return GetObjectInner(request, nullptr);
      }
      S3EncryptionGetObjectOutcome S3EncryptionClientBase::GetObject(const Aws::S3::Model::GetObjectRequest & request, const Aws::Map<Aws::String, Aws::String>& contextMap) const
      {
        return GetObjectInner(request, &contextMap);
      }
      S3EncryptionGetObjectOutcome S3EncryptionClientBase::GetObjectInner(const Aws::S3::Model::GetObjectRequest & request, const Aws::Map<Aws::String, Aws::String> * contextMap) const
        {
            if (!m_error.empty()) {
               return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(
                  S3Errors::INVALID_PARAMETER_VALUE, "MaterialsDescriptionMismatch",
                  m_error, false/*not retryable*/)));
            }
            Aws::S3::Model::HeadObjectRequest headRequest;
            headRequest.WithBucket(request.GetBucket());
            headRequest.WithKey(request.GetKey());
            Aws::S3::Model::HeadObjectOutcome headOutcome = m_s3Client->HeadObject(headRequest);
            if (!headOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Head Request not successful: "
                    << headOutcome.GetError().GetExceptionName() << " : "
                    << headOutcome.GetError().GetMessage());
                return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(headOutcome.GetError()));
            }

            //= ../specification/s3-encryption/data-format/content-metadata.md#determining-s3ec-object-status
            //= type=implication
            //# If the object matches none of the V1/V2/V3 formats, the S3EC MUST attempt to get the instruction file.

            auto headMetadata = headOutcome.GetResult().GetMetadata();
            auto metadataEnd = headMetadata.end();
            CryptoConfiguration decryptionCryptoConfig;
            headMetadata.find(CONTENT_KEY_HEADER) == metadataEnd && headMetadata.find(DEPRECATED_CONTENT_KEY_HEADER) == metadataEnd
            && headMetadata.find(ENCRYPTED_DATA_KEY_V3) == metadataEnd
                ? decryptionCryptoConfig.SetStorageMethod(StorageMethod::INSTRUCTION_FILE)
                : decryptionCryptoConfig.SetStorageMethod(StorageMethod::METADATA);

            ContentCryptoMaterial contentCryptoMaterial;
            if (decryptionCryptoConfig.GetStorageMethod() == StorageMethod::INSTRUCTION_FILE)
            {
                GetObjectOutcome instructionOutcome = GetInstructionFileObject(request);
                if (!instructionOutcome.IsSuccess())
                {
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(instructionOutcome.GetError()));
                }
                Handlers::InstructionFileHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(instructionOutcome.GetResult(), headOutcome.GetResult());
            }
            else
            {
                Handlers::MetadataHandler handler;
                contentCryptoMaterial = handler.ReadContentCryptoMaterial(headOutcome.GetResult());
            }
            if (contentCryptoMaterial.Fail()) {
                return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(
                  S3Errors::VALIDATION, "BadMetaData", contentCryptoMaterial.Error(), false/*not retryable*/)));
            }
            if (contextMap && !MapsEqual(*contextMap, contentCryptoMaterial.GetMaterialsDescription()))
            {
               return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(
                  S3Errors::INVALID_ACTION, "MaterialsDescriptionMismatch",
                  "Provided encryption context does not match information retrieved from S3", false/*not retryable*/)));
            }

            //= ../specification/s3-encryption/client.md#enable-delayed-authentication
            //# When enabled, the S3EC MAY release plaintext from a stream which has not been authenticated.
            //# When disabled the S3EC MUST NOT release plaintext from a stream which has not been authenticated.

            if (request.RangeHasBeenSet() && m_cryptoConfig.GetUnAuthenticatedRangeGet() == RangeGetMode::DISABLED)
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Unable to perform range get request: Range get support has been disabled. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html");
                return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "RangeGetFailed",
                            "Unable to perform range get request: Range get support has been disabled. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html", false/*not retryable*/)));
            }

            if (m_cryptoConfig.GetSecurityProfile() == SecurityProfile::V2)
            {
                //= ../specification/s3-encryption/decryption.md#legacy-decryption
                //# The S3EC MUST NOT decrypt objects encrypted using legacy unauthenticated algorithm suites unless specifically configured to do so.

                //= ../specification/s3-encryption/client.md#enable-legacy-wrapping-algorithms
                //# When enabled, the S3EC MUST be able to decrypt objects encrypted with all supported wrapping algorithms (both legacy and fully supported).
                //# When disabled, the S3EC MUST NOT decrypt objects encrypted using legacy wrapping algorithms; it MUST throw an exception when attempting to decrypt an object encrypted with a legacy wrapping algorithm.
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::AES_GCM &&
                    contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::KMS_CONTEXT)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object");
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "DecryptV1EncryptSchemaFailed",
                                "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object.", false/*not retryable*/)));
                }

                //= ../specification/s3-encryption/decryption.md#legacy-decryption
                //# If the S3EC is not configured to enable legacy unauthenticated content decryption, the client MUST throw an exception when attempting to decrypt an object encrypted with a legacy unauthenticated algorithm suite.

                //= ../specification/s3-encryption/client.md#enable-legacy-unauthenticated-modes
                //# When enabled, the S3EC MUST be able to decrypt objects encrypted with all content encryption algorithms (both legacy and fully supported).
                //# When disabled, the S3EC MUST NOT decrypt objects encrypted using legacy content encryption algorithms; it MUST throw an exception when attempting to decrypt an object encrypted with a legacy content encryption algorithm.
                if (!IsGCM(contentCryptoMaterial.GetContentCryptoScheme()))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object");
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "DecryptV1EncryptSchemaFailed",
                                "The requested object is encrypted with V1 encryption schemas that have been disabled by client configuration securityProfile=V2. Retry with V2_AND_LEGACY enabled or re-encrypt the object.", false/*not retryable*/)));
                }
            }

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is FORBID_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST allow decryption using algorithm suites which do not support key commitment.

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is REQUIRE_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST allow decryption using algorithm suites which do not support key commitment.

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is REQUIRE_ENCRYPT_REQUIRE_DECRYPT, the S3EC MUST NOT allow decryption using algorithm suites which do not support key commitment.

            //= ../specification/s3-encryption/decryption.md#key-commitment
            //# The S3EC MUST validate the algorithm suite used for decryption against the key commitment policy before attempting to decrypt the content ciphertext.

            //= ../specification/s3-encryption/decryption.md#key-commitment
            //# If the commitment policy requires decryption using a committing algorithm suite, and the algorithm suite associated with the object does not support key commitment, then the S3EC MUST throw an exception.
            if (m_cryptoConfig.GetCommitmentPolicy() == CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT
                && contentCryptoMaterial.GetContentCryptoScheme() != ContentCryptoScheme::GCM_COMMIT) {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The requested object is encrypted with V2 encryption schemas that have been disabled by client configuration CommitmentPolicy=REQUIRE_ENCRYPT_REQUIRE_DECRYPT. Retry with REQUIRE_ENCRYPT_ALLOW_DECRYPT enabled or re-encrypt the object");
                    return S3EncryptionGetObjectOutcome(BuildS3EncryptionError(AWSError<S3Errors>(S3Errors::INVALID_ACTION, "DecryptV2EncryptSchemaFailed",
                                "The requested object is encrypted with V2 encryption schemas that have been disabled by client configuration CommitmentPolicy=REQUIRE_ENCRYPT_REQUIRE_DECRYPT. Retry with REQUIRE_ENCRYPT_ALLOW_DECRYPT enabled or re-encrypt the object.", false/*not retryable*/)));
            }

            if (contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::CBC)
            {
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::ENCRYPTION_ONLY);
            }
            else if (m_cryptoConfig.GetCryptoMode() != CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION &&
                IsGCM(contentCryptoMaterial.GetContentCryptoScheme()))
            {
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
            }
            else
            {
                assert(request.GetRange().empty());
                decryptionCryptoConfig.SetCryptoMode(CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION);
            }

            auto module = m_cryptoModuleFactory.FetchCryptoModule(m_encryptionMaterials, decryptionCryptoConfig);
            auto getObjectFunction = [this](const Aws::S3::Model::GetObjectRequest& getRequest) { return m_s3Client->GetObject(getRequest); };
            return module->GetObjectSecurely(request, headOutcome.GetResult(), contentCryptoMaterial, getObjectFunction);
        }

        Aws::S3::Model::GetObjectOutcome S3EncryptionClientBase::GetInstructionFileObject(const Aws::S3::Model::GetObjectRequest & originalGetRequest) const
        {
            GetObjectRequest instructionFileRequest;
            instructionFileRequest.SetKey(originalGetRequest.GetKey() + Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX);
            instructionFileRequest.SetBucket(originalGetRequest.GetBucket());
            GetObjectOutcome instructionOutcome = m_s3Client->GetObject(instructionFileRequest);
            if (!instructionOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Instruction file get operation not successful: "
                    << instructionOutcome.GetError().GetExceptionName() << " : "
                    << instructionOutcome.GetError().GetMessage());
                return instructionOutcome;
            }
            return instructionOutcome;
        }

        void S3EncryptionClientV2::Init(const Aws::S3Encryption::CryptoConfigurationV2& cryptoConfig)
        {
            // This validation could be, in a bizarre set of circumstances, a breaking change
            // if (ValidateStorageMethod(cryptoConfig.GetStorageMethod())) return;
            // if (ValidateRangeGetMode(cryptoConfig.GetUnAuthenticatedRangeGet())) return;
            // if (ValidateSecurityProfile(cryptoConfig.GetSecurityProfile())) return;

            m_cryptoConfig.SetSecurityProfile(cryptoConfig.GetSecurityProfile());
            m_cryptoConfig.SetUnAuthenticatedRangeGet(cryptoConfig.GetUnAuthenticatedRangeGet());
            m_cryptoConfig.SetCommitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT);
            m_cryptoConfig.SetEncryptionAlgorithm(AlgorithmSuite::AES_GCM);
            m_cryptoConfig.SetStorageMethod(cryptoConfig.GetStorageMethod());
            
            m_s3Client->AppendToUserAgent("ft/S3CryptoV2");
            if (cryptoConfig.GetSecurityProfile() == SecurityProfile::V2_AND_LEGACY) {
                AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "The S3 Encryption Client is configured to read encrypted data with legacy encryption modes. If you don't have objects encrypted with these legacy modes, you should disable support for them to enhance security. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html");
            }
        }
        void S3EncryptionClientV3::Init(const Aws::S3Encryption::CryptoConfigurationV3& cryptoConfig)
        {
            if (ValidateStorageMethod(cryptoConfig.GetStorageMethod())) return;
            if (ValidateRangeGetMode(cryptoConfig.GetUnAuthenticatedRangeGet())) return;
            if (ValidateSecurityProfile(cryptoConfig.GetSecurityProfile())) return;
            if (ValidateCommitmentPolicy(cryptoConfig.GetCommitmentPolicy())) return;

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is FORBID_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST NOT encrypt using an algorithm suite which supports key commitment.

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is REQUIRE_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST only encrypt using an algorithm suite which supports key commitment.

            //= ../specification/s3-encryption/key-commitment.md#commitment-policy
            //# When the commitment policy is REQUIRE_ENCRYPT_REQUIRE_DECRYPT, the S3EC MUST only encrypt using an algorithm suite which supports key commitment.

            if (cryptoConfig.GetCommitmentPolicy() == CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT) {
                m_cryptoConfig.SetEncryptionAlgorithm(AlgorithmSuite::AES_GCM);
            } else {
                m_cryptoConfig.SetEncryptionAlgorithm(AlgorithmSuite::AES_GCM_WITH_COMMITMENT);
            }
            if (cryptoConfig.GetCommitmentPolicy() == CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT) {
                m_cryptoConfig.SetSecurityProfile(SecurityProfile::V2);
            } else {
                m_cryptoConfig.SetSecurityProfile(cryptoConfig.GetSecurityProfile());
            }
            m_cryptoConfig.SetUnAuthenticatedRangeGet(cryptoConfig.GetUnAuthenticatedRangeGet());
            m_cryptoConfig.SetCommitmentPolicy(cryptoConfig.GetCommitmentPolicy());
            m_cryptoConfig.SetStorageMethod(cryptoConfig.GetStorageMethod());

            m_s3Client->AppendToUserAgent("ft/S3CryptoV3");

            if (cryptoConfig.GetSecurityProfile() == SecurityProfile::V2_AND_LEGACY) {
                if (cryptoConfig.GetCommitmentPolicy() == CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT) {
                    AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "The S3 Encryption Client is configured with both CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT and AllowLegacy. AllowLegacy will be ignored. Objects stored with legacy encryption will not be decrypted.");
                } else {
                    AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "The S3 Encryption Client is configured to read encrypted data with legacy encryption modes. If you don't have objects encrypted with these legacy modes, you should disable support for them to enhance security. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html");
                }
            }
        }
    }
}
