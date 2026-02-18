/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Appflow pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appflow/AppflowClientPagination.h>
#include <aws/appflow/AppflowPaginationBase.h>
#include <aws/appflow/model/ListFlowsPaginationTraits.h>
#include <aws/appflow/model/DescribeConnectorsPaginationTraits.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsPaginationTraits.h>
#include <aws/appflow/model/DescribeConnectorProfilesPaginationTraits.h>
#include <aws/appflow/model/ListConnectorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppflowPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppflowPaginationCompilationTest, AppflowPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
