/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils::Crypto::ContentCryptoSchemeMapper;
using namespace Aws::Utils::Crypto::KeyWrapAlgorithmMapper;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {

            static const char* const ALLOCATION_TAG = "InstructionFileHandler";
            static const char* const INSTRUCTION_HEADER_VALUE = "default instruction file header";

            //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
            //# In the V3 format, the mapkeys "x-amz-c", "x-amz-d", and "x-amz-i" MUST be stored exclusively in the Object Metadata.

            //= ../specification/s3-encryption/data-format/metadata-strategy.md#v3-instruction-files
            //# - The V3 message format MUST store the mapkey "x-amz-c" and its value in the Object Metadata when writing with an Instruction File.
            //# - The V3 message format MUST NOT store the mapkey "x-amz-c" and its value in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-d" and its value in the Object Metadata when writing with an Instruction File.
            //# - The V3 message format MUST NOT store the mapkey "x-amz-d" and its value in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-i" and its value in the Object Metadata when writing with an Instruction File.
            //# - The V3 message format MUST NOT store the mapkey "x-amz-i" and its value in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-3" and its value in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-w" and its value in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-m" and its value (when present in the content metadata) in the Instruction File.
            //# - The V3 message format MUST store the mapkey "x-amz-t" and its value (when present in the content metadata) in the Instruction File.

            void InstructionFileHandler::PopulateRequestV3(Aws::S3::Model::PutObjectRequest& request, Aws::S3::Model::PutObjectRequest& ifRequest, const ContentCryptoMaterial& contentCryptoMaterial)
            {
                // Meta Data for object

                ContentCryptoScheme scheme = contentCryptoMaterial.GetContentCryptoScheme();
                request.AddMetadata(CONTENT_CIPHER_V3, GetNameForContentCryptoScheme(scheme));

                Aws::String encodedKeyCommitment = HashingUtils::Base64Encode(contentCryptoMaterial.GetKeyCommitment());
                request.AddMetadata(KEY_COMMITMENT_V3, encodedKeyCommitment);

                Aws::String encodedMessageId = HashingUtils::Base64Encode(contentCryptoMaterial.GetMessageID());
                request.AddMetadata(MESSAGE_ID_V3, encodedMessageId);


                // Meta Data for instruction file

                ifRequest.SetKey(request.GetKey() + DEFAULT_INSTRUCTION_FILE_SUFFIX);

                Aws::Map<Aws::String, Aws::String> instructionMetadata;
                instructionMetadata[INSTRUCTION_FILE_HEADER] = INSTRUCTION_HEADER_VALUE;
                ifRequest.SetMetadata(instructionMetadata);

                Aws::Map<Aws::String, Aws::String> contentCryptoMap;

                auto encryptionContextMap = contentCryptoMaterial.GetMaterialsDescription();
                if (!encryptionContextMap.empty()) {
                    contentCryptoMap[ENCRYPTION_CONTEXT_V3] = SerializeMap(encryptionContextMap);
                }
                contentCryptoMap[ENCRYPTED_DATA_KEY_ALGORITHM_V3] = V2ToV3Alg(GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()));
                contentCryptoMap[ENCRYPTED_DATA_KEY_V3] =  HashingUtils::Base64Encode(contentCryptoMaterial.GetFinalCEK());

                //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
                //# The content metadata stored in the Instruction File MUST be serialized to a JSON string.

                //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
                //# The serialized JSON string MUST be the only contents of the Instruction File.
                Aws::String jsonCryptoMap = SerializeMap(contentCryptoMap);
                std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, jsonCryptoMap);
                ifRequest.SetBody(streamPtr);
            }

            void InstructionFileHandler::PopulateRequest(Aws::S3::Model::PutObjectRequest& objRequest, Aws::S3::Model::PutObjectRequest& ifRequest, const ContentCryptoMaterial& contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetKeyCommitment().GetLength() != 0)
                {
                    return PopulateRequestV3(objRequest, ifRequest, contentCryptoMaterial);
                }

                //= ../specification/s3-encryption/data-format/metadata-strategy.md#v1-v2-instruction-files
                //# In the V1/V2 message format, all of the content metadata MUST be stored in the Instruction File.

                ifRequest.SetKey(ifRequest.GetKey() + DEFAULT_INSTRUCTION_FILE_SUFFIX);

                Aws::Map<Aws::String, Aws::String> instructionMetadata;
                instructionMetadata[INSTRUCTION_FILE_HEADER] = INSTRUCTION_HEADER_VALUE;
                ifRequest.SetMetadata(instructionMetadata);

                Aws::Map<Aws::String, Aws::String> contentCryptoMap;
                contentCryptoMap[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetFinalCEK());
                contentCryptoMap[IV_HEADER] = HashingUtils::Base64Encode(contentCryptoMaterial.GetIV());
                contentCryptoMap[MATERIALS_DESCRIPTION_HEADER] = SerializeMap(contentCryptoMaterial.GetMaterialsDescription());
                contentCryptoMap[CONTENT_CRYPTO_SCHEME_HEADER] = GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme());
                contentCryptoMap[KEY_WRAP_ALGORITHM] = GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm());
                contentCryptoMap[CRYPTO_TAG_LENGTH_HEADER] = StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength());

                Aws::String jsonCryptoMap = SerializeMap(contentCryptoMap);
                std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, jsonCryptoMap);
                ifRequest.SetBody(streamPtr);
            }

            static ContentCryptoMaterial InvalidKey(const char * key) {
                Aws::OStringStream msg;
                msg << "Instruction File must not contain: " << key;
                return ContentCryptoMaterial(msg.str().c_str());
            }
            ContentCryptoMaterial InstructionFileHandler::ReadContentCryptoMaterial(const Aws::S3::Model::GetObjectResult & instruction_file, const Aws::S3::Model::HeadObjectResult & object_head)
            {
                IOStream& stream = instruction_file.GetBody();
                Aws::String jsonString;
                stream >> jsonString;
                Aws::Map<Aws::String, Aws::String> cryptoContentMap = DeserializeMap(jsonString);

                if (cryptoContentMap.find(CONTENT_CIPHER_V3) != cryptoContentMap.end())
                    return InvalidKey(CONTENT_CIPHER_V3);
                if (cryptoContentMap.find(KEY_COMMITMENT_V3) != cryptoContentMap.end())
                    return InvalidKey(KEY_COMMITMENT_V3);
                if (cryptoContentMap.find(MESSAGE_ID_V3) != cryptoContentMap.end())
                    return InvalidKey(MESSAGE_ID_V3);

                Aws::Map<Aws::String, Aws::String> metadata = object_head.GetMetadata();
                cryptoContentMap.insert(metadata.begin(), metadata.end());
                return ReadMetadata(cryptoContentMap);
            }

        }//namespace Handlers
    }//namespace S3Encryption
}//namespace Aws
