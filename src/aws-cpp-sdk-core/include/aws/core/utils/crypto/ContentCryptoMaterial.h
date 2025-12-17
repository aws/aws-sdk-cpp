/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Aws.h>
#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/crypto/CryptoBuf.h>
#include <aws/core/utils/crypto/ContentCryptoScheme.h>
#include <aws/core/utils/crypto/KeyWrapAlgorithm.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            class AWS_CORE_API ContentCryptoMaterial
            {
            public:
                /*
                Default constructor.
                */
                ContentCryptoMaterial();
                /*
                Initialize content crypto material with content crypto scheme. Constructor will also generate the cek automatically.
                Since the creation of the crypto content material will be within the S3 crypto modules, only the crypto scheme is needed for initialization.
                The rest of the data will be set using the accessors below.
                */
                ContentCryptoMaterial(ContentCryptoScheme contentCryptoScheme);

                /*
                Initialize with content encryption key (cek) and content crypto scheme.
                */
                ContentCryptoMaterial(const Aws::Utils::CryptoBuffer& cek, ContentCryptoScheme contentCryptoScheme);

                /*
                Initialize in the error state.
                */
                ContentCryptoMaterial(const char * msg);

                /**
                * Gets the underlying content encryption key.
                */
                inline const Aws::Utils::CryptoBuffer& GetContentEncryptionKey() const
                {
                    return m_contentEncryptionKey;
                }

                /**
                * Gets the underlying encrypted content encryption key.
                */
                inline const Aws::Utils::CryptoBuffer& GetEncryptedContentEncryptionKey() const
                {
                    return m_encryptedContentEncryptionKey;
                }

                /**
                * Gets the underlying initialization vector
                */
                inline const Aws::Utils::CryptoBuffer& GetIV() const
                {
                    return m_iv;
                }

                /**
                * Gets the underlying encryption context
                */
                inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const
                {
                    return m_encryptionContext;
                }

                /**
                * Gets the underlying key commitment
                */
                inline const Aws::Utils::CryptoBuffer& GetKeyCommitment() const
                {
                    return m_keyCommitment;
                }

                /**
                * Gets the underlying message ID
                */
                inline const Aws::Utils::CryptoBuffer& GetMessageID() const
                {
                    return m_messageId;
                }

                /**
                * Gets the underlying crypto tag length
                */
                inline size_t GetCryptoTagLength() const
                {
                    return m_cryptoTagLength;
                }

                /**
                * Gets the underlying materials description map.
                */
                inline const Aws::Map<Aws::String, Aws::String>& GetMaterialsDescription() const
                {
                    return m_materialsDescription;
                }

                /*
                * Gets the value of the key in the current materials description map.
                */
                inline const Aws::String& GetMaterialsDescription(const Aws::String& key) const
                {
                    return m_materialsDescription.at(key);
                }

                /**
                * Gets the underlying key wrap algorithm
                */
                inline KeyWrapAlgorithm GetKeyWrapAlgorithm() const
                {
                    return m_keyWrapAlgorithm;
                }

                /**
                * Gets the underlying content crypto scheme.
                */
                inline ContentCryptoScheme GetContentCryptoScheme() const
                {
                    return m_contentCryptoScheme;
                }

                /**
                * Sets the underlying content encryption key. Copies from parameter content encryption key.
                */
                inline void SetContentEncryptionKey(const Aws::Utils::CryptoBuffer& contentEncryptionKey)
                {
                    m_contentEncryptionKey = contentEncryptionKey;
                }

                /**
                * Sets the underlying encrypted content encryption key. Copies from parameter encrypted content encryption key.
                */
                inline void SetEncryptedContentEncryptionKey(const Aws::Utils::CryptoBuffer& encryptedContentEncryptionKey)
                {
                    m_encryptedContentEncryptionKey = encryptedContentEncryptionKey;
                }

                /**
                * Sets the underlying iv. Copies from parameter iv.
                */
                inline void SetIV(const Aws::Utils::CryptoBuffer& iv)
                {
                    m_iv = iv;
                }

                /**
                * Sets the underlying iv to 12 bytes of zero, as needed for V3 encoding
                */
                inline void SetV3IV()
                {
                    //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
                    //# When encrypting or decrypting with ALG_AES_256_GCM_HKDF_SHA512_COMMIT_KEY, the IV used in the AES-GCM content encryption/decryption MUST consist entirely of bytes with the value 0x01.
                    //# The IV's total length MUST match the IV length defined by the algorithm suite.
                    unsigned char iv[12] = {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01};
                    CryptoBuffer iv2(&iv[0], 12);
                    SetIV(iv2);
                }

                /**
                * Sets the underlying encryption context. Copies from parameter encryptionContext.
                */
                inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& encryptionContext)
                {
                    m_encryptionContext = encryptionContext;
                }

                /**
                * Sets the underlying key commitment. Copies from parameter keyCommitment.
                */
                inline void SetKeyCommitment(const Aws::Utils::CryptoBuffer& keyCommitment)
                {
                    m_keyCommitment = keyCommitment;
                }

                /**
                * Sets the underlying message ID. Copies from parameter messageId.
                */
                inline void SetMessageID(const Aws::Utils::CryptoBuffer& messageId)
                {
                    m_messageId = messageId;
                }

                /**
                * Sets the underlying crypto Tag Length. Copies from parameter cryptoTagLength.
                */
                inline void SetCryptoTagLength(size_t cryptoTagLength)
                {
                    m_cryptoTagLength = cryptoTagLength;
                }

                /**
                * Adds to the current materials description map using a key and a value.
                */
                inline void AddMaterialsDescription(const Aws::String& key, const Aws::String& value)
                {
                    m_materialsDescription[key] = value;
                }

                /**
                * Sets the underlying materials description. Copies from parameter materials description.
                */
                inline void SetMaterialsDescription(const Aws::Map<Aws::String, Aws::String>& materialsDescription)
                {
                    m_materialsDescription = materialsDescription;
                }

                /**
                * Sets the underlying Key Wrap Algorithm. Copies from parameter keyWrapAlgorithm.
                */
                inline void SetKeyWrapAlgorithm(KeyWrapAlgorithm keyWrapAlgorithm)
                {
                    m_keyWrapAlgorithm = keyWrapAlgorithm;
                }

                /**
                * Sets the underlying content Crypto Scheme. Copies from parameter contentCryptoScheme.
                */
                inline void SetContentCryptoScheme(ContentCryptoScheme contentCryptoScheme)
                {
                    m_contentCryptoScheme = contentCryptoScheme;
                }

                /**
                * Sets the underlying AAD for GCM if needed.
                */
                inline void SetGCMAAD(const Aws::Utils::CryptoBuffer& aad)
                {
                    m_gcmAAD = aad;
                }
                /**
                * Gets the underlying aad for GCM if needed.
                */
                inline const Aws::Utils::CryptoBuffer& GetGCMAAD() const
                {
                    return m_gcmAAD;
                }

                /**
                * Sets the underlying tag for decrypting CEK if it's GCM encrypted.
                */
                inline void SetCEKGCMTag(const Aws::Utils::CryptoBuffer& tag)
                {
                    m_cekGCMTag = tag;
                }
                /**
                * Gets the underlying aad for GCM if needed.
                */
                inline const Aws::Utils::CryptoBuffer& GetCEKGCMTag() const
                {
                    return m_cekGCMTag;
                }

                /**
                * Sets the underlying initialization vector for CEK if it's GCM encrypted.
                */
                inline void SetCekIV(const Aws::Utils::CryptoBuffer& iv)
                {
                    m_cekIV = iv;
                }
                /**
                * Gets the underlying CEK initialization vector.
                */
                inline const Aws::Utils::CryptoBuffer& GetCekIV() const
                {
                    return m_cekIV;
                }

                /**
                 * Sets the underlying final CEK
                 */
                inline void SetFinalCEK(const Aws::Utils::CryptoBuffer& finalCEK)
                {
                    m_finalCEK = finalCEK;
                }
                /**
                * Gets the underlying final CEK.
                */
                inline const Aws::Utils::CryptoBuffer& GetFinalCEK() const
                {
                    return m_finalCEK;
                }

                //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
                //= type=implication
                //# The client MUST set the AAD to the Algorithm Suite ID represented as bytes.

                //= ../specification/s3-encryption/encryption.md#alg-aes-256-gcm-iv12-tag16-no-kdf
                //= type=implication
                //# The client MUST NOT provide any AAD when encrypting with ALG_AES_256_GCM_IV12_TAG16_NO_KDF.
                inline const Aws::Utils::CryptoBuffer GetAAD() const
                {
                    if (m_contentCryptoScheme == ContentCryptoScheme::GCM_COMMIT) {
		        // Algorithm Suite 0x0073 as bytes
                        static const uint8_t gcmAAD[2] = {0, 0x73};
                        return Aws::Utils::CryptoBuffer(gcmAAD, 2);
                    } else {
                        return Aws::Utils::CryptoBuffer();
                    }
                }

                inline bool Ok() const {return m_error.empty();}
                inline bool Fail() const {return !m_error.empty();}
                inline const Aws::String & Error() const {return m_error;}

            private:
                Aws::Utils::CryptoBuffer m_contentEncryptionKey;
                Aws::Utils::CryptoBuffer m_encryptedContentEncryptionKey;
                /* if using AES_GCM key wrap algorithm, then final CEK is iv + encrypted_key + tag
                 * otherwise it's the same as m_encryptedContentEncryptionKey
                 */
                Aws::Utils::CryptoBuffer m_finalCEK;
                Aws::Utils::CryptoBuffer m_iv;
                Aws::Utils::CryptoBuffer m_cekIV;
                Aws::Utils::CryptoBuffer m_gcmAAD;
                Aws::Utils::CryptoBuffer m_cekGCMTag;
                Aws::Map<Aws::String, Aws::String> m_encryptionContext;
                Aws::Utils::CryptoBuffer m_keyCommitment;
                Aws::Utils::CryptoBuffer m_messageId;
                size_t m_cryptoTagLength;
                Aws::Map<Aws::String, Aws::String> m_materialsDescription;
                KeyWrapAlgorithm m_keyWrapAlgorithm;
                ContentCryptoScheme m_contentCryptoScheme;
                Aws::String m_error;
            };
        }
    }
}
