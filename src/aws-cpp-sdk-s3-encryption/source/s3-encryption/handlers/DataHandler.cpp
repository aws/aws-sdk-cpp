/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace Aws::Utils::Crypto;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            static const char* const ALLOCATION_TAG = "DataHandler";

            const Aws::String DataHandler::SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap)
            {
                JsonValue jsonMap;
                for (auto& mapItem : currentMap)
                {
                    jsonMap.WithString(mapItem.first, mapItem.second);
                }
                return jsonMap.View().WriteCompact();
            }

            const Aws::Map<Aws::String, Aws::String> DataHandler::DeserializeMap(const Aws::String& jsonString)
            {
                Aws::Map<Aws::String, Aws::String> materialsDescriptionMap;
                JsonValue jsonObject(jsonString);
                if (jsonObject.WasParseSuccessful())
                {
                    Aws::Map<Aws::String, JsonView> jsonMap = jsonObject.View().GetAllObjects();
                    for (auto& mapItem : jsonMap)
                    {
                        materialsDescriptionMap[mapItem.first] = mapItem.second.AsString();
                    }
                    return materialsDescriptionMap;
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Json Parse failed with message: " << jsonObject.GetErrorMessage());
                    return materialsDescriptionMap;
                }
            }

            //= ../specification/s3-encryption/data-format/content-metadata.md#v3-only
            //= type=implication
            //# - The wrapping algorithm value "02" MUST be translated to AES/GCM upon retrieval, and vice versa on write.

            //= ../specification/s3-encryption/data-format/content-metadata.md#v3-only
            //= type=implication
            //# - The wrapping algorithm value "12" MUST be translated to kms+context upon retrieval, and vice versa on write.

            //= ../specification/s3-encryption/data-format/content-metadata.md#v3-only
            //= type=implication
            //# - The wrapping algorithm value "22" MUST be translated to RSA-OAEP-SHA1 upon retrieval, and vice versa on write.

            Aws::String V3ToV2Alg(const Aws::String & v3) {
                if (v3 == "01") return "AESWrap";
                if (v3 == "02") return "AES/GCM";
                if (v3 == "11") return "kms";
                if (v3 == "12") return "kms+context";
                if (v3 == "21") return "RSA/ECB/OAEPWithSHA-256AndMGF1Padding";
                if (v3 == "22") return "RSA-OAEP-SHA1";
                return "";
            }
            Aws::String V2ToV3Alg(const Aws::String & v2) {
                if (v2 == "AESWrap") return "01";
                if (v2 == "AES/GCM") return "02";
                if (v2 == "kms") return "11";
                if (v2 == "kms+context") return "12";
                if (v2 == "RSA/ECB/OAEPWithSHA-256AndMGF1Padding") return "21";
                if (v2 == "RSA-OAEP-SHA1") return "22";
                return "";
            }

            ContentCryptoMaterial DataHandler::ReadMetadata(const Aws::Map<Aws::String, Aws::String>& metadata)
            {
                auto total_keys = 0;
                auto deprecatedKeyIterator = metadata.find(DEPRECATED_CONTENT_KEY_HEADER);
                if (deprecatedKeyIterator != metadata.end()) ++total_keys;
                auto materialsDescriptionIterator = metadata.find(MATERIALS_DESCRIPTION_HEADER);
                auto ivIterator = metadata.find(IV_HEADER);

                //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                //= type=implication
                //# - The mapkey "x-amz-key" MUST be present for V1 format objects.
                // implication, because V1 format is defined as the presence of x-amz-key

                //= ../specification/s3-encryption/data-format/content-metadata.md#determining-s3ec-object-status
                //= type=implication
                //# - If the metadata contains "x-amz-iv" and "x-amz-key" then the object MUST be considered as an S3EC-encrypted object using the V1 format.

                if (deprecatedKeyIterator != metadata.end()) {
                    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                    //= type=implication
                    //# - The mapkey "x-amz-matdesc" MUST be present for V1 format objects.

                    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                    //= type=implication
                    //# - The mapkey "x-amz-iv" MUST be present for V1 format objects.

                    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
                    //= type=exception
                    //# - The mapkey "x-amz-unencrypted-content-length" SHOULD be present for V1 format objects.
                    // exception because it's either present or not present

                    if (materialsDescriptionIterator == metadata.end() || ivIterator == metadata.end()) {
                        return ContentCryptoMaterial("One or more metadata fields do not exist for V1 decryption.");
                    }
                }

                auto keyIterator = metadata.find(CONTENT_KEY_HEADER);
                if (keyIterator != metadata.end()) ++total_keys;
                auto v3KeyIterator = metadata.find(ENCRYPTED_DATA_KEY_V3);
                if (v3KeyIterator != metadata.end()) ++total_keys;

                if (total_keys == 0) {
                    return ContentCryptoMaterial("Encrypted S3 Object is not in any known format.");
                }
                //= ../specification/s3-encryption/data-format/content-metadata.md#determining-s3ec-object-status
                //= type=implication
                //# If there are multiple mapkeys which are meant to be exclusive, such as "x-amz-key", "x-amz-key-v2", and "x-amz-3" then the S3EC SHOULD throw an exception.
                //# In general, if there is any deviation from the above format, with the exception of additional unrelated mapkeys, then the S3EC SHOULD throw an exception.
                if (total_keys != 1) {
                    return ContentCryptoMaterial("Encrypted S3 Object seems to be in multiple formats.");
                }

                auto schemeIterator = metadata.find(CONTENT_CRYPTO_SCHEME_HEADER);
                auto keyWrapIterator = metadata.find(KEY_WRAP_ALGORITHM);

                if (schemeIterator == metadata.end()) schemeIterator = metadata.find(CONTENT_CIPHER_V3);
                if (materialsDescriptionIterator == metadata.end()) materialsDescriptionIterator = metadata.find(MAT_DESC_V3);

                //= ../specification/s3-encryption/data-format/metadata-strategy.md#object-metadata
                //= type=implication
                //# If the S3EC does not support decoding the S3 Server's "double encoding" then it MUST return the content metadata untouched.
                auto encryptionContext = metadata.find(ENCRYPTION_CONTEXT_V3);
                auto keyCommitment = metadata.find(KEY_COMMITMENT_V3);
                auto messageId = metadata.find(MESSAGE_ID_V3);
                if (messageId != metadata.end()) ivIterator = messageId;
                if (materialsDescriptionIterator == metadata.end()) materialsDescriptionIterator = encryptionContext;

                Aws::String keyWrapAlgorithmAsString;
                if (keyWrapIterator != metadata.end()) {
                    keyWrapAlgorithmAsString = keyWrapIterator->second;
                } else {
                    keyWrapIterator = metadata.find(ENCRYPTED_DATA_KEY_ALGORITHM_V3);
                    if (keyWrapIterator != metadata.end()) {
                        keyWrapAlgorithmAsString = V3ToV2Alg(keyWrapIterator->second);
                    }
                }

                if (v3KeyIterator == metadata.end()) {
                    //= ../specification/s3-encryption/data-format/content-metadata.md#determining-s3ec-object-status
                    //= type=implication
                    //# - If the metadata contains "x-amz-iv" and "x-amz-metadata-x-amz-key-v2" then the object MUST be considered as an S3EC-encrypted object using the V2 format.
                    if ((keyIterator == metadata.end() && deprecatedKeyIterator == metadata.end())
                    || ivIterator == metadata.end() || materialsDescriptionIterator == metadata.end()
                    || schemeIterator == metadata.end() || keyIterator == metadata.end())
                    {
                        return ContentCryptoMaterial("One or more metadata fields do not exist for decryption.");
                    }
                } else {
                    //= ../specification/s3-encryption/data-format/content-metadata.md#determining-s3ec-object-status
                    //= type=implication
                    //# - If the metadata contains "x-amz-3" and "x-amz-d" and "x-amz-i" then the object MUST be considered an S3EC-encrypted object using the V3 format.
                    if (keyCommitment == metadata.end() || messageId == metadata.end()) {
                        return ContentCryptoMaterial("One or more V3 metadata fields do not exist for decryption.");
                    }
                }

                ContentCryptoMaterial contentCryptoMaterial;
                KeyWrapAlgorithm keyWrapAlgorithm = KeyWrapAlgorithmMapper::GetKeyWrapAlgorithmForName(keyWrapAlgorithmAsString);

                // Check if the key wrap algorithm is valid
                if (keyWrapAlgorithm == KeyWrapAlgorithm::NONE) {
                    Aws::OStringStream msg;
                    msg << "Invalid or unrecognized key wrap algorithm: " << keyWrapAlgorithmAsString;
                    return ContentCryptoMaterial(msg.str().c_str());
                }

                contentCryptoMaterial.SetKeyWrapAlgorithm(keyWrapAlgorithm);

                if (v3KeyIterator != metadata.end()) {
                    if (encryptionContext != metadata.end()) {
                        contentCryptoMaterial.SetEncryptionContext(DeserializeMap(encryptionContext->second));
                    }
                    contentCryptoMaterial.SetMessageID(Aws::Utils::HashingUtils::Base64Decode(messageId->second));
                    contentCryptoMaterial.SetKeyCommitment(Aws::Utils::HashingUtils::Base64Decode(keyCommitment->second));
                }

                // if the key wrap algorithm is AES_GCM, we need to split 12 bytes IV and 16 bytes tag out of it.
                CryptoBuffer finalCEK = Aws::Utils::HashingUtils::Base64Decode(
                    keyIterator != metadata.end() ? keyIterator->second :
                    v3KeyIterator != metadata.end() ? v3KeyIterator->second :
                    deprecatedKeyIterator->second);

                contentCryptoMaterial.SetFinalCEK(finalCEK);
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_GCM)
                {
                    size_t expectedLength = AES_GCM_IV_BYTES + AES_GCM_KEY_BYTES + AES_GCM_TAG_BYTES;
                    if (finalCEK.GetLength() != expectedLength)
                    {
                        Aws::OStringStream msg;
                        msg << "S3 Encryption Client get unexpected AES GCM key wrap final CEK length: " << finalCEK.GetLength() << " expected: " << expectedLength;
                        return ContentCryptoMaterial(msg.str().c_str());
                    }
                    contentCryptoMaterial.SetCekIV(CryptoBuffer(finalCEK.GetUnderlyingData(), AES_GCM_IV_BYTES));
                    contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES, AES_GCM_KEY_BYTES));
                    contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES + AES_GCM_KEY_BYTES, AES_GCM_TAG_BYTES));
                }
                else
                {
                    if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_KEY_WRAP && finalCEK.GetLength() != AES_KEY_WRAP_ENCRYPTED_CEK_BYTES)
                    {
                        Aws::OStringStream msg;
                        msg << "S3 Encryption Client get unexpected AES Key Wrap final CEK length: " << finalCEK.GetLength() << " expected: " << AES_KEY_WRAP_ENCRYPTED_CEK_BYTES;
                        return ContentCryptoMaterial(msg.str().c_str());
                    }
                    contentCryptoMaterial.SetEncryptedContentEncryptionKey(finalCEK);
                    contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer());
                }
                if (v3KeyIterator == metadata.end()) {
                    contentCryptoMaterial.SetIV(Aws::Utils::HashingUtils::Base64Decode(ivIterator->second));
                } else {
                    contentCryptoMaterial.SetV3IV();
                }

                //= ../specification/s3-encryption/data-format/content-metadata.md#v3-only
                //= type=implication
                //# If the mapkey x-amz-t is not present, the default Material Description value MUST be set to an empty map (`{}`).
                // If not set, it is empty.
                if (materialsDescriptionIterator != metadata.end()) {
                    contentCryptoMaterial.SetMaterialsDescription(DeserializeMap(materialsDescriptionIterator->second));
                }

                Aws::String schemeAsString = schemeIterator->second;
                ContentCryptoScheme scheme = ContentCryptoSchemeMapper::GetContentCryptoSchemeForName(schemeAsString);
                
                // Check if the crypto scheme is valid
                if (scheme == ContentCryptoScheme::NONE) {
                    Aws::OStringStream msg;
                    msg << "Invalid or unrecognized content crypto scheme: " << schemeAsString;
                    return ContentCryptoMaterial(msg.str().c_str());
                }
                
                contentCryptoMaterial.SetContentCryptoScheme(scheme);

                // value of x-amz-cek-alg is used as AES/GCM AAD info for CEK encryption/decryption
                contentCryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)schemeAsString.c_str(), schemeAsString.size()));

                // Ignore CRYPTO_TAG_LENGTH_HEADER for new client, this change is still compatible with old client, which only accept GCM and CBC for data encryption.
                if (IsGCM(contentCryptoMaterial.GetContentCryptoScheme()))
                {
                    contentCryptoMaterial.SetCryptoTagLength(AES_GCM_TAG_BYTES * 8UL);
                }
                else // all other case (currently CBC only ) should be 0.
                {
                    contentCryptoMaterial.SetCryptoTagLength(0u);
                }

                return contentCryptoMaterial;
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//namespace Aws
