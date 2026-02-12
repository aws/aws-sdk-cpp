/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CostandUsageReportService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cur/CostandUsageReportServiceClientPagination.h>
#include <aws/cur/CostandUsageReportServicePaginationBase.h>
#include <aws/cur/model/DescribeReportDefinitionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CostandUsageReportServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CostandUsageReportServicePaginationCompilationTest, CostandUsageReportServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
