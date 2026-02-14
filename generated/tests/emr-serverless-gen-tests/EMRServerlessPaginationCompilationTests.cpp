/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EMRServerless pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/emr-serverless/EMRServerlessClientPagination.h>
#include <aws/emr-serverless/EMRServerlessPaginationBase.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsPaginationTraits.h>
#include <aws/emr-serverless/model/ListApplicationsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EMRServerlessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EMRServerlessPaginationCompilationTest, EMRServerlessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
