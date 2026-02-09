/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Kafka pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/kafka/KafkaClientPagination.h>
#include <aws/kafka/KafkaPaginationBase.h>
#include <aws/kafka/model/ListConfigurationRevisionsPaginationTraits.h>
#include <aws/kafka/model/ListScramSecretsPaginationTraits.h>
#include <aws/kafka/model/ListClientVpcConnectionsPaginationTraits.h>
#include <aws/kafka/model/ListClustersPaginationTraits.h>
#include <aws/kafka/model/ListNodesPaginationTraits.h>
#include <aws/kafka/model/ListTopicsPaginationTraits.h>
#include <aws/kafka/model/ListConfigurationsPaginationTraits.h>
#include <aws/kafka/model/ListReplicatorsPaginationTraits.h>
#include <aws/kafka/model/ListClusterOperationsPaginationTraits.h>
#include <aws/kafka/model/DescribeTopicPartitionsPaginationTraits.h>
#include <aws/kafka/model/ListClusterOperationsV2PaginationTraits.h>
#include <aws/kafka/model/ListKafkaVersionsPaginationTraits.h>
#include <aws/kafka/model/ListVpcConnectionsPaginationTraits.h>
#include <aws/kafka/model/ListClustersV2PaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KafkaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KafkaPaginationCompilationTest, KafkaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
