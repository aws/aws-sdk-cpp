/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/transfer/Transfer_EXPORTS.h>
#include <aws/core/utils/crypto/Hash.h>
#include <memory>
#include <streambuf>

namespace Aws
{
    namespace Transfer
    {
        /**
         * Stream buffer wrapper that calculates checksum while forwarding data to underlying stream.
         * Used for single-part download checksum validation.
         */
        class ChecksumValidatingStreamBuf : public std::streambuf
        {
        public:
            ChecksumValidatingStreamBuf(std::streambuf* underlyingBuf, 
                                        std::shared_ptr<Aws::Utils::Crypto::Hash> hash)
                : m_underlyingBuf(underlyingBuf), m_hash(hash)
            {
            }

            std::shared_ptr<Aws::Utils::Crypto::Hash> GetHash() const { return m_hash; }

        protected:
            std::streamsize xsputn(const char* s, std::streamsize n) override
            {
                if (m_hash && n > 0) {
                    m_hash->Update(const_cast<unsigned char*>(reinterpret_cast<const unsigned char*>(s)), static_cast<size_t>(n));
                }
                return m_underlyingBuf->sputn(s, n);
            }

            int overflow(int c) override
            {
                if (c != EOF && m_hash) {
                    unsigned char byte = static_cast<unsigned char>(c);
                    m_hash->Update(&byte, 1);
                }
                return m_underlyingBuf->sputc(c);
            }

        private:
            std::streambuf* m_underlyingBuf;
            std::shared_ptr<Aws::Utils::Crypto::Hash> m_hash;
        };
    }
}
