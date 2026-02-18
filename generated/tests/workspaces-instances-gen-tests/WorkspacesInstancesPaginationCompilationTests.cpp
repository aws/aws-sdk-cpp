/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkspacesInstances pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workspaces-instances/WorkspacesInstancesClientPagination.h>
#include <aws/workspaces-instances/WorkspacesInstancesPaginationBase.h>
#include <aws/workspaces-instances/model/ListInstanceTypesPaginationTraits.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesPaginationTraits.h>
#include <aws/workspaces-instances/model/ListRegionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkspacesInstancesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkspacesInstancesPaginationCompilationTest, WorkspacesInstancesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
