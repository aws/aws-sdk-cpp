/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/
#pragma once
#include <aws/core/utils/crypto/crt/CRTSecureRandom.h>

#include <aws/crt/crypto/SecureRandom.h>
namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            void CRTSecureRandomBytes::GetBytes(unsigned char *buffer, std::size_t bufferSize)
            {
                auto outputBuf = Crt::ByteBufFromEmptyArray(buffer, bufferSize);
                (void)Crt::Crypto::GenerateRandomBytes(outputBuf, bufferSize);
            }
        }
    }
}
