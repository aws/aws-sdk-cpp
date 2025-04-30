/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/timestream-influxdb/TimestreamInfluxDBClient.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointProvider.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointRules.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrorMarshaller.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrors.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ClusterDeploymentType.h>
#include <aws/timestream-influxdb/model/ClusterStatus.h>
#include <aws/timestream-influxdb/model/ConflictException.h>
#include <aws/timestream-influxdb/model/CreateDbClusterRequest.h>
#include <aws/timestream-influxdb/model/CreateDbClusterResult.h>
#include <aws/timestream-influxdb/model/CreateDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/CreateDbInstanceResult.h>
#include <aws/timestream-influxdb/model/CreateDbParameterGroupRequest.h>
#include <aws/timestream-influxdb/model/CreateDbParameterGroupResult.h>
#include <aws/timestream-influxdb/model/DbClusterSummary.h>
#include <aws/timestream-influxdb/model/DbInstanceForClusterSummary.h>
#include <aws/timestream-influxdb/model/DbInstanceSummary.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbParameterGroupSummary.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeleteDbClusterRequest.h>
#include <aws/timestream-influxdb/model/DeleteDbClusterResult.h>
#include <aws/timestream-influxdb/model/DeleteDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/DeleteDbInstanceResult.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/timestream-influxdb/model/Duration.h>
#include <aws/timestream-influxdb/model/DurationType.h>
#include <aws/timestream-influxdb/model/FailoverMode.h>
#include <aws/timestream-influxdb/model/GetDbClusterRequest.h>
#include <aws/timestream-influxdb/model/GetDbClusterResult.h>
#include <aws/timestream-influxdb/model/GetDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/GetDbInstanceResult.h>
#include <aws/timestream-influxdb/model/GetDbParameterGroupRequest.h>
#include <aws/timestream-influxdb/model/GetDbParameterGroupResult.h>
#include <aws/timestream-influxdb/model/InfluxDBv2Parameters.h>
#include <aws/timestream-influxdb/model/InstanceMode.h>
#include <aws/timestream-influxdb/model/ListDbClustersRequest.h>
#include <aws/timestream-influxdb/model/ListDbClustersResult.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterResult.h>
#include <aws/timestream-influxdb/model/ListDbInstancesRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesResult.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsRequest.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsResult.h>
#include <aws/timestream-influxdb/model/ListTagsForResourceRequest.h>
#include <aws/timestream-influxdb/model/ListTagsForResourceResult.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/timestream-influxdb/model/LogLevel.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/Parameters.h>
#include <aws/timestream-influxdb/model/ResourceNotFoundException.h>
#include <aws/timestream-influxdb/model/S3Configuration.h>
#include <aws/timestream-influxdb/model/Status.h>
#include <aws/timestream-influxdb/model/TagResourceRequest.h>
#include <aws/timestream-influxdb/model/ThrottlingException.h>
#include <aws/timestream-influxdb/model/TracingType.h>
#include <aws/timestream-influxdb/model/UntagResourceRequest.h>
#include <aws/timestream-influxdb/model/UpdateDbClusterRequest.h>
#include <aws/timestream-influxdb/model/UpdateDbClusterResult.h>
#include <aws/timestream-influxdb/model/UpdateDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/UpdateDbInstanceResult.h>
#include <aws/timestream-influxdb/model/ValidationException.h>
#include <aws/timestream-influxdb/model/ValidationExceptionReason.h>

using TimestreamInfluxDBIncludeTest = ::testing::Test;

TEST_F(TimestreamInfluxDBIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TimestreamInfluxDB::TimestreamInfluxDBClient>("TimestreamInfluxDBIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
