/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/controltower/ControlTowerClient.h>
#include <aws/controltower/ControlTowerEndpointProvider.h>
#include <aws/controltower/ControlTowerEndpointRules.h>
#include <aws/controltower/ControlTowerErrorMarshaller.h>
#include <aws/controltower/ControlTowerErrors.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/controltower/ControlTowerServiceClientModel.h>
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/BaselineOperation.h>
#include <aws/controltower/model/BaselineOperationStatus.h>
#include <aws/controltower/model/BaselineOperationType.h>
#include <aws/controltower/model/BaselineSummary.h>
#include <aws/controltower/model/ControlOperation.h>
#include <aws/controltower/model/ControlOperationFilter.h>
#include <aws/controltower/model/ControlOperationStatus.h>
#include <aws/controltower/model/ControlOperationSummary.h>
#include <aws/controltower/model/ControlOperationType.h>
#include <aws/controltower/model/CreateLandingZoneRequest.h>
#include <aws/controltower/model/CreateLandingZoneResult.h>
#include <aws/controltower/model/DeleteLandingZoneRequest.h>
#include <aws/controltower/model/DeleteLandingZoneResult.h>
#include <aws/controltower/model/DisableBaselineRequest.h>
#include <aws/controltower/model/DisableBaselineResult.h>
#include <aws/controltower/model/DisableControlRequest.h>
#include <aws/controltower/model/DisableControlResult.h>
#include <aws/controltower/model/DriftStatus.h>
#include <aws/controltower/model/DriftStatusSummary.h>
#include <aws/controltower/model/EnableBaselineRequest.h>
#include <aws/controltower/model/EnableBaselineResult.h>
#include <aws/controltower/model/EnableControlRequest.h>
#include <aws/controltower/model/EnableControlResult.h>
#include <aws/controltower/model/EnabledBaselineDetails.h>
#include <aws/controltower/model/EnabledBaselineDriftStatus.h>
#include <aws/controltower/model/EnabledBaselineDriftStatusSummary.h>
#include <aws/controltower/model/EnabledBaselineDriftTypes.h>
#include <aws/controltower/model/EnabledBaselineFilter.h>
#include <aws/controltower/model/EnabledBaselineInheritanceDrift.h>
#include <aws/controltower/model/EnabledBaselineParameter.h>
#include <aws/controltower/model/EnabledBaselineParameterSummary.h>
#include <aws/controltower/model/EnabledBaselineSummary.h>
#include <aws/controltower/model/EnabledControlDetails.h>
#include <aws/controltower/model/EnabledControlFilter.h>
#include <aws/controltower/model/EnabledControlParameter.h>
#include <aws/controltower/model/EnabledControlParameterSummary.h>
#include <aws/controltower/model/EnabledControlSummary.h>
#include <aws/controltower/model/EnablementStatus.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
#include <aws/controltower/model/GetBaselineOperationRequest.h>
#include <aws/controltower/model/GetBaselineOperationResult.h>
#include <aws/controltower/model/GetBaselineRequest.h>
#include <aws/controltower/model/GetBaselineResult.h>
#include <aws/controltower/model/GetControlOperationRequest.h>
#include <aws/controltower/model/GetControlOperationResult.h>
#include <aws/controltower/model/GetEnabledBaselineRequest.h>
#include <aws/controltower/model/GetEnabledBaselineResult.h>
#include <aws/controltower/model/GetEnabledControlRequest.h>
#include <aws/controltower/model/GetEnabledControlResult.h>
#include <aws/controltower/model/GetLandingZoneOperationRequest.h>
#include <aws/controltower/model/GetLandingZoneOperationResult.h>
#include <aws/controltower/model/GetLandingZoneRequest.h>
#include <aws/controltower/model/GetLandingZoneResult.h>
#include <aws/controltower/model/LandingZoneDetail.h>
#include <aws/controltower/model/LandingZoneDriftStatus.h>
#include <aws/controltower/model/LandingZoneDriftStatusSummary.h>
#include <aws/controltower/model/LandingZoneOperationDetail.h>
#include <aws/controltower/model/LandingZoneOperationFilter.h>
#include <aws/controltower/model/LandingZoneOperationStatus.h>
#include <aws/controltower/model/LandingZoneOperationSummary.h>
#include <aws/controltower/model/LandingZoneOperationType.h>
#include <aws/controltower/model/LandingZoneStatus.h>
#include <aws/controltower/model/LandingZoneSummary.h>
#include <aws/controltower/model/ListBaselinesRequest.h>
#include <aws/controltower/model/ListBaselinesResult.h>
#include <aws/controltower/model/ListControlOperationsRequest.h>
#include <aws/controltower/model/ListControlOperationsResult.h>
#include <aws/controltower/model/ListEnabledBaselinesRequest.h>
#include <aws/controltower/model/ListEnabledBaselinesResult.h>
#include <aws/controltower/model/ListEnabledControlsRequest.h>
#include <aws/controltower/model/ListEnabledControlsResult.h>
#include <aws/controltower/model/ListLandingZoneOperationsRequest.h>
#include <aws/controltower/model/ListLandingZoneOperationsResult.h>
#include <aws/controltower/model/ListLandingZonesRequest.h>
#include <aws/controltower/model/ListLandingZonesResult.h>
#include <aws/controltower/model/ListTagsForResourceRequest.h>
#include <aws/controltower/model/ListTagsForResourceResult.h>
#include <aws/controltower/model/Region.h>
#include <aws/controltower/model/ResetEnabledBaselineRequest.h>
#include <aws/controltower/model/ResetEnabledBaselineResult.h>
#include <aws/controltower/model/ResetEnabledControlRequest.h>
#include <aws/controltower/model/ResetEnabledControlResult.h>
#include <aws/controltower/model/ResetLandingZoneRequest.h>
#include <aws/controltower/model/ResetLandingZoneResult.h>
#include <aws/controltower/model/TagResourceRequest.h>
#include <aws/controltower/model/TagResourceResult.h>
#include <aws/controltower/model/ThrottlingException.h>
#include <aws/controltower/model/UntagResourceRequest.h>
#include <aws/controltower/model/UntagResourceResult.h>
#include <aws/controltower/model/UpdateEnabledBaselineRequest.h>
#include <aws/controltower/model/UpdateEnabledBaselineResult.h>
#include <aws/controltower/model/UpdateEnabledControlRequest.h>
#include <aws/controltower/model/UpdateEnabledControlResult.h>
#include <aws/controltower/model/UpdateLandingZoneRequest.h>
#include <aws/controltower/model/UpdateLandingZoneResult.h>

using ControlTowerIncludeTest = ::testing::Test;

TEST_F(ControlTowerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ControlTower::ControlTowerClient>("ControlTowerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
