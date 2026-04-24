/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MQ pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mq/MQClientPagination.h>
#include <aws/mq/MQPaginationBase.h>
#include <aws/mq/model/ListBrokersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MQPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MQPaginationCompilationTest, MQPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
