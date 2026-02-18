/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApplicationCostProfiler pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/applicationcostprofiler/ApplicationCostProfilerClientPagination.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerPaginationBase.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApplicationCostProfilerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApplicationCostProfilerPaginationCompilationTest, ApplicationCostProfilerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
