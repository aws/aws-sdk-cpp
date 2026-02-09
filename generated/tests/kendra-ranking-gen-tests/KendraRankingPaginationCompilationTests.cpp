/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KendraRanking pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kendra-ranking/KendraRankingClientPagination.h>
#include <aws/kendra-ranking/KendraRankingPaginationBase.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KendraRankingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KendraRankingPaginationCompilationTest, KendraRankingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
