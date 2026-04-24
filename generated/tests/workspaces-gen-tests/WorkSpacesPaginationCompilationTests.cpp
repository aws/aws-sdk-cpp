/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkSpaces pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workspaces/WorkSpacesClientPagination.h>
#include <aws/workspaces/WorkSpacesPaginationBase.h>
#include <aws/workspaces/model/DescribeWorkspacesPaginationTraits.h>
#include <aws/workspaces/model/ListAccountLinksPaginationTraits.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesPaginationTraits.h>
#include <aws/workspaces/model/DescribeApplicationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkSpacesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkSpacesPaginationCompilationTest, WorkSpacesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
