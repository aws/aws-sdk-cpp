/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/core/utils/crypto/PrecalculatedHash.h>

using namespace Aws::Utils::Crypto;

PrecalculatedHash::PrecalculatedHash(const Aws::String &mHash){
m_hash_string = mHash;
}

PrecalculatedHash::~PrecalculatedHash() = default;

HashResult PrecalculatedHash::Calculate(const Aws::String& str)
{
    AWS_UNREFERENCED_PARAM(str);
    return HashingUtils::Base64Decode(m_hash_string);
}

HashResult PrecalculatedHash::Calculate(Aws::IStream& stream)
{
    AWS_UNREFERENCED_PARAM(stream);
    return HashingUtils::Base64Decode(m_hash_string);
}

Aws::String PrecalculatedHash::GetHashBase64(ByteBuffer m_checksum){
    AWS_UNREFERENCED_PARAM(m_checksum);
    return m_hash_string;
}

void PrecalculatedHash::Update(unsigned char* string, size_t bufferSize)
{
    AWS_UNREFERENCED_PARAM(string);
    AWS_UNREFERENCED_PARAM(bufferSize);
}

HashResult PrecalculatedHash::GetHash()
{
    return HashingUtils::Base64Decode(m_hash_string);
}
