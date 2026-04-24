#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/kms/model/GenerateDataKeyResult.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/EncryptResult.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/kms/model/DecryptResult.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/s3-encryption/HKDF.h>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;
using namespace Aws::Client;
using namespace Aws::S3Encryption;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* const ALLOCATION_TAG = "KMSEncryptionMaterials";
            const char* cmkID_Identifier = "kms_cmk_id";
            const char* kmsEncryptionContextKey = "aws:x-amz-cek-alg";

            KMSEncryptionMaterialsBase::KMSEncryptionMaterialsBase(const String& customerMasterKeyID, const ClientConfiguration& clientConfig) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(Aws::MakeShared<KMSClient>(ALLOCATION_TAG, clientConfig)), m_allowDecryptWithAnyCMK(true)
            {
            }

            KMSEncryptionMaterialsBase::KMSEncryptionMaterialsBase(const String & customerMasterKeyID, const std::shared_ptr<KMSClient>& kmsClient) :
                m_customerMasterKeyID(customerMasterKeyID), m_kmsClient(kmsClient), m_allowDecryptWithAnyCMK(true)
            {
            }

            CryptoOutcome KMSEncryptionMaterialsBase::EncryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
                // non empty context map passed in.
                if (contentCryptoMaterial.GetMaterialsDescription().size())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Customized encryption context map is not allowed for KMS Key wrap algorithm.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Customized encryption context map is not allowed for KMS Key wrap algorithm.", false/*not retryable*/));
                }

                EncryptRequest request;
                request.SetKeyId(m_customerMasterKeyID);

                contentCryptoMaterial.AddMaterialsDescription(cmkID_Identifier, m_customerMasterKeyID);
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());

                request.SetPlaintext(contentCryptoMaterial.GetContentEncryptionKey());

                EncryptOutcome outcome = m_kmsClient->Encrypt(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "KMS encryption call not successful: "
                        << outcome.GetError().GetExceptionName() << " : " << outcome.GetError().GetMessage());
                    //return without changing the encrypted content encryption key
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Failed to encrypt content encryption key(CEK)", false/*not retryable*/));
                }

                EncryptResult result = outcome.GetResult();
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS);
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(result.GetCiphertextBlob());
                contentCryptoMaterial.SetFinalCEK(result.GetCiphertextBlob());

                if (contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::GCM_COMMIT) {
                    contentCryptoMaterial.SetV3IV();
                    contentCryptoMaterial.SetMessageID(SymmetricCipher::GenerateIV(MESSAGE_ID_BYTES, false));

                    CryptoBuffer CommitmentKey(COMMITMENT_KEY_BYTES);
                    Aws::S3Encryption::derive_commitment_key(contentCryptoMaterial.GetContentEncryptionKey(), contentCryptoMaterial.GetMessageID(), CommitmentKey);
                    contentCryptoMaterial.SetKeyCommitment(CommitmentKey);

                    CryptoBuffer EncryptionKey(ENCRYPTION_KEY_BYTES);
                    Aws::S3Encryption::derive_encryption_key(contentCryptoMaterial.GetContentEncryptionKey(), contentCryptoMaterial.GetMessageID(), EncryptionKey);
                    contentCryptoMaterial.SetContentEncryptionKey(EncryptionKey);
                }
                return CryptoOutcome(Aws::NoResult());
            }

            CryptoOutcome KMSEncryptionMaterialsBase::DecryptCEK(ContentCryptoMaterial &contentCryptoMaterial)
            {
                auto errorOutcome = CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::DECRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "DecryptContentEncryptionKeyFailed", "Failed to decrypt content encryption key(CEK)", false/*not retryable*/));
                if (m_customerMasterKeyID.empty() && IsKMSDecryptWithAnyCMKAllowed() == false)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to decrypt content encryption key(CEK): KMS CMK is not provided and CMK Any is not allowed.");
                    return errorOutcome;
                }

                if (!ValidateDecryptCEKMaterials(contentCryptoMaterial))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Materials Description does not match encryption context.");
                    return errorOutcome;
                }

                auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                if (encryptedContentEncryptionKey.GetLength() == 0)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Encrypted content encryption key does not exist.");
                    return errorOutcome;
                }

                DecryptRequest request;

                if (!m_customerMasterKeyID.empty())
                {
                    request.SetKeyId(m_customerMasterKeyID);
                }
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());
                request.SetCiphertextBlob(encryptedContentEncryptionKey);

                DecryptOutcome outcome = m_kmsClient->Decrypt(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "KMS decryption not successful: "
                        << outcome.GetError().GetExceptionName() << outcome.GetError().GetMessage());
                    return errorOutcome;
                }

                DecryptResult result = outcome.GetResult();
                auto decryptedKey = CryptoBuffer(result.GetPlaintext());
                if (contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::GCM_COMMIT) {
                    CryptoBuffer CommitmentKey(COMMITMENT_KEY_BYTES);
                    derive_commitment_key(decryptedKey, contentCryptoMaterial.GetMessageID(), CommitmentKey);
                    if (!constant_time_equal(CommitmentKey, contentCryptoMaterial.GetKeyCommitment())) {
                        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Commitment Key does not match.");
                        return errorOutcome;
                    }
                    CryptoBuffer EncryptionKey(ENCRYPTION_KEY_BYTES);
                    derive_encryption_key(decryptedKey, contentCryptoMaterial.GetMessageID(), EncryptionKey);
                    contentCryptoMaterial.SetContentEncryptionKey(EncryptionKey);
                } else {
                    contentCryptoMaterial.SetContentEncryptionKey(decryptedKey);
                }
                if (contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                    return errorOutcome;
                }
                return CryptoOutcome(Aws::NoResult());
            }

            bool KMSEncryptionMaterialsBase::ValidateDecryptCEKMaterials(const ContentCryptoMaterial& contentCryptoMaterial) const
            {
                switch(contentCryptoMaterial.GetKeyWrapAlgorithm())
                {
                    case KeyWrapAlgorithm::KMS:
                    {
                        auto materials = contentCryptoMaterial.GetMaterialsDescription();
                        auto iterator = materials.find(cmkID_Identifier);
                        return (iterator == materials.end() || iterator->second == m_customerMasterKeyID);
                    }

                    case KeyWrapAlgorithm::KMS_CONTEXT:
                    {
                        Aws::String cekAlg = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                        auto materials = contentCryptoMaterial.GetMaterialsDescription();
                        auto iterator = materials.find(kmsEncryptionContextKey);
                        return  (iterator != materials.end() && iterator->second == cekAlg);
                    }

                    default:
                        return false;
                }
            }

            CryptoOutcome KMSWithContextEncryptionMaterials::EncryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetMaterialsDescription().count(kmsEncryptionContextKey))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Conflict in reserved KMS Encryption Context key aws:x-amz-cek-alg. This value is reserved for the S3 Encryption Client and cannot be set by the user.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, "GenerateContentEncryptionKeyFailed", "Failed to generate content encryption key(CEK)", false/*not retryable*/));
                }

                GenerateDataKeyRequest request;
                request.SetKeyId(m_customerMasterKeyID);

                // Should be "AES/GCM/NoPadding" by default
                Aws::String cekAlg = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                contentCryptoMaterial.AddMaterialsDescription(kmsEncryptionContextKey, cekAlg);
                //= ../specification/s3-encryption/data-format/content-metadata.md#v3-only
                //= type=implication
                //# The Encryption Context value MUST be used for wrapping algorithm `kms+context` or `12`.
                request.SetEncryptionContext(contentCryptoMaterial.GetMaterialsDescription());
                request.SetKeySpec(DataKeySpec::AES_256);
                GenerateDataKeyOutcome outcome = m_kmsClient->GenerateDataKey(request);
                if (!outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to call KMS GenerateDataKey API with error: "
                        << outcome.GetError().GetExceptionName() << " : " << outcome.GetError().GetMessage());
                    //return without changing the encrypted content encryption key
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, "GenerateContentEncryptionKeyFailed", "Failed to generate content encryption key(CEK)", false/*not retryable*/));
                }

                GenerateDataKeyResult result = outcome.GetResult();
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);
                contentCryptoMaterial.SetContentEncryptionKey(result.GetPlaintext());
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(result.GetCiphertextBlob());
                contentCryptoMaterial.SetFinalCEK(result.GetCiphertextBlob());

                //= ../specification/s3-encryption/decryption.md#decrypting-with-commitment
                //= type=implication
                //# When using an algorithm suite which supports key commitment, the client MUST verify that the [derived key commitment](./key-derivation.md#hkdf-operation) contains the same bytes as the stored key commitment retrieved from the stored object's metadata.
                // All four of these are implications, because there's no reasonable way to test it.

                //= ../specification/s3-encryption/decryption.md#decrypting-with-commitment
                //= type=implication
                //# When using an algorithm suite which supports key commitment, the verification of the derived key commitment value MUST be done in constant time.

                //= ../specification/s3-encryption/decryption.md#decrypting-with-commitment
                //= type=implication
                //# When using an algorithm suite which supports key commitment, the client MUST throw an exception when the derived key commitment value and stored key commitment value do not match.

                //= ../specification/s3-encryption/decryption.md#decrypting-with-commitment
                //= type=implication
                //# When using an algorithm suite which supports key commitment, the client MUST verify the key commitment values match before deriving the [derived encryption key](./key-derivation.md#hkdf-operation).
                if (contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::GCM_COMMIT) {

                    //= ../specification/s3-encryption/encryption.md#content-encryption
                    //= type=implication
                    //# The client MUST generate an IV or Message ID using the length of the IV or Message ID defined in the algorithm suite.

                    //= ../specification/s3-encryption/encryption.md#content-encryption
                    //= type=implication
                    //# The generated IV or Message ID MUST be set or returned from the encryption process such that it can be included in the content metadata.

                    //= ../specification/s3-encryption/encryption.md#alg-aes-256-gcm-hkdf-sha512-commit-key
                    //= type=implication
                    //# The derived key commitment value MUST be set or returned from the encryption process such that it can be included in the content metadata.
                    contentCryptoMaterial.SetV3IV();
                    contentCryptoMaterial.SetMessageID(SymmetricCipher::GenerateIV(MESSAGE_ID_BYTES, false));
                    CryptoBuffer CommitmentKey(COMMITMENT_KEY_BYTES);
                    derive_commitment_key(contentCryptoMaterial.GetContentEncryptionKey(), contentCryptoMaterial.GetMessageID(), CommitmentKey);
                    contentCryptoMaterial.SetKeyCommitment(CommitmentKey);

                    CryptoBuffer EncryptionKey(ENCRYPTION_KEY_BYTES);
                    derive_encryption_key(contentCryptoMaterial.GetContentEncryptionKey(), contentCryptoMaterial.GetMessageID(), EncryptionKey);
                    contentCryptoMaterial.SetContentEncryptionKey(EncryptionKey);
                }
                return CryptoOutcome(Aws::NoResult());
            }
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
