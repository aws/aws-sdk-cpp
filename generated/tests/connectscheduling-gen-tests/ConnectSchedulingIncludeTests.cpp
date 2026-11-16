/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/connectscheduling/ConnectSchedulingClient.h>
#include <aws/connectscheduling/ConnectSchedulingEndpointProvider.h>
#include <aws/connectscheduling/ConnectSchedulingErrorMarshaller.h>
#include <aws/connectscheduling/ConnectSchedulingErrors.h>
#include <aws/connectscheduling/ConnectSchedulingPaginationBase.h>
#include <aws/connectscheduling/ConnectSchedulingRequest.h>
#include <aws/connectscheduling/ConnectSchedulingServiceClientModel.h>
#include <aws/connectscheduling/ConnectSchedulingWaiter.h>
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/internal/ConnectSchedulingEndpointRules.h>
#include <aws/connectscheduling/model/ActorInfo.h>
#include <aws/connectscheduling/model/ApprovalType.h>
#include <aws/connectscheduling/model/ApproveTimeOffRequest.h>
#include <aws/connectscheduling/model/ApproveTimeOffResult.h>
#include <aws/connectscheduling/model/CancelTimeOffRequest.h>
#include <aws/connectscheduling/model/CancelTimeOffResult.h>
#include <aws/connectscheduling/model/ConflictException.h>
#include <aws/connectscheduling/model/CreateTimeOffRequest.h>
#include <aws/connectscheduling/model/CreateTimeOffResult.h>
#include <aws/connectscheduling/model/Duration.h>
#include <aws/connectscheduling/model/DurationUnit.h>
#include <aws/connectscheduling/model/GetTimeOffRequest.h>
#include <aws/connectscheduling/model/GetTimeOffResult.h>
#include <aws/connectscheduling/model/InternalServerException.h>
#include <aws/connectscheduling/model/PutTimeOffBalanceRequest.h>
#include <aws/connectscheduling/model/PutTimeOffBalanceResult.h>
#include <aws/connectscheduling/model/RejectTimeOffRequest.h>
#include <aws/connectscheduling/model/RejectTimeOffResult.h>
#include <aws/connectscheduling/model/ResourceNotFoundException.h>
#include <aws/connectscheduling/model/RuleFailureAction.h>
#include <aws/connectscheduling/model/ServiceQuotaExceededException.h>
#include <aws/connectscheduling/model/ThrottlingException.h>
#include <aws/connectscheduling/model/TimeOffStatus.h>
#include <aws/connectscheduling/model/TimeOffValidationCode.h>
#include <aws/connectscheduling/model/TimeOffValidationResult.h>
#include <aws/connectscheduling/model/TimeOffValidationSeverity.h>
#include <aws/connectscheduling/model/ValidationException.h>
#include <aws/connectscheduling/model/ValidationExceptionField.h>
#include <aws/connectscheduling/model/ValidationExceptionReason.h>

using ConnectSchedulingIncludeTest = ::testing::Test;

TEST_F(ConnectSchedulingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ConnectScheduling::ConnectSchedulingClient>("ConnectSchedulingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
