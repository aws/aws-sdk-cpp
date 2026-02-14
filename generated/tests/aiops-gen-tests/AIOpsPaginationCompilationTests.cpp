/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AIOps pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/aiops/AIOpsClientPagination.h>
#include <aws/aiops/AIOpsPaginationBase.h>
#include <aws/aiops/model/ListInvestigationGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AIOpsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AIOpsPaginationCompilationTest, AIOpsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
