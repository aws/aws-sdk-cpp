/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

#include <future>

using namespace Aws::Utils;

class UUIDTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(UUIDTest, TestPlatformGeneratesUUID)
{
    Aws::Set<Aws::String> generatedUUids;

    for(size_t i = 0u; i < 1000u; ++i)
    {
        UUID uuid = UUID::RandomUUID();
        Aws::String uuidStr = uuid;
        ASSERT_EQ(36u, uuidStr.length());
        ByteBuffer rawUUID = uuid;
        ASSERT_EQ(16u, rawUUID.GetLength());
        ASSERT_EQ(0x40u, 0x40u & rawUUID[6]);
        ASSERT_EQ(0x80u, 0x80u & rawUUID[8]);

        auto iter = generatedUUids.find(uuidStr);
        auto endIter = generatedUUids.end();
        ASSERT_TRUE( iter == endIter );

        generatedUUids.insert(uuidStr);
    }
}

TEST_F(UUIDTest, TestUUIDToStringConversion)
{
    ByteBuffer rawUuuid = HashingUtils::HexDecode("f81d4fae7dec11d0a76500a0c91e6bf6");
    const char* expectedStr = "F81D4FAE-7DEC-11D0-A765-00A0C91E6BF6";

    UUID uuid(rawUuuid.GetUnderlyingData());
    Aws::String convertedStr = uuid;
    ASSERT_STREQ(expectedStr, convertedStr.c_str());
}

TEST_F(UUIDTest, TestUUIDFromStringConversion)
{
    Aws::String originalStr = "F81D4FAE-7DEC-11D0-A765-00A0C91E6BF6";

    UUID uuid(originalStr);
    Aws::String convertedStr = uuid;
    ASSERT_STREQ(originalStr.c_str(), convertedStr.c_str());
}

TEST_F(UUIDTest, TestPseudoRandomUUID)
{
    Aws::UnorderedSet<Aws::String> generatedUUids;

    for(size_t i = 0u; i < 10000u; ++i)
    {
        UUID uuid = UUID::PseudoRandomUUID();
        Aws::String uuidStr = uuid;
        ASSERT_EQ(36u, uuidStr.length());
        ByteBuffer rawUUID = uuid;
        ASSERT_EQ(16u, rawUUID.GetLength());
        ASSERT_EQ(0x40u, 0x40u & rawUUID[6]);
        ASSERT_EQ(0x80u, 0x80u & rawUUID[8]);

        auto foundIt = generatedUUids.find(uuidStr);
        ASSERT_TRUE( foundIt == generatedUUids.end() ) << "Collision: " << uuidStr;

        generatedUUids.insert(uuidStr);
    }

    ASSERT_EQ(10000u, generatedUUids.size());
}

TEST_F(UUIDTest, TestPseudoRandomParallelUUID)
{
    Aws::UnorderedSet<Aws::String> generatedAllUUids;

    static const size_t BATCHES = 20;
    Aws::Vector<std::future<Aws::UnorderedSet<Aws::String>>> futures(BATCHES);

    for(size_t i = 0; i < BATCHES; ++i)
    {
        futures[i] = std::async(
                []()
                {
                    Aws::UnorderedSet<Aws::String> generatedUUids;
                    for(size_t i = 0u; i < 1000u; ++i)
                    {
                        UUID uuid = UUID::PseudoRandomUUID();
                        Aws::String uuidStr = uuid;
                        generatedUUids.insert(uuidStr);
                    }

                    return generatedUUids;
                });
    }

    for(size_t i = 0; i < BATCHES; ++i)
    {
        Aws::UnorderedSet<Aws::String> batch = futures[i].get();
        ASSERT_EQ(1000u, batch.size());
        generatedAllUUids.insert(batch.begin(), batch.end());
    }
    ASSERT_EQ(BATCHES * 1000u, generatedAllUUids.size());
}

TEST_F(UUIDTest, TestPlatformRandomParallelUUID)
{
    Aws::UnorderedSet<Aws::String> generatedAllUUids;

    static const size_t BATCHES = 20;
    static const size_t PER_BATCH = 1000u;
    Aws::Vector<std::future<Aws::UnorderedSet<Aws::String>>> futures(BATCHES);

    for(size_t i = 0; i < BATCHES; ++i)
    {
        futures[i] = std::async(
                []()
                {
                    Aws::UnorderedSet<Aws::String> generatedUUids;
                    for(size_t i = 0u; i < PER_BATCH; ++i)
                    {
                        generatedUUids.insert(StringUtils::ToLower(Aws::String(UUID::RandomUUID()).c_str()));
                    }

                    return generatedUUids;
                });
    }

    for(size_t i = 0; i < BATCHES; ++i)
    {
        Aws::UnorderedSet<Aws::String> batch = futures[i].get();
        ASSERT_EQ(PER_BATCH, batch.size());
        generatedAllUUids.insert(batch.begin(), batch.end());
    }
    ASSERT_EQ(BATCHES * PER_BATCH, generatedAllUUids.size());
}