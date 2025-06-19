/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/emr-serverless/EMRServerlessClient.h>
#include <aws/emr-serverless/EMRServerlessEndpointProvider.h>
#include <aws/emr-serverless/EMRServerlessEndpointRules.h>
#include <aws/emr-serverless/EMRServerlessErrorMarshaller.h>
#include <aws/emr-serverless/EMRServerlessErrors.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/emr-serverless/EMRServerlessServiceClientModel.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/Application.h>
#include <aws/emr-serverless/model/ApplicationState.h>
#include <aws/emr-serverless/model/ApplicationSummary.h>
#include <aws/emr-serverless/model/Architecture.h>
#include <aws/emr-serverless/model/AutoStartConfig.h>
#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/emr-serverless/model/CancelJobRunRequest.h>
#include <aws/emr-serverless/model/CancelJobRunResult.h>
#include <aws/emr-serverless/model/CloudWatchLoggingConfiguration.h>
#include <aws/emr-serverless/model/Configuration.h>
#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/emr-serverless/model/CreateApplicationRequest.h>
#include <aws/emr-serverless/model/CreateApplicationResult.h>
#include <aws/emr-serverless/model/DeleteApplicationRequest.h>
#include <aws/emr-serverless/model/DeleteApplicationResult.h>
#include <aws/emr-serverless/model/GetApplicationRequest.h>
#include <aws/emr-serverless/model/GetApplicationResult.h>
#include <aws/emr-serverless/model/GetDashboardForJobRunRequest.h>
#include <aws/emr-serverless/model/GetDashboardForJobRunResult.h>
#include <aws/emr-serverless/model/GetJobRunRequest.h>
#include <aws/emr-serverless/model/GetJobRunResult.h>
#include <aws/emr-serverless/model/Hive.h>
#include <aws/emr-serverless/model/IdentityCenterConfiguration.h>
#include <aws/emr-serverless/model/IdentityCenterConfigurationInput.h>
#include <aws/emr-serverless/model/ImageConfiguration.h>
#include <aws/emr-serverless/model/ImageConfigurationInput.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/emr-serverless/model/InteractiveConfiguration.h>
#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/emr-serverless/model/JobRun.h>
#include <aws/emr-serverless/model/JobRunAttemptSummary.h>
#include <aws/emr-serverless/model/JobRunExecutionIamPolicy.h>
#include <aws/emr-serverless/model/JobRunMode.h>
#include <aws/emr-serverless/model/JobRunState.h>
#include <aws/emr-serverless/model/JobRunSummary.h>
#include <aws/emr-serverless/model/ListApplicationsRequest.h>
#include <aws/emr-serverless/model/ListApplicationsResult.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsRequest.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsResult.h>
#include <aws/emr-serverless/model/ListJobRunsRequest.h>
#include <aws/emr-serverless/model/ListJobRunsResult.h>
#include <aws/emr-serverless/model/ListTagsForResourceRequest.h>
#include <aws/emr-serverless/model/ListTagsForResourceResult.h>
#include <aws/emr-serverless/model/ManagedPersistenceMonitoringConfiguration.h>
#include <aws/emr-serverless/model/MaximumAllowedResources.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/PrometheusMonitoringConfiguration.h>
#include <aws/emr-serverless/model/ResourceUtilization.h>
#include <aws/emr-serverless/model/RetryPolicy.h>
#include <aws/emr-serverless/model/S3MonitoringConfiguration.h>
#include <aws/emr-serverless/model/SchedulerConfiguration.h>
#include <aws/emr-serverless/model/SparkSubmit.h>
#include <aws/emr-serverless/model/StartApplicationRequest.h>
#include <aws/emr-serverless/model/StartApplicationResult.h>
#include <aws/emr-serverless/model/StartJobRunRequest.h>
#include <aws/emr-serverless/model/StartJobRunResult.h>
#include <aws/emr-serverless/model/StopApplicationRequest.h>
#include <aws/emr-serverless/model/StopApplicationResult.h>
#include <aws/emr-serverless/model/TagResourceRequest.h>
#include <aws/emr-serverless/model/TagResourceResult.h>
#include <aws/emr-serverless/model/TotalResourceUtilization.h>
#include <aws/emr-serverless/model/UntagResourceRequest.h>
#include <aws/emr-serverless/model/UntagResourceResult.h>
#include <aws/emr-serverless/model/UpdateApplicationRequest.h>
#include <aws/emr-serverless/model/UpdateApplicationResult.h>
#include <aws/emr-serverless/model/WorkerResourceConfig.h>
#include <aws/emr-serverless/model/WorkerTypeSpecification.h>
#include <aws/emr-serverless/model/WorkerTypeSpecificationInput.h>

using EMRServerlessIncludeTest = ::testing::Test;

TEST_F(EMRServerlessIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EMRServerless::EMRServerlessClient>("EMRServerlessIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
