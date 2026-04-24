/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointRules.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrorMarshaller.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrors.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorServiceClientModel.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/model/AuthenticationMethod.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/DeviceUnderTest.h>
#include <aws/iotdeviceadvisor/model/GetEndpointRequest.h>
#include <aws/iotdeviceadvisor/model/GetEndpointResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportResult.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/GroupResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsResult.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsResult.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceRequest.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceResult.h>
#include <aws/iotdeviceadvisor/model/Protocol.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/Status.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunResult.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionInformation.h>
#include <aws/iotdeviceadvisor/model/SuiteRunConfiguration.h>
#include <aws/iotdeviceadvisor/model/SuiteRunInformation.h>
#include <aws/iotdeviceadvisor/model/SuiteRunStatus.h>
#include <aws/iotdeviceadvisor/model/TagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/TagResourceResult.h>
#include <aws/iotdeviceadvisor/model/TestCaseRun.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenario.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenarioStatus.h>
#include <aws/iotdeviceadvisor/model/TestCaseScenarioType.h>
#include <aws/iotdeviceadvisor/model/TestResult.h>
#include <aws/iotdeviceadvisor/model/UntagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UntagResourceResult.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionResult.h>

using IoTDeviceAdvisorIncludeTest = ::testing::Test;

TEST_F(IoTDeviceAdvisorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTDeviceAdvisor::IoTDeviceAdvisorClient>("IoTDeviceAdvisorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
