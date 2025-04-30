/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/launch-wizard/LaunchWizardClient.h>
#include <aws/launch-wizard/LaunchWizardEndpointProvider.h>
#include <aws/launch-wizard/LaunchWizardEndpointRules.h>
#include <aws/launch-wizard/LaunchWizardErrorMarshaller.h>
#include <aws/launch-wizard/LaunchWizardErrors.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/launch-wizard/LaunchWizardServiceClientModel.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/CreateDeploymentRequest.h>
#include <aws/launch-wizard/model/CreateDeploymentResult.h>
#include <aws/launch-wizard/model/DeleteDeploymentRequest.h>
#include <aws/launch-wizard/model/DeleteDeploymentResult.h>
#include <aws/launch-wizard/model/DeploymentConditionalField.h>
#include <aws/launch-wizard/model/DeploymentData.h>
#include <aws/launch-wizard/model/DeploymentDataSummary.h>
#include <aws/launch-wizard/model/DeploymentEventDataSummary.h>
#include <aws/launch-wizard/model/DeploymentFilter.h>
#include <aws/launch-wizard/model/DeploymentFilterKey.h>
#include <aws/launch-wizard/model/DeploymentSpecificationsField.h>
#include <aws/launch-wizard/model/DeploymentStatus.h>
#include <aws/launch-wizard/model/EventStatus.h>
#include <aws/launch-wizard/model/GetDeploymentRequest.h>
#include <aws/launch-wizard/model/GetDeploymentResult.h>
#include <aws/launch-wizard/model/GetWorkloadDeploymentPatternRequest.h>
#include <aws/launch-wizard/model/GetWorkloadDeploymentPatternResult.h>
#include <aws/launch-wizard/model/GetWorkloadRequest.h>
#include <aws/launch-wizard/model/GetWorkloadResult.h>
#include <aws/launch-wizard/model/ListDeploymentEventsRequest.h>
#include <aws/launch-wizard/model/ListDeploymentEventsResult.h>
#include <aws/launch-wizard/model/ListDeploymentsRequest.h>
#include <aws/launch-wizard/model/ListDeploymentsResult.h>
#include <aws/launch-wizard/model/ListTagsForResourceRequest.h>
#include <aws/launch-wizard/model/ListTagsForResourceResult.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsRequest.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsResult.h>
#include <aws/launch-wizard/model/ListWorkloadsRequest.h>
#include <aws/launch-wizard/model/ListWorkloadsResult.h>
#include <aws/launch-wizard/model/TagResourceRequest.h>
#include <aws/launch-wizard/model/TagResourceResult.h>
#include <aws/launch-wizard/model/UntagResourceRequest.h>
#include <aws/launch-wizard/model/UntagResourceResult.h>
#include <aws/launch-wizard/model/WorkloadData.h>
#include <aws/launch-wizard/model/WorkloadDataSummary.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternData.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternDataSummary.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternStatus.h>
#include <aws/launch-wizard/model/WorkloadStatus.h>

using LaunchWizardIncludeTest = ::testing::Test;

TEST_F(LaunchWizardIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LaunchWizard::LaunchWizardClient>("LaunchWizardIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
