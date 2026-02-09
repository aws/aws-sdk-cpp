/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeGuruProfiler pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codeguruprofiler/CodeGuruProfilerClientPagination.h>
#include <aws/codeguruprofiler/CodeGuruProfilerPaginationBase.h>
#include <aws/codeguruprofiler/model/ListProfileTimesPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsPaginationTraits.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeGuruProfilerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeGuruProfilerPaginationCompilationTest, CodeGuruProfilerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
