/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SFN pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/states/SFNClientPagination.h>
#include <aws/states/SFNPaginationBase.h>
#include <aws/states/model/ListExecutionsPaginationTraits.h>
#include <aws/states/model/GetExecutionHistoryPaginationTraits.h>
#include <aws/states/model/ListActivitiesPaginationTraits.h>
#include <aws/states/model/ListStateMachinesPaginationTraits.h>
#include <aws/states/model/ListMapRunsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SFNPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SFNPaginationCompilationTest, SFNPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
