/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HashResult.h>
#include "aws/core/utils/Outcome.h"

namespace Aws {
    namespace Utils {
        namespace Crypto {
            class AWS_CORE_API PrecalculatedHash : public Hash {
            public:
                PrecalculatedHash(const Aws::String &hash);
                virtual ~PrecalculatedHash();
                virtual HashResult Calculate(const Aws::String &str) override;
                HashResult Calculate(Aws::IStream &stream) override;
                void Update(unsigned char *string, size_t bufferSize) override;
                virtual Aws::String GetHashBase64(ByteBuffer& m_checksum) override;
                HashResult GetHash() override;

            private:
                Aws::String m_hashString;

            };
        }
    }
}