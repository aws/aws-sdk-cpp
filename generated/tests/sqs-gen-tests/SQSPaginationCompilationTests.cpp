/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SQS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sqs/SQSClientPagination.h>
#include <aws/sqs/SQSPaginationBase.h>
#include <aws/sqs/model/ListQueuesPaginationTraits.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SQSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SQSPaginationCompilationTest, SQSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
