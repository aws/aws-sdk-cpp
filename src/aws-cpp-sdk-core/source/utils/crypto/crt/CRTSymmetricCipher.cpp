/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/crypto/crt/CRTSymmetricCipher.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            CRTSymmetricCipher::CRTSymmetricCipher(Crt::Crypto::SymmetricCipher &&toMove) : SymmetricCipher(), m_cipher(std::move(toMove))
            {
                if (m_cipher)
                {
                    auto ivCur = m_cipher.GetIV();
                    m_initializationVector = CryptoBuffer(ivCur.ptr, ivCur.len);

                    auto keyCur = m_cipher.GetKey();
                    m_key = CryptoBuffer(keyCur.ptr, keyCur.len);

                    auto tagCur = m_cipher.GetTag();

                    if (tagCur.len)
                    {
                        m_tag = CryptoBuffer(tagCur.ptr, tagCur.len);
                    }
                }
            }

            CryptoBuffer CRTSymmetricCipher::EncryptBuffer(const CryptoBuffer &unEncryptedData)
            {
                CryptoBuffer result(unEncryptedData.GetLength() + (Crt::Crypto::AES_256_CIPHER_BLOCK_SIZE * 2));
                Crt::ByteBuf resultBuffer = Crt::ByteBufFromEmptyArray(result.GetUnderlyingData(), result.GetSize());
                Crt::ByteCursor toEncrypt = Crt::ByteCursorFromArray(unEncryptedData.GetUnderlyingData(), unEncryptedData.GetLength());

                if (m_cipher.Encrypt(toEncrypt, resultBuffer))
                {
                    result.SetLength(resultBuffer.len);
                    return result;
                }

                return (0);
            }

            CryptoBuffer CRTSymmetricCipher::FinalizeEncryption()
            {
                // For AES key-wrap the encrypted size for a 256-bit key is 40 bytes.
                CryptoBuffer result(Crt::Crypto::AES_256_CIPHER_BLOCK_SIZE * 3);
                Crt::ByteBuf resultBuffer = Crt::ByteBufFromEmptyArray(result.GetUnderlyingData(), result.GetSize());

                if (m_cipher.FinalizeEncryption(resultBuffer))
                {
                    auto tagCur = m_cipher.GetTag();
                    m_tag = CryptoBuffer(tagCur.ptr, tagCur.len);
                    result.SetLength(resultBuffer.len);
                    return result;
                }

                return (0);
            }

            CryptoBuffer CRTSymmetricCipher::DecryptBuffer(const CryptoBuffer &encryptedData)
            {
                CryptoBuffer result(encryptedData.GetLength() + (Crt::Crypto::AES_256_CIPHER_BLOCK_SIZE * 2));
                Crt::ByteBuf resultBuffer = Crt::ByteBufFromEmptyArray(result.GetUnderlyingData(), result.GetSize());
                Crt::ByteCursor toDecrypt = Crt::ByteCursorFromArray(encryptedData.GetUnderlyingData(), encryptedData.GetLength());

                if (m_cipher.Decrypt(toDecrypt, resultBuffer))
                {
                    result.SetLength(resultBuffer.len);
                    return result;
                }

                return (0);
            }

            CryptoBuffer CRTSymmetricCipher::FinalizeDecryption()
            {
                CryptoBuffer result(Crt::Crypto::AES_256_CIPHER_BLOCK_SIZE * 2);
                Crt::ByteBuf resultBuffer = Crt::ByteBufFromEmptyArray(result.GetUnderlyingData(), result.GetSize());

                if (m_cipher.FinalizeDecryption(resultBuffer))
                {
                    result.SetLength(resultBuffer.len);
                    return result;
                }

                return {0};
            }

            void CRTSymmetricCipher::Reset()
            {
                m_cipher.Reset();
            }

            bool CRTSymmetricCipher::Good() const
            {
                return m_cipher.operator bool();
            }
        }
    }
}
