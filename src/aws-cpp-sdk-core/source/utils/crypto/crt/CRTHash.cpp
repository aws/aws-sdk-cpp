/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/crypto/crt/CRTHash.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            CRTHash::CRTHash(Crt::Crypto::Hash &&toSeat) : m_hash(std::move(toSeat)) {}

            HashResult Crypto::CRTHash::Calculate(const String &str)
            {
                auto inputCur = Crt::ByteCursorFromArray((uint8_t *)str.data(), str.size());
                ByteBuffer resultBuffer(m_hash.DigestSize());
                Crt::ByteBuf outBuf = Crt::ByteBufFromEmptyArray(resultBuffer.GetUnderlyingData(), resultBuffer.GetSize());

                if (m_hash.ComputeOneShot(inputCur, outBuf))
                {
                    resultBuffer.SetLength(m_hash.DigestSize());
                    return resultBuffer;
                }

                return false;
            }

            Crypto::HashResult Crypto::CRTHash::Calculate(IStream &stream) {
                uint8_t streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
                stream.seekg(0, stream.beg);
                while (stream.good())
                {
                    stream.read((char *)streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
                    std::streamsize bytesRead = stream.gcount();
                    if (bytesRead > 0)
                    {
                        auto curToHash = Crt::ByteCursorFromArray(streamBuffer, bytesRead);
                        if (!m_hash.Update(curToHash))
                        {
                            // log here.
                            return false;
                        }
                    }
                }

                if (!stream.eof())
                {
                    return false;
                }

                ByteBuffer resultBuffer(m_hash.DigestSize());
                auto outBuffer = Crt::ByteBufFromEmptyArray(resultBuffer.GetUnderlyingData(), resultBuffer.GetSize());
                if (!m_hash.Digest(outBuffer))
                {
                    //log
                    return false;
                }

                resultBuffer.SetLength(m_hash.DigestSize());
                return resultBuffer;
            }

            void Crypto::CRTHash::Update(unsigned char *string, size_t bufferSize)
            {
                auto inputCur = Crt::ByteCursorFromArray(string, bufferSize);
                (void)m_hash.Update(inputCur);
            }

            Crypto::HashResult Crypto::CRTHash::GetHash() {
                ByteBuffer resultBuffer(m_hash.DigestSize());
                auto outBuffer = Crt::ByteBufFromEmptyArray(resultBuffer.GetUnderlyingData(), resultBuffer.GetSize());
                if (!m_hash.Digest(outBuffer))
                {
                    //log
                    return false;
                }

                resultBuffer.SetLength(m_hash.DigestSize());
                return resultBuffer;
            }
        }
    }
}

