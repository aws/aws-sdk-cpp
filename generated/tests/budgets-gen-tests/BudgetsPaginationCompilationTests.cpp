/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Budgets pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/budgets/BudgetsClientPagination.h>
#include <aws/budgets/BudgetsPaginationBase.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetsPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BudgetsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BudgetsPaginationCompilationTest, BudgetsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
