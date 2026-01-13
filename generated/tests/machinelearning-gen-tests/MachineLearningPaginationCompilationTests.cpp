/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MachineLearning pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/machinelearning/MachineLearningClientPagination.h>
#include <aws/machinelearning/MachineLearningPaginationBase.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeEvaluationsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeDataSourcesPaginationTraits.h>
#include <aws/machinelearning/model/DescribeMLModelsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MachineLearningPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MachineLearningPaginationCompilationTest, MachineLearningPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
