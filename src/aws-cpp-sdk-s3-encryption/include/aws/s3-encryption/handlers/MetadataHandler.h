/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/s3-encryption/handlers/DataHandler.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Handlers
        {
            /*
            Metadata handler will be responsible for reading and writing metadata to and from S3 object using a Put object
            request or a Get object result.
            */
            class AWS_S3ENCRYPTION_API MetadataHandler : public DataHandler
            {
            public:
                /*
                * Write ContentCryptoMaterial data to a put object request. This occurs in place.
                */
                void PopulateRequest(Aws::S3::Model::PutObjectRequest& request, const Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                * Read the metadata of a GetObject result and store into a ContentCryptoMaterial Object.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(Aws::S3::Model::GetObjectResult& result) override;

                /*
                * Read the metadata of a HeadObject result and store into a ContentCryptoMaterialObject.
                */
                Aws::Utils::Crypto::ContentCryptoMaterial ReadContentCryptoMaterial(const Aws::S3::Model::HeadObjectResult& result);
            };
        }
    }
}
