/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ResourceGroups pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/resource-groups/ResourceGroupsClientPagination.h>
#include <aws/resource-groups/ResourceGroupsPaginationBase.h>
#include <aws/resource-groups/model/SearchResourcesPaginationTraits.h>
#include <aws/resource-groups/model/ListTagSyncTasksPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupResourcesPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupsPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupingStatusesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ResourceGroupsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ResourceGroupsPaginationCompilationTest, ResourceGroupsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
