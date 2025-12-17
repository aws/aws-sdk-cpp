/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::S3::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils::Crypto::ContentCryptoSchemeMapper;
using namespace Aws::Utils::Crypto::KeyWrapAlgorithmMapper;
using namespace Aws::S3Encryption::Handlers;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            //= ../specification/s3-encryption/data-format/content-metadata.md#algorithm-suite-and-message-format-version-compatibility
            //= type=implication
            //# Objects encrypted with ALG_AES_256_GCM_HKDF_SHA512_COMMIT_KEY MUST use the V3 message format version only.
            void MetadataHandler::PopulateRequestV3(Aws::S3::Model::PutObjectRequest& request, const ContentCryptoMaterial& contentCryptoMaterial)
            {
                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-c" MUST be present for V3 format objects.
                ContentCryptoScheme scheme = contentCryptoMaterial.GetContentCryptoScheme();
                request.AddMetadata(CONTENT_CIPHER_V3, GetNameForContentCryptoScheme(scheme));

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-3" MUST be present for V3 format objects.
                Aws::String encodedCEK = HashingUtils::Base64Encode(contentCryptoMaterial.GetFinalCEK());
                request.AddMetadata(ENCRYPTED_DATA_KEY_V3, encodedCEK);

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //= type=implication
                //# - The mapkey "x-amz-t" SHOULD be present for V3 format objects that use KMS Encryption Context.
                Aws::Map<Aws::String, Aws::String> encryptionContextMap = contentCryptoMaterial.GetMaterialsDescription();
                if (!encryptionContextMap.empty()) {
                    request.AddMetadata(ENCRYPTION_CONTEXT_V3, SerializeMap(encryptionContextMap));
                }

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-w" MUST be present for V3 format objects.
                KeyWrapAlgorithm keyWrapAlgorithm = contentCryptoMaterial.GetKeyWrapAlgorithm();
                request.AddMetadata(ENCRYPTED_DATA_KEY_ALGORITHM_V3, V2ToV3Alg(GetNameForKeyWrapAlgorithm(keyWrapAlgorithm)));

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-d" MUST be present for V3 format objects.
                Aws::String encodedKeyCommitment = HashingUtils::Base64Encode(contentCryptoMaterial.GetKeyCommitment());
                request.AddMetadata(KEY_COMMITMENT_V3, encodedKeyCommitment);

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-i" MUST be present for V3 format objects.
                Aws::String encodedMessageId = HashingUtils::Base64Encode(contentCryptoMaterial.GetMessageID());
                request.AddMetadata(MESSAGE_ID_V3, encodedMessageId);
            }
	        void MetadataHandler::PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const ContentCryptoMaterial& contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetKeyCommitment().GetLength() != 0)
                {
                    return PopulateRequestV3(request, contentCryptoMaterial);
                }

                //= ../specification/s3-encryption/data-format/content-metadata.md#algorithm-suite-and-message-format-version-compatibility
                //= type=implication
                //# Objects encrypted with ALG_AES_256_CBC_IV16_NO_KDF MAY use either the V1 or V2 message format version.
                //# Objects encrypted with ALG_AES_256_GCM_IV12_TAG16_NO_KDF MUST use the V2 message format version only.

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-key-v2" MUST be present for V2 format objects.
                Aws::String encodedCEK = HashingUtils::Base64Encode(contentCryptoMaterial.GetFinalCEK());
                request.AddMetadata(CONTENT_KEY_HEADER, encodedCEK);

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-iv" MUST be present for V2 format objects.
                Aws::String encodedIV = HashingUtils::Base64Encode(contentCryptoMaterial.GetIV());
                request.AddMetadata(IV_HEADER, encodedIV);

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-matdesc" MUST be present for V2 format objects.
                Aws::Map<Aws::String, Aws::String> materialsDescriptionMap = contentCryptoMaterial.GetMaterialsDescription();
                request.AddMetadata(MATERIALS_DESCRIPTION_HEADER, SerializeMap(materialsDescriptionMap));

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-cek-alg" MUST be present for V2 format objects.
                ContentCryptoScheme scheme = contentCryptoMaterial.GetContentCryptoScheme();
                request.AddMetadata(CONTENT_CRYPTO_SCHEME_HEADER, GetNameForContentCryptoScheme(scheme));

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-tag-len" MUST be present for V2 format objects.
                request.AddMetadata(CRYPTO_TAG_LENGTH_HEADER, StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()));

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //# - The mapkey "x-amz-wrap-alg" MUST be present for V2 format objects.
                KeyWrapAlgorithm keyWrapAlgorithm = contentCryptoMaterial.GetKeyWrapAlgorithm();
                request.AddMetadata(KEY_WRAP_ALGORITHM, GetNameForKeyWrapAlgorithm(keyWrapAlgorithm));
            }

        ContentCryptoMaterial MetadataHandler::ReadContentCryptoMaterial(const Aws::S3::Model::HeadObjectResult & result)
            {
                Aws::Map<Aws::String, Aws::String> metadata = result.GetMetadata();
                return ReadMetadata(metadata);
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//namespace Aws
