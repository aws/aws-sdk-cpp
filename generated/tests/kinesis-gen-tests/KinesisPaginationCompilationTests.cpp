/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Kinesis pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kinesis/KinesisClientPagination.h>
#include <aws/kinesis/KinesisPaginationBase.h>
#include <aws/kinesis/model/ListStreamConsumersPaginationTraits.h>
#include <aws/kinesis/model/ListStreamsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KinesisPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KinesisPaginationCompilationTest, KinesisPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
