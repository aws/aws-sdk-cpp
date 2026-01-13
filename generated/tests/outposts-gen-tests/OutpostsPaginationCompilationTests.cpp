/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Outposts pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/outposts/OutpostsClientPagination.h>
#include <aws/outposts/OutpostsPaginationBase.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/ListOutpostsPaginationTraits.h>
#include <aws/outposts/model/GetOutpostInstanceTypesPaginationTraits.h>
#include <aws/outposts/model/GetOutpostBillingInformationPaginationTraits.h>
#include <aws/outposts/model/ListOrdersPaginationTraits.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskPaginationTraits.h>
#include <aws/outposts/model/ListCatalogItemsPaginationTraits.h>
#include <aws/outposts/model/ListSitesPaginationTraits.h>
#include <aws/outposts/model/ListAssetInstancesPaginationTraits.h>
#include <aws/outposts/model/ListAssetsPaginationTraits.h>
#include <aws/outposts/model/ListCapacityTasksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OutpostsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OutpostsPaginationCompilationTest, OutpostsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
