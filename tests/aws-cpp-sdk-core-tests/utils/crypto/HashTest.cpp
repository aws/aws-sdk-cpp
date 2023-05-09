/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <aws/core/utils/crypto/Sha1.h>
#include <aws/core/utils/crypto/MD5.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/Outcome.h>

#include <algorithm>

using namespace Aws::Utils;

static void CalculateHash(Crypto::Hash& hash, const char* buffer)
{
    size_t remainingBufferSize = strlen(buffer);
    while (remainingBufferSize > 0)
    {
        size_t bufferSize = (std::min)(remainingBufferSize, static_cast<size_t>(32));
        hash.Update(reinterpret_cast<unsigned char*>(const_cast<char*>(buffer)), bufferSize);

        remainingBufferSize -= bufferSize;
        buffer += 32;
    }
}

class HashUpdateTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(HashUpdateTest, TestSHA256Update)
{
    Crypto::Sha256 hash;
    const char* buffer = "abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu";

    CalculateHash(hash, buffer);

    ByteBuffer digest = hash.GetHash().GetResult();
    ASSERT_EQ(32uL, digest.GetLength());

    Aws::String hexHash = HashingUtils::HexEncode(digest);
    ASSERT_STREQ("cf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1", hexHash.c_str());
}

TEST_F(HashUpdateTest, TestSHA1Update)
{
    Crypto::Sha1 hash;
    const char* buffer = "abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu";

    CalculateHash(hash, buffer);

    ByteBuffer digest = hash.GetHash().GetResult();
    ASSERT_EQ(20uL, digest.GetLength());

    Aws::String hexHash = HashingUtils::HexEncode(digest);
    ASSERT_STREQ("a49b2446a02c645bf419f995b67091253a04a259", hexHash.c_str());
}

TEST_F(HashUpdateTest, TestMD5Update)
{
    Crypto::MD5 hash;
    const char* buffer = "12345678901234567890123456789012345678901234567890123456789012345678901234567890";

    CalculateHash(hash, buffer);

    ByteBuffer digest = hash.GetHash().GetResult();
    ASSERT_EQ(16uL, digest.GetLength());

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    ASSERT_STREQ("V+30oivjyVWsSdouIQe2eg==", base64Hash.c_str());
}

TEST_F(HashUpdateTest, TestCRC32Update)
{
    Crypto::CRC32 hash;

    unsigned char buffer[Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    memset(buffer, 0, Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);

    size_t remainingBufferSize = 26214400;
    while (remainingBufferSize > 0)
    {
        size_t bufferSize = (std::min)(remainingBufferSize, static_cast<size_t>(Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE));
        hash.Update(buffer, bufferSize);
        remainingBufferSize -= bufferSize;
    }

    ByteBuffer digest = hash.GetHash().GetResult();
    ASSERT_EQ(4uL, digest.GetLength());

    Aws::String hexHash = HashingUtils::HexEncode(digest);
    ASSERT_STREQ("72103906", hexHash.c_str());
}

TEST_F(HashUpdateTest, TestCRC32CUpdate)
{
    Crypto::CRC32C hash;

    unsigned char buffer[Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    memset(buffer, 0, Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);

    size_t remainingBufferSize = 26214400;
    while (remainingBufferSize > 0)
    {
        size_t bufferSize = (std::min)(remainingBufferSize, static_cast<size_t>(Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE));
        hash.Update(buffer, bufferSize);
        remainingBufferSize -= bufferSize;
    }

    ByteBuffer digest = hash.GetHash().GetResult();
    ASSERT_EQ(4uL, digest.GetLength());

    Aws::String hexHash = HashingUtils::HexEncode(digest);
    ASSERT_STREQ("fb5b991d", hexHash.c_str());
}
