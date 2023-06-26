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
                void PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                Read data from an instruction file object and return a Content Crypto Material object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult& result) override;
            };
        }
    }
}
