/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-edge/SagemakerEdgeManagerClient.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointProvider.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointRules.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrorMarshaller.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrors.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerRequest.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerServiceClientModel.h>
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/model/Checksum.h>
#include <aws/sagemaker-edge/model/ChecksumType.h>
#include <aws/sagemaker-edge/model/Definition.h>
#include <aws/sagemaker-edge/model/DeploymentModel.h>
#include <aws/sagemaker-edge/model/DeploymentResult.h>
#include <aws/sagemaker-edge/model/DeploymentStatus.h>
#include <aws/sagemaker-edge/model/DeploymentType.h>
#include <aws/sagemaker-edge/model/EdgeDeployment.h>
#include <aws/sagemaker-edge/model/EdgeMetric.h>
#include <aws/sagemaker-edge/model/FailureHandlingPolicy.h>
#include <aws/sagemaker-edge/model/GetDeploymentsRequest.h>
#include <aws/sagemaker-edge/model/GetDeploymentsResult.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationRequest.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationResult.h>
#include <aws/sagemaker-edge/model/Model.h>
#include <aws/sagemaker-edge/model/ModelState.h>
#include <aws/sagemaker-edge/model/SendHeartbeatRequest.h>

using SagemakerEdgeManagerIncludeTest = ::testing::Test;

TEST_F(SagemakerEdgeManagerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SagemakerEdgeManager::SagemakerEdgeManagerClient>("SagemakerEdgeManagerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
