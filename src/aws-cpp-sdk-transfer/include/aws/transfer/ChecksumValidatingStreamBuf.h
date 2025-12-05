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
        class AWS_TRANSFER_API ChecksumValidatingStreamBuf : public std::streambuf
        {
        public:
            ChecksumValidatingStreamBuf(std::streambuf* underlyingBuf, 
                                        std::shared_ptr<Aws::Utils::Crypto::Hash> hash);

            std::shared_ptr<Aws::Utils::Crypto::Hash> GetHash() const { return m_hash; }

        protected:
            std::streamsize xsputn(const char* s, std::streamsize n) override;
            int overflow(int c) override;

        private:
            std::streambuf* m_underlyingBuf;
            std::shared_ptr<Aws::Utils::Crypto::Hash> m_hash;
        };
    }
}
