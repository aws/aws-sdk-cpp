/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/workspaces-thin-client/WorkSpacesThinClientClient.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointProvider.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointRules.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrorMarshaller.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrors.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientRequest.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientServiceClientModel.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/ApplyTimeOf.h>
#include <aws/workspaces-thin-client/model/ConflictException.h>
#include <aws/workspaces-thin-client/model/CreateEnvironmentRequest.h>
#include <aws/workspaces-thin-client/model/CreateEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/DayOfWeek.h>
#include <aws/workspaces-thin-client/model/DeleteDeviceRequest.h>
#include <aws/workspaces-thin-client/model/DeleteDeviceResult.h>
#include <aws/workspaces-thin-client/model/DeleteEnvironmentRequest.h>
#include <aws/workspaces-thin-client/model/DeleteEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/DeregisterDeviceRequest.h>
#include <aws/workspaces-thin-client/model/DeregisterDeviceResult.h>
#include <aws/workspaces-thin-client/model/DesktopType.h>
#include <aws/workspaces-thin-client/model/Device.h>
#include <aws/workspaces-thin-client/model/DeviceSoftwareSetComplianceStatus.h>
#include <aws/workspaces-thin-client/model/DeviceStatus.h>
#include <aws/workspaces-thin-client/model/DeviceSummary.h>
#include <aws/workspaces-thin-client/model/Environment.h>
#include <aws/workspaces-thin-client/model/EnvironmentSoftwareSetComplianceStatus.h>
#include <aws/workspaces-thin-client/model/EnvironmentSummary.h>
#include <aws/workspaces-thin-client/model/GetDeviceRequest.h>
#include <aws/workspaces-thin-client/model/GetDeviceResult.h>
#include <aws/workspaces-thin-client/model/GetEnvironmentRequest.h>
#include <aws/workspaces-thin-client/model/GetEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/GetSoftwareSetRequest.h>
#include <aws/workspaces-thin-client/model/GetSoftwareSetResult.h>
#include <aws/workspaces-thin-client/model/InternalServerException.h>
#include <aws/workspaces-thin-client/model/ListDevicesRequest.h>
#include <aws/workspaces-thin-client/model/ListDevicesResult.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsRequest.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsResult.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsRequest.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsResult.h>
#include <aws/workspaces-thin-client/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-thin-client/model/ListTagsForResourceResult.h>
#include <aws/workspaces-thin-client/model/MaintenanceWindow.h>
#include <aws/workspaces-thin-client/model/MaintenanceWindowType.h>
#include <aws/workspaces-thin-client/model/ResourceNotFoundException.h>
#include <aws/workspaces-thin-client/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-thin-client/model/Software.h>
#include <aws/workspaces-thin-client/model/SoftwareSet.h>
#include <aws/workspaces-thin-client/model/SoftwareSetSummary.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateMode.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateStatus.h>
#include <aws/workspaces-thin-client/model/SoftwareSetValidationStatus.h>
#include <aws/workspaces-thin-client/model/TagResourceRequest.h>
#include <aws/workspaces-thin-client/model/TagResourceResult.h>
#include <aws/workspaces-thin-client/model/TargetDeviceStatus.h>
#include <aws/workspaces-thin-client/model/ThrottlingException.h>
#include <aws/workspaces-thin-client/model/UntagResourceRequest.h>
#include <aws/workspaces-thin-client/model/UntagResourceResult.h>
#include <aws/workspaces-thin-client/model/UpdateDeviceRequest.h>
#include <aws/workspaces-thin-client/model/UpdateDeviceResult.h>
#include <aws/workspaces-thin-client/model/UpdateEnvironmentRequest.h>
#include <aws/workspaces-thin-client/model/UpdateEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/UpdateSoftwareSetRequest.h>
#include <aws/workspaces-thin-client/model/UpdateSoftwareSetResult.h>
#include <aws/workspaces-thin-client/model/ValidationException.h>
#include <aws/workspaces-thin-client/model/ValidationExceptionField.h>
#include <aws/workspaces-thin-client/model/ValidationExceptionReason.h>

using WorkSpacesThinIncludeTestIncludeTest = ::testing::Test;

TEST_F(WorkSpacesThinIncludeTestIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::WorkSpacesThinClient::WorkSpacesThinClientClient>("WorkSpacesThinIncludeTestIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
