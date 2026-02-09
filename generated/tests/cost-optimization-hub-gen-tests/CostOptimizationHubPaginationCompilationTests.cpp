/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CostOptimizationHub pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cost-optimization-hub/CostOptimizationHubClientPagination.h>
#include <aws/cost-optimization-hub/CostOptimizationHubPaginationBase.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsPaginationTraits.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CostOptimizationHubPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CostOptimizationHubPaginationCompilationTest, CostOptimizationHubPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
