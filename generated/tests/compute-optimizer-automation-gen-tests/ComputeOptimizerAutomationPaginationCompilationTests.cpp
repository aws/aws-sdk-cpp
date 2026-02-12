/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ComputeOptimizerAutomation pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClientPagination.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationPaginationBase.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAccountsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ComputeOptimizerAutomationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ComputeOptimizerAutomationPaginationCompilationTest, ComputeOptimizerAutomationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
