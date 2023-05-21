/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/crypto/SecureRandom.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cstdlib>
#include <climits>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            static const char* LOG_TAG = "Cipher";

            CryptoBuffer GenerateXRandomBytes(size_t lengthBytes, bool ctrMode)
            {
                std::shared_ptr<SecureRandomBytes> rng = CreateSecureRandomBytesImplementation();

                CryptoBuffer bytes(lengthBytes);
                size_t lengthToGenerate = ctrMode ? (3 * bytes.GetLength())  / 4 : bytes.GetLength();

                rng->GetBytes(bytes.GetUnderlyingData(), lengthToGenerate);

                if(!*rng)
                {
                    AWS_LOGSTREAM_FATAL(LOG_TAG, "Random Number generation failed. Abort all crypto operations.");
                    assert(false);
                    abort();
                }

                return bytes;
            }

            /**
             * Generate random number per 4 bytes and use each byte for the byte in the iv
             */
            CryptoBuffer SymmetricCipher::GenerateIV(size_t ivLengthBytes, bool ctrMode)
            {
                CryptoBuffer iv(GenerateXRandomBytes(ivLengthBytes, ctrMode));

                if(iv.GetLength() == 0)
                {
                    AWS_LOGSTREAM_ERROR(LOG_TAG, "Unable to generate iv of length " << ivLengthBytes);
                    return iv;
                }

                if(ctrMode)
                {
                    //init the counter
                    size_t length = iv.GetLength();
                    //[ nonce 1/4] [ iv 1/2 ] [ ctr 1/4 ]
                    size_t ctrStart = (length / 2) + (length / 4);
                    for(; ctrStart < iv.GetLength() - 1; ++ ctrStart)
                    {
                        iv[ctrStart] = 0;
                    }
                    iv[length - 1] = 1;
                }

                return iv;
            }

            CryptoBuffer SymmetricCipher::GenerateKey(size_t keyLengthBytes)
            {
                CryptoBuffer const& key = GenerateXRandomBytes(keyLengthBytes, false);

                if(key.GetLength() == 0)
                {
                    AWS_LOGSTREAM_ERROR(LOG_TAG, "Unable to generate key of length " << keyLengthBytes);
                }

                return key;
            }
        }
    }
}
