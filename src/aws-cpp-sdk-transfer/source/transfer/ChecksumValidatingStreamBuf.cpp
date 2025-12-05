/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transfer/ChecksumValidatingStreamBuf.h>

namespace Aws
{
    namespace Transfer
    {
        ChecksumValidatingStreamBuf::ChecksumValidatingStreamBuf(std::streambuf* underlyingBuf, 
                                                                 std::shared_ptr<Aws::Utils::Crypto::Hash> hash)
            : m_underlyingBuf(underlyingBuf), m_hash(hash)
        {
        }

        std::streamsize ChecksumValidatingStreamBuf::xsputn(const char* s, std::streamsize n)
        {
            if (m_hash && n > 0) {
                m_hash->Update(const_cast<unsigned char*>(reinterpret_cast<const unsigned char*>(s)), static_cast<size_t>(n));
            }
            return m_underlyingBuf->sputn(s, n);
        }

        int ChecksumValidatingStreamBuf::overflow(int c)
        {
            if (c != EOF && m_hash) {
                unsigned char byte = static_cast<unsigned char>(c);
                m_hash->Update(&byte, 1);
            }
            return m_underlyingBuf->sputc(c);
        }
    }
}
