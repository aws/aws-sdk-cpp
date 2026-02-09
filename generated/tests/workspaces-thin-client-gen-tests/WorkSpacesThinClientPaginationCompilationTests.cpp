/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkSpacesThinClient pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workspaces-thin-client/WorkSpacesThinClientClientPagination.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientPaginationBase.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListDevicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkSpacesThinClientPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkSpacesThinClientPaginationCompilationTest, WorkSpacesThinClientPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
