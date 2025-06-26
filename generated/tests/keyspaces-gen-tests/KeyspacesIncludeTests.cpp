/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/keyspaces/KeyspacesClient.h>
#include <aws/keyspaces/KeyspacesEndpointProvider.h>
#include <aws/keyspaces/KeyspacesEndpointRules.h>
#include <aws/keyspaces/KeyspacesErrorMarshaller.h>
#include <aws/keyspaces/KeyspacesErrors.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/keyspaces/KeyspacesServiceClientModel.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/AutoScalingPolicy.h>
#include <aws/keyspaces/model/AutoScalingSettings.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
#include <aws/keyspaces/model/CapacitySpecification.h>
#include <aws/keyspaces/model/CapacitySpecificationSummary.h>
#include <aws/keyspaces/model/CdcPropagateTags.h>
#include <aws/keyspaces/model/CdcSpecification.h>
#include <aws/keyspaces/model/CdcSpecificationSummary.h>
#include <aws/keyspaces/model/CdcStatus.h>
#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <aws/keyspaces/model/ClientSideTimestampsStatus.h>
#include <aws/keyspaces/model/ClusteringKey.h>
#include <aws/keyspaces/model/ColumnDefinition.h>
#include <aws/keyspaces/model/Comment.h>
#include <aws/keyspaces/model/CreateKeyspaceRequest.h>
#include <aws/keyspaces/model/CreateKeyspaceResult.h>
#include <aws/keyspaces/model/CreateTableRequest.h>
#include <aws/keyspaces/model/CreateTableResult.h>
#include <aws/keyspaces/model/CreateTypeRequest.h>
#include <aws/keyspaces/model/CreateTypeResult.h>
#include <aws/keyspaces/model/DeleteKeyspaceRequest.h>
#include <aws/keyspaces/model/DeleteKeyspaceResult.h>
#include <aws/keyspaces/model/DeleteTableRequest.h>
#include <aws/keyspaces/model/DeleteTableResult.h>
#include <aws/keyspaces/model/DeleteTypeRequest.h>
#include <aws/keyspaces/model/DeleteTypeResult.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/EncryptionType.h>
#include <aws/keyspaces/model/FieldDefinition.h>
#include <aws/keyspaces/model/GetKeyspaceRequest.h>
#include <aws/keyspaces/model/GetKeyspaceResult.h>
#include <aws/keyspaces/model/GetTableAutoScalingSettingsRequest.h>
#include <aws/keyspaces/model/GetTableAutoScalingSettingsResult.h>
#include <aws/keyspaces/model/GetTableRequest.h>
#include <aws/keyspaces/model/GetTableResult.h>
#include <aws/keyspaces/model/GetTypeRequest.h>
#include <aws/keyspaces/model/GetTypeResult.h>
#include <aws/keyspaces/model/KeyspaceStatus.h>
#include <aws/keyspaces/model/KeyspaceSummary.h>
#include <aws/keyspaces/model/ListKeyspacesRequest.h>
#include <aws/keyspaces/model/ListKeyspacesResult.h>
#include <aws/keyspaces/model/ListTablesRequest.h>
#include <aws/keyspaces/model/ListTablesResult.h>
#include <aws/keyspaces/model/ListTagsForResourceRequest.h>
#include <aws/keyspaces/model/ListTagsForResourceResult.h>
#include <aws/keyspaces/model/ListTypesRequest.h>
#include <aws/keyspaces/model/ListTypesResult.h>
#include <aws/keyspaces/model/PartitionKey.h>
#include <aws/keyspaces/model/PointInTimeRecovery.h>
#include <aws/keyspaces/model/PointInTimeRecoveryStatus.h>
#include <aws/keyspaces/model/PointInTimeRecoverySummary.h>
#include <aws/keyspaces/model/ReplicaAutoScalingSpecification.h>
#include <aws/keyspaces/model/ReplicaSpecification.h>
#include <aws/keyspaces/model/ReplicaSpecificationSummary.h>
#include <aws/keyspaces/model/ReplicationGroupStatus.h>
#include <aws/keyspaces/model/ReplicationSpecification.h>
#include <aws/keyspaces/model/ResourceNotFoundException.h>
#include <aws/keyspaces/model/RestoreTableRequest.h>
#include <aws/keyspaces/model/RestoreTableResult.h>
#include <aws/keyspaces/model/Rs.h>
#include <aws/keyspaces/model/SchemaDefinition.h>
#include <aws/keyspaces/model/SortOrder.h>
#include <aws/keyspaces/model/StaticColumn.h>
#include <aws/keyspaces/model/TableStatus.h>
#include <aws/keyspaces/model/TableSummary.h>
#include <aws/keyspaces/model/Tag.h>
#include <aws/keyspaces/model/TagResourceRequest.h>
#include <aws/keyspaces/model/TagResourceResult.h>
#include <aws/keyspaces/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/keyspaces/model/ThroughputMode.h>
#include <aws/keyspaces/model/TimeToLive.h>
#include <aws/keyspaces/model/TimeToLiveStatus.h>
#include <aws/keyspaces/model/TypeStatus.h>
#include <aws/keyspaces/model/UntagResourceRequest.h>
#include <aws/keyspaces/model/UntagResourceResult.h>
#include <aws/keyspaces/model/UpdateKeyspaceRequest.h>
#include <aws/keyspaces/model/UpdateKeyspaceResult.h>
#include <aws/keyspaces/model/UpdateTableRequest.h>
#include <aws/keyspaces/model/UpdateTableResult.h>
#include <aws/keyspaces/model/ViewType.h>

using KeyspacesIncludeTest = ::testing::Test;

TEST_F(KeyspacesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Keyspaces::KeyspacesClient>("KeyspacesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
