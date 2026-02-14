/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ResourceGroupsTaggingAPI pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClientPagination.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIPaginationBase.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ResourceGroupsTaggingAPIPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ResourceGroupsTaggingAPIPaginationCompilationTest, ResourceGroupsTaggingAPIPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
