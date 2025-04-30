/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iot-jobs-data/IoTJobsDataPlaneClient.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointProvider.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointRules.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrorMarshaller.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneServiceClientModel.h>
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/model/CommandParameterValue.h>
#include <aws/iot-jobs-data/model/ConflictException.h>
#include <aws/iot-jobs-data/model/DescribeJobExecutionRequest.h>
#include <aws/iot-jobs-data/model/DescribeJobExecutionResult.h>
#include <aws/iot-jobs-data/model/GetPendingJobExecutionsRequest.h>
#include <aws/iot-jobs-data/model/GetPendingJobExecutionsResult.h>
#include <aws/iot-jobs-data/model/JobExecution.h>
#include <aws/iot-jobs-data/model/JobExecutionState.h>
#include <aws/iot-jobs-data/model/JobExecutionStatus.h>
#include <aws/iot-jobs-data/model/JobExecutionSummary.h>
#include <aws/iot-jobs-data/model/StartCommandExecutionRequest.h>
#include <aws/iot-jobs-data/model/StartCommandExecutionResult.h>
#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionRequest.h>
#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionResult.h>
#include <aws/iot-jobs-data/model/ThrottlingException.h>
#include <aws/iot-jobs-data/model/UpdateJobExecutionRequest.h>
#include <aws/iot-jobs-data/model/UpdateJobExecutionResult.h>

using IoTJobsDataPlaneIncludeTest = ::testing::Test;

TEST_F(IoTJobsDataPlaneIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTJobsDataPlane::IoTJobsDataPlaneClient>("IoTJobsDataPlaneIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
