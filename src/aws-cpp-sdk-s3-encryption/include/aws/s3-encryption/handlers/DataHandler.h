/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/HeadObjectResult.h>

namespace Aws
{
    namespace S3Encryption
    {
        static const char* const MetadataHandler_Tag = "MetadataHandler";
        static const char* const DEPRECATED_CONTENT_KEY_HEADER = "x-amz-key";
        static const char* const CONTENT_KEY_HEADER = "x-amz-key-v2";
        static const char* const IV_HEADER = "x-amz-iv";
        static const char* const MATERIALS_DESCRIPTION_HEADER = "x-amz-matdesc";
        static const char* const CONTENT_CRYPTO_SCHEME_HEADER = "x-amz-cek-alg";
        static const char* const CRYPTO_TAG_LENGTH_HEADER = "x-amz-tag-len";
        static const char* const KEY_WRAP_ALGORITHM = "x-amz-wrap-alg";
        static const char* const INSTRUCTION_FILE_HEADER = "x-amz-crypto-instr-file";

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-c") SHOULD be represented by a constant named "CONTENT_CIPHER_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-3") SHOULD be represented by a constant named "ENCRYPTED_DATA_KEY_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-m") SHOULD be represented by a constant named "MAT_DESC_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-t") SHOULD be represented by a constant named "ENCRYPTION_CONTEXT_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-w") SHOULD be represented by a constant named "ENCRYPTED_DATA_KEY_ALGORITHM_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-d") SHOULD be represented by a constant named "KEY_COMMITMENT_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# - This mapkey ("x-amz-i") SHOULD be represented by a constant named "MESSAGE_ID_V3" or similar in the implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# The "x-amz-meta-" prefix is automatically added by the S3 server and MUST NOT be included in implementation code.

        //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
        //= type=implication
        //# The "x-amz-" prefix denotes that the metadata is owned by an Amazon product and MUST be prepended to all S3EC metadata mapkeys.


        static const char* const CONTENT_CIPHER_V3 = "x-amz-c"; // same as CONTENT_CRYPTO_SCHEME_HEADER
        static const char* const ENCRYPTED_DATA_KEY_V3 = "x-amz-3"; // same as DEPRECATED_CONTENT_KEY_HEADER or CONTENT_KEY_HEADER
        static const char* const MAT_DESC_V3 = "x-amz-m"; // same as MATERIALS_DESCRIPTION_HEADER
        static const char* const ENCRYPTION_CONTEXT_V3 = "x-amz-t";
        static const char* const ENCRYPTED_DATA_KEY_ALGORITHM_V3 = "x-amz-w"; // same as KEY_WRAP_ALGORITHM, but different encoding
        static const char* const KEY_COMMITMENT_V3 = "x-amz-d";
        static const char* const MESSAGE_ID_V3 = "x-amz-i";

        static const size_t AES_GCM_IV_BYTES = 12;
        static const size_t AES_GCM_KEY_BYTES = 32;
        static const size_t AES_GCM_TAG_BYTES = 16;
        static const size_t AES_KEY_WRAP_ENCRYPTED_CEK_BYTES = 40;

        namespace Handlers
        {
            Aws::String V2ToV3Alg(const Aws::String & v2);
            /*
            Data handler class will be responsible for reading and writing metadata and instruction files to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API DataHandler
            {
            public:
                /*
                Function to json serialize a map containing pairs of strings.
                */
                const Aws::String SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap);

                /*
                Function to deserialize a string to map.
                */
                const Aws::Map<Aws::String, Aws::String> DeserializeMap(const Aws::String& jsonString);

            protected:
                /*
                * Function to read meta data and return a content crypto material object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadMetadata(const Aws::Map<Aws::String, Aws::String>& metadata);
            };
        }
    }
}
