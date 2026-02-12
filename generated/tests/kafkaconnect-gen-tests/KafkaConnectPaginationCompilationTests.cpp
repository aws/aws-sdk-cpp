/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KafkaConnect pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kafkaconnect/KafkaConnectClientPagination.h>
#include <aws/kafkaconnect/KafkaConnectPaginationBase.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListCustomPluginsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListConnectorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KafkaConnectPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KafkaConnectPaginationCompilationTest, KafkaConnectPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
