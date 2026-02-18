/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ComputeOptimizer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/compute-optimizer/ComputeOptimizerClientPagination.h>
#include <aws/compute-optimizer/ComputeOptimizerPaginationBase.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesPaginationTraits.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesPaginationTraits.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsPaginationTraits.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ComputeOptimizerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ComputeOptimizerPaginationCompilationTest, ComputeOptimizerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
