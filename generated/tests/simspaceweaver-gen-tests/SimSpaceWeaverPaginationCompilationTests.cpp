/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SimSpaceWeaver pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/simspaceweaver/SimSpaceWeaverClientPagination.h>
#include <aws/simspaceweaver/SimSpaceWeaverPaginationBase.h>
#include <aws/simspaceweaver/model/ListSimulationsPaginationTraits.h>
#include <aws/simspaceweaver/model/ListAppsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SimSpaceWeaverPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SimSpaceWeaverPaginationCompilationTest, SimSpaceWeaverPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
