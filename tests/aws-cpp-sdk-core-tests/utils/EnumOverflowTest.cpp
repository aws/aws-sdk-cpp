/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

class EnumOverflowTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EnumOverflowTest, TestHashRetrieval)
{
   EnumParseOverflowContainer container;
   container.StoreOverflow(15, "fifteen");
   container.StoreOverflow(16, "sixteen");

   ASSERT_EQ("fifteen", container.RetrieveOverflow(15));
   ASSERT_EQ("", container.RetrieveOverflow(17));
}

enum class TestEnum
{
    VALUE1,
    VALUE2,
    VALUE3
};

TEST_F(EnumOverflowTest, TestUseWithEnum)
{
    EnumParseOverflowContainer container;
    int hashCode = HashingUtils::HashString("VALUE4");
    container.StoreOverflow(hashCode, "VALUE4");

    TestEnum nonModeledValue = static_cast<TestEnum>(hashCode);
    ASSERT_EQ("VALUE4", container.RetrieveOverflow(static_cast<int>(nonModeledValue)));
}

TEST_F(EnumOverflowTest, TestConstExpr)
{
    uint32_t hash0RT = HashingUtils::HashString("");
    constexpr uint32_t hash0CT = ConstExprHashingUtils::HashString("");
    EXPECT_EQ(hash0RT, hash0CT);

    uint32_t hashART = HashingUtils::HashString("A");
    constexpr uint32_t hashACT = ConstExprHashingUtils::HashString("A");
    EXPECT_EQ(hashART, hashACT);

    uint32_t hashAART = HashingUtils::HashString("AA");
    constexpr uint32_t hashAACT = ConstExprHashingUtils::HashString("AA");
    EXPECT_EQ(hashAART, hashAACT);

    uint32_t hashStrRT = HashingUtils::HashString("ObjectNotInActiveTierError");
    constexpr uint32_t hashStrCT = ConstExprHashingUtils::HashString("ObjectNotInActiveTierError");
    EXPECT_EQ(hashStrRT, hashStrCT);

    uint32_t hashStrLongRT = HashingUtils::HashString("ObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierError");
    uint32_t hashStrLongConstExprRT = ConstExprHashingUtils::HashString("ObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierError");
    constexpr uint32_t hashStrLongConstExprCT = ConstExprHashingUtils::HashString("ObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierErrorObjectNotInActiveTierError");
    EXPECT_EQ(hashStrLongRT, hashStrLongConstExprRT);
    EXPECT_EQ(hashStrLongRT, hashStrLongConstExprCT);

    static const char* EXAMPLES[] = {
        "",
        "s3:ReducedRedundancyLostObject",
        "s3:ObjectCreated:*",
        "s3:ObjectCreated:Put",
        "s3:ObjectCreated:Post",
        "s3:ObjectCreated:Copy",
        "s3:ObjectCreated:CompleteMultipartUpload",
        "s3:ObjectRemoved:*",
        "s3:ObjectRemoved:Delete",
        "s3:ObjectRemoved:DeleteMarkerCreated",
        "s3:ObjectRestore:*",
        "s3:ObjectRestore:Post",
        "s3:ObjectRestore:Completed",
        "s3:Replication:*",
        "s3:Replication:OperationFailedReplication",
        "s3:Replication:OperationNotTracked",
        "s3:Replication:OperationMissedThreshold",
        "s3:Replication:OperationReplicatedAfterThreshold",
        "s3:ObjectRestore:Delete",
        "s3:LifecycleTransition",
        "s3:IntelligentTiering",
        "s3:ObjectAcl:Put",
        "s3:LifecycleExpiration:*",
        "s3:LifecycleExpiration:Delete",
        "s3:LifecycleExpiration:DeleteMarkerCreated",
        "s3:ObjectTagging:*",
        "s3:ObjectTagging:Put",
        "s3:ObjectTagging:Delete"};
    static const size_t EXAMPLES_NUM = sizeof(EXAMPLES) / sizeof(EXAMPLES[0]);

    Aws::Set<uint32_t> hashes;
    for(size_t i = 0; i<EXAMPLES_NUM;++i)
    {
      uint32_t iterativeValue = HashingUtils::HashString(EXAMPLES[i]);
      uint32_t recursiveValue = ConstExprHashingUtils::HashString(EXAMPLES[i]);

      ASSERT_EQ(iterativeValue, recursiveValue) << "Expected the same hash value produced by "
                                                   "runtime and constexpr methods of HashString for a string: " << EXAMPLES[i];

      ASSERT_TRUE(std::find(hashes.begin(), hashes.end(), recursiveValue) == hashes.end()) << "Found a collision "
                                                                                              "in hash value at string: " << EXAMPLES[i];
      hashes.insert(recursiveValue);
    }
    ASSERT_EQ(EXAMPLES_NUM, hashes.size());
}