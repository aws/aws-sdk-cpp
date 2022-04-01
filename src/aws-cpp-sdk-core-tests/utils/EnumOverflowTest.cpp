/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

TEST(EnumOverflowTest, TestHashRetrieval)
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

TEST(EnumOverflowTest, TestUseWithEnum)
{
    EnumParseOverflowContainer container;
    int hashCode = HashingUtils::HashString("VALUE4");
    container.StoreOverflow(hashCode, "VALUE4");

    TestEnum nonModeledValue = static_cast<TestEnum>(hashCode);
    ASSERT_EQ("VALUE4", container.RetrieveOverflow(static_cast<int>(nonModeledValue)));
}