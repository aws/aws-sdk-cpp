/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mwaa-serverless/MWAAServerlessClient.h>
#include <aws/mwaa-serverless/MWAAServerlessEndpointProvider.h>
#include <aws/mwaa-serverless/MWAAServerlessEndpointRules.h>
#include <aws/mwaa-serverless/MWAAServerlessErrorMarshaller.h>
#include <aws/mwaa-serverless/MWAAServerlessErrors.h>
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerlessServiceClientModel.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/ConflictException.h>
#include <aws/mwaa-serverless/model/CreateWorkflowRequest.h>
#include <aws/mwaa-serverless/model/CreateWorkflowResult.h>
#include <aws/mwaa-serverless/model/DefinitionS3Location.h>
#include <aws/mwaa-serverless/model/DeleteWorkflowRequest.h>
#include <aws/mwaa-serverless/model/DeleteWorkflowResult.h>
#include <aws/mwaa-serverless/model/EncryptionConfiguration.h>
#include <aws/mwaa-serverless/model/EncryptionType.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceRequest.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceResult.h>
#include <aws/mwaa-serverless/model/GetWorkflowRequest.h>
#include <aws/mwaa-serverless/model/GetWorkflowResult.h>
#include <aws/mwaa-serverless/model/GetWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/GetWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/InternalServerException.h>
#include <aws/mwaa-serverless/model/ListTagsForResourceRequest.h>
#include <aws/mwaa-serverless/model/ListTagsForResourceResult.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesRequest.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowsResult.h>
#include <aws/mwaa-serverless/model/LoggingConfiguration.h>
#include <aws/mwaa-serverless/model/NetworkConfiguration.h>
#include <aws/mwaa-serverless/model/ResourceNotFoundException.h>
#include <aws/mwaa-serverless/model/RunDetailSummary.h>
#include <aws/mwaa-serverless/model/RunType.h>
#include <aws/mwaa-serverless/model/ScheduleConfiguration.h>
#include <aws/mwaa-serverless/model/ServiceQuotaExceededException.h>
#include <aws/mwaa-serverless/model/StartWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/StartWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/StopWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/StopWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/TagResourceRequest.h>
#include <aws/mwaa-serverless/model/TagResourceResult.h>
#include <aws/mwaa-serverless/model/TaskInstanceStatus.h>
#include <aws/mwaa-serverless/model/TaskInstanceSummary.h>
#include <aws/mwaa-serverless/model/ThrottlingException.h>
#include <aws/mwaa-serverless/model/UntagResourceRequest.h>
#include <aws/mwaa-serverless/model/UntagResourceResult.h>
#include <aws/mwaa-serverless/model/UpdateWorkflowRequest.h>
#include <aws/mwaa-serverless/model/UpdateWorkflowResult.h>
#include <aws/mwaa-serverless/model/ValidationException.h>
#include <aws/mwaa-serverless/model/ValidationExceptionField.h>
#include <aws/mwaa-serverless/model/ValidationExceptionReason.h>
#include <aws/mwaa-serverless/model/WorkflowRunDetail.h>
#include <aws/mwaa-serverless/model/WorkflowRunStatus.h>
#include <aws/mwaa-serverless/model/WorkflowRunSummary.h>
#include <aws/mwaa-serverless/model/WorkflowStatus.h>
#include <aws/mwaa-serverless/model/WorkflowSummary.h>
#include <aws/mwaa-serverless/model/WorkflowVersionSummary.h>

using MWAAServerlessIncludeTest = ::testing::Test;

TEST_F(MWAAServerlessIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MWAAServerless::MWAAServerlessClient>("MWAAServerlessIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
