/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/nova-act/NovaActClient.h>
#include <aws/nova-act/NovaActEndpointProvider.h>
#include <aws/nova-act/NovaActEndpointRules.h>
#include <aws/nova-act/NovaActErrorMarshaller.h>
#include <aws/nova-act/NovaActErrors.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaActServiceClientModel.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ActError.h>
#include <aws/nova-act/model/ActStatus.h>
#include <aws/nova-act/model/ActSummary.h>
#include <aws/nova-act/model/Call.h>
#include <aws/nova-act/model/CallResult.h>
#include <aws/nova-act/model/CallResultContent.h>
#include <aws/nova-act/model/ClientInfo.h>
#include <aws/nova-act/model/CompatibilityInformation.h>
#include <aws/nova-act/model/ConflictException.h>
#include <aws/nova-act/model/CreateActRequest.h>
#include <aws/nova-act/model/CreateActResult.h>
#include <aws/nova-act/model/CreateSessionRequest.h>
#include <aws/nova-act/model/CreateSessionResult.h>
#include <aws/nova-act/model/CreateWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/CreateWorkflowDefinitionResult.h>
#include <aws/nova-act/model/CreateWorkflowRunRequest.h>
#include <aws/nova-act/model/CreateWorkflowRunResult.h>
#include <aws/nova-act/model/DeleteWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/DeleteWorkflowDefinitionResult.h>
#include <aws/nova-act/model/DeleteWorkflowRunRequest.h>
#include <aws/nova-act/model/DeleteWorkflowRunResult.h>
#include <aws/nova-act/model/GetWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/GetWorkflowDefinitionResult.h>
#include <aws/nova-act/model/GetWorkflowRunRequest.h>
#include <aws/nova-act/model/GetWorkflowRunResult.h>
#include <aws/nova-act/model/InternalServerException.h>
#include <aws/nova-act/model/InternalServerExceptionReason.h>
#include <aws/nova-act/model/InvokeActStepRequest.h>
#include <aws/nova-act/model/InvokeActStepResult.h>
#include <aws/nova-act/model/ListActsRequest.h>
#include <aws/nova-act/model/ListActsResult.h>
#include <aws/nova-act/model/ListModelsRequest.h>
#include <aws/nova-act/model/ListModelsResult.h>
#include <aws/nova-act/model/ListSessionsRequest.h>
#include <aws/nova-act/model/ListSessionsResult.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsRequest.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsResult.h>
#include <aws/nova-act/model/ListWorkflowRunsRequest.h>
#include <aws/nova-act/model/ListWorkflowRunsResult.h>
#include <aws/nova-act/model/ModelAlias.h>
#include <aws/nova-act/model/ModelLifecycle.h>
#include <aws/nova-act/model/ModelStatus.h>
#include <aws/nova-act/model/ModelSummary.h>
#include <aws/nova-act/model/ResourceNotFoundException.h>
#include <aws/nova-act/model/ServiceQuotaExceededException.h>
#include <aws/nova-act/model/SessionSummary.h>
#include <aws/nova-act/model/SortOrder.h>
#include <aws/nova-act/model/ThrottlingException.h>
#include <aws/nova-act/model/ToolInputSchema.h>
#include <aws/nova-act/model/ToolSpec.h>
#include <aws/nova-act/model/TraceLocation.h>
#include <aws/nova-act/model/TraceLocationType.h>
#include <aws/nova-act/model/UpdateActRequest.h>
#include <aws/nova-act/model/UpdateActResult.h>
#include <aws/nova-act/model/UpdateWorkflowRunRequest.h>
#include <aws/nova-act/model/UpdateWorkflowRunResult.h>
#include <aws/nova-act/model/ValidationException.h>
#include <aws/nova-act/model/ValidationExceptionField.h>
#include <aws/nova-act/model/ValidationExceptionReason.h>
#include <aws/nova-act/model/WorkflowDefinitionStatus.h>
#include <aws/nova-act/model/WorkflowDefinitionSummary.h>
#include <aws/nova-act/model/WorkflowExportConfig.h>
#include <aws/nova-act/model/WorkflowRunStatus.h>
#include <aws/nova-act/model/WorkflowRunSummary.h>

using NovaActIncludeTest = ::testing::Test;

TEST_F(NovaActIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::NovaAct::NovaActClient>("NovaActIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
