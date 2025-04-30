/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointRules.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
#include <aws/snow-device-management/SnowDeviceManagementErrors.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/snow-device-management/SnowDeviceManagementServiceClientModel.h>
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/AttachmentStatus.h>
#include <aws/snow-device-management/model/CancelTaskRequest.h>
#include <aws/snow-device-management/model/CancelTaskResult.h>
#include <aws/snow-device-management/model/Capacity.h>
#include <aws/snow-device-management/model/Command.h>
#include <aws/snow-device-management/model/CpuOptions.h>
#include <aws/snow-device-management/model/CreateTaskRequest.h>
#include <aws/snow-device-management/model/CreateTaskResult.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesResult.h>
#include <aws/snow-device-management/model/DescribeDeviceRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceResult.h>
#include <aws/snow-device-management/model/DescribeExecutionRequest.h>
#include <aws/snow-device-management/model/DescribeExecutionResult.h>
#include <aws/snow-device-management/model/DescribeTaskRequest.h>
#include <aws/snow-device-management/model/DescribeTaskResult.h>
#include <aws/snow-device-management/model/DeviceSummary.h>
#include <aws/snow-device-management/model/EbsInstanceBlockDevice.h>
#include <aws/snow-device-management/model/ExecutionState.h>
#include <aws/snow-device-management/model/ExecutionSummary.h>
#include <aws/snow-device-management/model/Instance.h>
#include <aws/snow-device-management/model/InstanceBlockDeviceMapping.h>
#include <aws/snow-device-management/model/InstanceState.h>
#include <aws/snow-device-management/model/InstanceStateName.h>
#include <aws/snow-device-management/model/InstanceSummary.h>
#include <aws/snow-device-management/model/IpAddressAssignment.h>
#include <aws/snow-device-management/model/ListDeviceResourcesRequest.h>
#include <aws/snow-device-management/model/ListDeviceResourcesResult.h>
#include <aws/snow-device-management/model/ListDevicesRequest.h>
#include <aws/snow-device-management/model/ListDevicesResult.h>
#include <aws/snow-device-management/model/ListExecutionsRequest.h>
#include <aws/snow-device-management/model/ListExecutionsResult.h>
#include <aws/snow-device-management/model/ListTagsForResourceRequest.h>
#include <aws/snow-device-management/model/ListTagsForResourceResult.h>
#include <aws/snow-device-management/model/ListTasksRequest.h>
#include <aws/snow-device-management/model/ListTasksResult.h>
#include <aws/snow-device-management/model/PhysicalConnectorType.h>
#include <aws/snow-device-management/model/PhysicalNetworkInterface.h>
#include <aws/snow-device-management/model/Reboot.h>
#include <aws/snow-device-management/model/ResourceSummary.h>
#include <aws/snow-device-management/model/SecurityGroupIdentifier.h>
#include <aws/snow-device-management/model/SoftwareInformation.h>
#include <aws/snow-device-management/model/TagResourceRequest.h>
#include <aws/snow-device-management/model/TaskState.h>
#include <aws/snow-device-management/model/TaskSummary.h>
#include <aws/snow-device-management/model/Unlock.h>
#include <aws/snow-device-management/model/UnlockState.h>
#include <aws/snow-device-management/model/UntagResourceRequest.h>

using SnowDeviceManagementIncludeTest = ::testing::Test;

TEST_F(SnowDeviceManagementIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SnowDeviceManagement::SnowDeviceManagementClient>("SnowDeviceManagementIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
