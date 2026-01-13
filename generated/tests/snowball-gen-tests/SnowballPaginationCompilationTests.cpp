/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Snowball pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/snowball/SnowballClientPagination.h>
#include <aws/snowball/SnowballPaginationBase.h>
#include <aws/snowball/model/ListClustersPaginationTraits.h>
#include <aws/snowball/model/ListCompatibleImagesPaginationTraits.h>
#include <aws/snowball/model/ListJobsPaginationTraits.h>
#include <aws/snowball/model/DescribeAddressesPaginationTraits.h>
#include <aws/snowball/model/ListLongTermPricingPaginationTraits.h>
#include <aws/snowball/model/ListClusterJobsPaginationTraits.h>
#include <aws/snowball/model/ListPickupLocationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SnowballPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SnowballPaginationCompilationTest, SnowballPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
