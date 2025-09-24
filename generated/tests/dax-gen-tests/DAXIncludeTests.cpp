/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dax/DAXClient.h>
#include <aws/dax/DAXEndpointProvider.h>
#include <aws/dax/DAXEndpointRules.h>
#include <aws/dax/DAXErrorMarshaller.h>
#include <aws/dax/DAXErrors.h>
#include <aws/dax/DAXRequest.h>
#include <aws/dax/DAXServiceClientModel.h>
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/ChangeType.h>
#include <aws/dax/model/Cluster.h>
#include <aws/dax/model/ClusterEndpointEncryptionType.h>
#include <aws/dax/model/CreateClusterRequest.h>
#include <aws/dax/model/CreateClusterResult.h>
#include <aws/dax/model/CreateParameterGroupRequest.h>
#include <aws/dax/model/CreateParameterGroupResult.h>
#include <aws/dax/model/CreateSubnetGroupRequest.h>
#include <aws/dax/model/CreateSubnetGroupResult.h>
#include <aws/dax/model/DecreaseReplicationFactorRequest.h>
#include <aws/dax/model/DecreaseReplicationFactorResult.h>
#include <aws/dax/model/DeleteClusterRequest.h>
#include <aws/dax/model/DeleteClusterResult.h>
#include <aws/dax/model/DeleteParameterGroupRequest.h>
#include <aws/dax/model/DeleteParameterGroupResult.h>
#include <aws/dax/model/DeleteSubnetGroupRequest.h>
#include <aws/dax/model/DeleteSubnetGroupResult.h>
#include <aws/dax/model/DescribeClustersRequest.h>
#include <aws/dax/model/DescribeClustersResult.h>
#include <aws/dax/model/DescribeDefaultParametersRequest.h>
#include <aws/dax/model/DescribeDefaultParametersResult.h>
#include <aws/dax/model/DescribeEventsRequest.h>
#include <aws/dax/model/DescribeEventsResult.h>
#include <aws/dax/model/DescribeParameterGroupsRequest.h>
#include <aws/dax/model/DescribeParameterGroupsResult.h>
#include <aws/dax/model/DescribeParametersRequest.h>
#include <aws/dax/model/DescribeParametersResult.h>
#include <aws/dax/model/DescribeSubnetGroupsRequest.h>
#include <aws/dax/model/DescribeSubnetGroupsResult.h>
#include <aws/dax/model/Endpoint.h>
#include <aws/dax/model/Event.h>
#include <aws/dax/model/IncreaseReplicationFactorRequest.h>
#include <aws/dax/model/IncreaseReplicationFactorResult.h>
#include <aws/dax/model/IsModifiable.h>
#include <aws/dax/model/ListTagsRequest.h>
#include <aws/dax/model/ListTagsResult.h>
#include <aws/dax/model/NetworkType.h>
#include <aws/dax/model/Node.h>
#include <aws/dax/model/NodeTypeSpecificValue.h>
#include <aws/dax/model/NotificationConfiguration.h>
#include <aws/dax/model/Parameter.h>
#include <aws/dax/model/ParameterGroup.h>
#include <aws/dax/model/ParameterGroupStatus.h>
#include <aws/dax/model/ParameterNameValue.h>
#include <aws/dax/model/ParameterType.h>
#include <aws/dax/model/RebootNodeRequest.h>
#include <aws/dax/model/RebootNodeResult.h>
#include <aws/dax/model/SSEDescription.h>
#include <aws/dax/model/SSESpecification.h>
#include <aws/dax/model/SSEStatus.h>
#include <aws/dax/model/SecurityGroupMembership.h>
#include <aws/dax/model/SourceType.h>
#include <aws/dax/model/Subnet.h>
#include <aws/dax/model/SubnetGroup.h>
#include <aws/dax/model/Tag.h>
#include <aws/dax/model/TagResourceRequest.h>
#include <aws/dax/model/TagResourceResult.h>
#include <aws/dax/model/UntagResourceRequest.h>
#include <aws/dax/model/UntagResourceResult.h>
#include <aws/dax/model/UpdateClusterRequest.h>
#include <aws/dax/model/UpdateClusterResult.h>
#include <aws/dax/model/UpdateParameterGroupRequest.h>
#include <aws/dax/model/UpdateParameterGroupResult.h>
#include <aws/dax/model/UpdateSubnetGroupRequest.h>
#include <aws/dax/model/UpdateSubnetGroupResult.h>

using DAXIncludeTest = ::testing::Test;

TEST_F(DAXIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DAX::DAXClient>("DAXIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
