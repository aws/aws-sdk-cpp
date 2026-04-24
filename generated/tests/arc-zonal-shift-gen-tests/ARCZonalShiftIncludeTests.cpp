/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/arc-zonal-shift/ARCZonalShiftClient.h>
#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <aws/arc-zonal-shift/ARCZonalShiftEndpointRules.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrorMarshaller.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrors.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/arc-zonal-shift/ARCZonalShiftServiceClientModel.h>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/AppliedStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftAppliedStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftExecutionStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
#include <aws/arc-zonal-shift/model/AutoshiftObserverNotificationStatus.h>
#include <aws/arc-zonal-shift/model/AutoshiftSummary.h>
#include <aws/arc-zonal-shift/model/CancelPracticeRunRequest.h>
#include <aws/arc-zonal-shift/model/CancelPracticeRunResult.h>
#include <aws/arc-zonal-shift/model/CancelZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/CancelZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/ConflictException.h>
#include <aws/arc-zonal-shift/model/ConflictExceptionReason.h>
#include <aws/arc-zonal-shift/model/ControlCondition.h>
#include <aws/arc-zonal-shift/model/ControlConditionType.h>
#include <aws/arc-zonal-shift/model/CreatePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/CreatePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/DeletePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/DeletePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/GetAutoshiftObserverNotificationStatusRequest.h>
#include <aws/arc-zonal-shift/model/GetAutoshiftObserverNotificationStatusResult.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceRequest.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceResult.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsRequest.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsResult.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesRequest.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesResult.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsRequest.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsResult.h>
#include <aws/arc-zonal-shift/model/ManagedResourceSummary.h>
#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
#include <aws/arc-zonal-shift/model/PracticeRunOutcome.h>
#include <aws/arc-zonal-shift/model/ShiftType.h>
#include <aws/arc-zonal-shift/model/StartPracticeRunRequest.h>
#include <aws/arc-zonal-shift/model/StartPracticeRunResult.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/UpdateAutoshiftObserverNotificationStatusRequest.h>
#include <aws/arc-zonal-shift/model/UpdateAutoshiftObserverNotificationStatusResult.h>
#include <aws/arc-zonal-shift/model/UpdatePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/UpdatePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/UpdateZonalAutoshiftConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/UpdateZonalAutoshiftConfigurationResult.h>
#include <aws/arc-zonal-shift/model/UpdateZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/UpdateZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/ValidationException.h>
#include <aws/arc-zonal-shift/model/ValidationExceptionReason.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
#include <aws/arc-zonal-shift/model/ZonalShiftSummary.h>

using ARCZonalShiftIncludeTest = ::testing::Test;

TEST_F(ARCZonalShiftIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ARCZonalShift::ARCZonalShiftClient>("ARCZonalShiftIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
