/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MWAAServerless pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mwaa-serverless/MWAAServerlessClientPagination.h>
#include <aws/mwaa-serverless/MWAAServerlessPaginationBase.h>
#include <aws/mwaa-serverless/model/ListWorkflowsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MWAAServerlessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MWAAServerlessPaginationCompilationTest, MWAAServerlessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
