/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iot1click-devices/IoT1ClickDevicesServiceClient.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointProvider.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointRules.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrorMarshaller.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceErrors.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceServiceClientModel.h>
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/Attributes.h>
#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeRequest.h>
#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeResult.h>
#include <aws/iot1click-devices/model/DescribeDeviceRequest.h>
#include <aws/iot1click-devices/model/DescribeDeviceResult.h>
#include <aws/iot1click-devices/model/Device.h>
#include <aws/iot1click-devices/model/DeviceDescription.h>
#include <aws/iot1click-devices/model/DeviceEvent.h>
#include <aws/iot1click-devices/model/DeviceMethod.h>
#include <aws/iot1click-devices/model/FinalizeDeviceClaimRequest.h>
#include <aws/iot1click-devices/model/FinalizeDeviceClaimResult.h>
#include <aws/iot1click-devices/model/ForbiddenException.h>
#include <aws/iot1click-devices/model/GetDeviceMethodsRequest.h>
#include <aws/iot1click-devices/model/GetDeviceMethodsResult.h>
#include <aws/iot1click-devices/model/InitiateDeviceClaimRequest.h>
#include <aws/iot1click-devices/model/InitiateDeviceClaimResult.h>
#include <aws/iot1click-devices/model/InternalFailureException.h>
#include <aws/iot1click-devices/model/InvalidRequestException.h>
#include <aws/iot1click-devices/model/InvokeDeviceMethodRequest.h>
#include <aws/iot1click-devices/model/InvokeDeviceMethodResult.h>
#include <aws/iot1click-devices/model/ListDeviceEventsRequest.h>
#include <aws/iot1click-devices/model/ListDeviceEventsResult.h>
#include <aws/iot1click-devices/model/ListDevicesRequest.h>
#include <aws/iot1click-devices/model/ListDevicesResult.h>
#include <aws/iot1click-devices/model/ListTagsForResourceRequest.h>
#include <aws/iot1click-devices/model/ListTagsForResourceResult.h>
#include <aws/iot1click-devices/model/PreconditionFailedException.h>
#include <aws/iot1click-devices/model/RangeNotSatisfiableException.h>
#include <aws/iot1click-devices/model/ResourceConflictException.h>
#include <aws/iot1click-devices/model/ResourceNotFoundException.h>
#include <aws/iot1click-devices/model/TagResourceRequest.h>
#include <aws/iot1click-devices/model/UnclaimDeviceRequest.h>
#include <aws/iot1click-devices/model/UnclaimDeviceResult.h>
#include <aws/iot1click-devices/model/UntagResourceRequest.h>
#include <aws/iot1click-devices/model/UpdateDeviceStateRequest.h>
#include <aws/iot1click-devices/model/UpdateDeviceStateResult.h>

using IoT1ClickDevicesServiceIncludeTest = ::testing::Test;

TEST_F(IoT1ClickDevicesServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  auto pClient = Aws::MakeUnique<Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceClient>("IoT1ClickDevicesServiceIncludeTest", config);
  ASSERT_TRUE(pClient.get());
}
