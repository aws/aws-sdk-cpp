/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-encryption/handlers/DataHandler.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
            //= type=exception
            //# The S3EC MUST NOT support providing a custom Instruction File suffix on ordinary writes; custom suffixes MUST only be used during re-encryption.
            // We do not support  a custom Instruction File suffix under any circumstances.

            static const char* const DEFAULT_INSTRUCTION_FILE_SUFFIX = ".instruction";
            /*
            Instruction file handler will be responsible for reading and writing instruction files to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API InstructionFileHandler : public DataHandler
            {
            public:
                /*
                Write ContentCryptoMaterial data to an instruction file object which is passed as an argument for this function.
                */
                void PopulateRequest(Aws::S3::Model::PutObjectRequest& objRequest, Aws::S3::Model::PutObjectRequest& ifRequest, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial);

                /*
                Read data from an instruction file object and return a Content Crypto Material object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(const Aws::S3::Model::GetObjectResult& instruction_file, const Aws::S3::Model::HeadObjectResult& object_head);
            private:
                // Helper for writing V3-format instruction files.
                void PopulateRequestV3(Aws::S3::Model::PutObjectRequest& objRequest, Aws::S3::Model::PutObjectRequest& ifRequest, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial);
            };
        }
    }
}
