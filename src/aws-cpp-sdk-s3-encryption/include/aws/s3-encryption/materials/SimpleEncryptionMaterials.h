/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

#if defined(_MSC_VER) && (_MSC_VER <= 1900 )
#pragma warning (disable : 4996)
#endif
namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            /*
            * Simple Encryption Materials is responsible for handling the encryption/decryption of
            * content encryption keys. This class will use a user provided symmetric
            * master key to encrypt/decrypt keys with AES Key Wrap.
            */
            class AWS_S3ENCRYPTION_API SimpleEncryptionMaterialsBase : public Aws::Utils::Crypto::EncryptionMaterials
            {
            public:
                /*
                Initialize with symmetric key.
                */
                SimpleEncryptionMaterialsBase(const Aws::Utils::CryptoBuffer& symmetricKey);

                /*
                * This will encrypt the cek within the Content Crypto material and KeyWrapAlgorithm within the Content Crypto Material.
                * This will occur in place and will directly manipulate the content crypto material passed to it.
                */
                Aws::Utils::Crypto::CryptoOutcome EncryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

                /*
                * This will decrypt the cek with the symmetric master key.
                * This will occur in place and will directly manipulate the content crypto material passed to it.
                */
                Aws::Utils::Crypto::CryptoOutcome DecryptCEK(Aws::Utils::Crypto::ContentCryptoMaterial& contentCryptoMaterial) override;

            protected:
                virtual std::shared_ptr<Aws::Utils::Crypto::SymmetricCipher> CreateCipher(Aws::Utils::Crypto::ContentCryptoMaterial&, bool) const;

                virtual Aws::Utils::Crypto::KeyWrapAlgorithm GetKeyWrapAlgorithm() const;

                Aws::Utils::CryptoBuffer m_symmetricMasterKey;
            };

            /**
             * @deprecated This class is in the maintenance mode, no new updates will be released, use SimpleEncryptionMaterialsWithGCMAAD.
             */
            class
            AWS_DEPRECATED("This class is in the maintenance mode, no new updates will be released, use SimpleEncryptionMaterialsWithGCMAAD. Please see https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html for more information.")
            AWS_S3ENCRYPTION_API SimpleEncryptionMaterials : public SimpleEncryptionMaterialsBase
            {
            public:
                SimpleEncryptionMaterials(const Aws::Utils::CryptoBuffer& symmetricKey)
                    : SimpleEncryptionMaterialsBase(symmetricKey) {}
            };

            /**
             * SimpleEncryptionMaterialsWithGCMAAD provides more secure key wrap algorithm than SimpleEncryptionMaterials. See https://docs.aws.amazon.com/general/latest/gr/aws_sdk_cryptography.html
             * Examples: https://github.com/awsdocs/aws-doc-sdk-examples/blob/master/cpp/example_code/s3encryption/s3Encryption.cpp
             */
            class AWS_S3ENCRYPTION_API SimpleEncryptionMaterialsWithGCMAAD : public SimpleEncryptionMaterialsBase
            {
            public:
                SimpleEncryptionMaterialsWithGCMAAD(const Aws::Utils::CryptoBuffer& symmetricKey)
                    : SimpleEncryptionMaterialsBase(symmetricKey) {}

            protected:
                Aws::Utils::Crypto::KeyWrapAlgorithm GetKeyWrapAlgorithm() const override;
            };

        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws
