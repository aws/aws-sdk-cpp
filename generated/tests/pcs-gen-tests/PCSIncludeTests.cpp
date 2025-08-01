/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pcs/PCSClient.h>
#include <aws/pcs/PCSEndpointProvider.h>
#include <aws/pcs/PCSEndpointRules.h>
#include <aws/pcs/PCSErrorMarshaller.h>
#include <aws/pcs/PCSErrors.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/pcs/PCSServiceClientModel.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/Accounting.h>
#include <aws/pcs/model/AccountingMode.h>
#include <aws/pcs/model/AccountingRequest.h>
#include <aws/pcs/model/Cluster.h>
#include <aws/pcs/model/ClusterSlurmConfiguration.h>
#include <aws/pcs/model/ClusterSlurmConfigurationRequest.h>
#include <aws/pcs/model/ClusterStatus.h>
#include <aws/pcs/model/ClusterSummary.h>
#include <aws/pcs/model/ComputeNodeGroup.h>
#include <aws/pcs/model/ComputeNodeGroupConfiguration.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfiguration.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfigurationRequest.h>
#include <aws/pcs/model/ComputeNodeGroupStatus.h>
#include <aws/pcs/model/ComputeNodeGroupSummary.h>
#include <aws/pcs/model/ConflictException.h>
#include <aws/pcs/model/CreateClusterRequest.h>
#include <aws/pcs/model/CreateClusterResult.h>
#include <aws/pcs/model/CreateComputeNodeGroupRequest.h>
#include <aws/pcs/model/CreateComputeNodeGroupResult.h>
#include <aws/pcs/model/CreateQueueRequest.h>
#include <aws/pcs/model/CreateQueueResult.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/DeleteClusterRequest.h>
#include <aws/pcs/model/DeleteClusterResult.h>
#include <aws/pcs/model/DeleteComputeNodeGroupRequest.h>
#include <aws/pcs/model/DeleteComputeNodeGroupResult.h>
#include <aws/pcs/model/DeleteQueueRequest.h>
#include <aws/pcs/model/DeleteQueueResult.h>
#include <aws/pcs/model/Endpoint.h>
#include <aws/pcs/model/EndpointType.h>
#include <aws/pcs/model/ErrorInfo.h>
#include <aws/pcs/model/GetClusterRequest.h>
#include <aws/pcs/model/GetClusterResult.h>
#include <aws/pcs/model/GetComputeNodeGroupRequest.h>
#include <aws/pcs/model/GetComputeNodeGroupResult.h>
#include <aws/pcs/model/GetQueueRequest.h>
#include <aws/pcs/model/GetQueueResult.h>
#include <aws/pcs/model/InstanceConfig.h>
#include <aws/pcs/model/ListClustersRequest.h>
#include <aws/pcs/model/ListClustersResult.h>
#include <aws/pcs/model/ListComputeNodeGroupsRequest.h>
#include <aws/pcs/model/ListComputeNodeGroupsResult.h>
#include <aws/pcs/model/ListQueuesRequest.h>
#include <aws/pcs/model/ListQueuesResult.h>
#include <aws/pcs/model/ListTagsForResourceRequest.h>
#include <aws/pcs/model/ListTagsForResourceResult.h>
#include <aws/pcs/model/NetworkType.h>
#include <aws/pcs/model/Networking.h>
#include <aws/pcs/model/NetworkingRequest.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/Queue.h>
#include <aws/pcs/model/QueueStatus.h>
#include <aws/pcs/model/QueueSummary.h>
#include <aws/pcs/model/RegisterComputeNodeGroupInstanceRequest.h>
#include <aws/pcs/model/RegisterComputeNodeGroupInstanceResult.h>
#include <aws/pcs/model/ResourceNotFoundException.h>
#include <aws/pcs/model/ScalingConfiguration.h>
#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/pcs/model/Scheduler.h>
#include <aws/pcs/model/SchedulerRequest.h>
#include <aws/pcs/model/SchedulerType.h>
#include <aws/pcs/model/ServiceQuotaExceededException.h>
#include <aws/pcs/model/Size.h>
#include <aws/pcs/model/SlurmAuthKey.h>
#include <aws/pcs/model/SlurmCustomSetting.h>
#include <aws/pcs/model/SpotAllocationStrategy.h>
#include <aws/pcs/model/SpotOptions.h>
#include <aws/pcs/model/TagResourceRequest.h>
#include <aws/pcs/model/ThrottlingException.h>
#include <aws/pcs/model/UntagResourceRequest.h>
#include <aws/pcs/model/UpdateComputeNodeGroupRequest.h>
#include <aws/pcs/model/UpdateComputeNodeGroupResult.h>
#include <aws/pcs/model/UpdateComputeNodeGroupSlurmConfigurationRequest.h>
#include <aws/pcs/model/UpdateQueueRequest.h>
#include <aws/pcs/model/UpdateQueueResult.h>
#include <aws/pcs/model/ValidationException.h>
#include <aws/pcs/model/ValidationExceptionField.h>
#include <aws/pcs/model/ValidationExceptionReason.h>

using PCSIncludeTest = ::testing::Test;

TEST_F(PCSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PCS::PCSClient>("PCSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
