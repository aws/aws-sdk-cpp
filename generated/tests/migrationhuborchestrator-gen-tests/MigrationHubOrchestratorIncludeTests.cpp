/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointRules.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrors.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/model/CreateTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/CreateTemplateResult.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/DataType.h>
#include <aws/migrationhuborchestrator/model/DeleteTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteTemplateResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/ListPluginsRequest.h>
#include <aws/migrationhuborchestrator/model/ListPluginsResult.h>
#include <aws/migrationhuborchestrator/model/ListTagsForResourceRequest.h>
#include <aws/migrationhuborchestrator/model/ListTagsForResourceResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsResult.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowSummary.h>
#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/migrationhuborchestrator/model/PlatformCommand.h>
#include <aws/migrationhuborchestrator/model/PlatformScriptKey.h>
#include <aws/migrationhuborchestrator/model/PluginHealth.h>
#include <aws/migrationhuborchestrator/model/PluginSummary.h>
#include <aws/migrationhuborchestrator/model/RetryWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/RetryWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/RunEnvironment.h>
#include <aws/migrationhuborchestrator/model/StartWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/StartWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/migrationhuborchestrator/model/StepAutomationConfiguration.h>
#include <aws/migrationhuborchestrator/model/StepGroupStatus.h>
#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <aws/migrationhuborchestrator/model/StepOutput.h>
#include <aws/migrationhuborchestrator/model/StepStatus.h>
#include <aws/migrationhuborchestrator/model/StopWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/StopWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/TagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/TagResourceResult.h>
#include <aws/migrationhuborchestrator/model/TargetType.h>
#include <aws/migrationhuborchestrator/model/TemplateInput.h>
#include <aws/migrationhuborchestrator/model/TemplateSource.h>
#include <aws/migrationhuborchestrator/model/TemplateStatus.h>
#include <aws/migrationhuborchestrator/model/TemplateStepGroupSummary.h>
#include <aws/migrationhuborchestrator/model/TemplateStepSummary.h>
#include <aws/migrationhuborchestrator/model/TemplateSummary.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
#include <aws/migrationhuborchestrator/model/UntagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/UntagResourceResult.h>
#include <aws/migrationhuborchestrator/model/UpdateTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateTemplateResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepAutomationConfiguration.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepGroupSummary.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepOutput.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepOutputUnion.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepSummary.h>

using MigrationHubOrchestratorIncludeTest = ::testing::Test;

TEST_F(MigrationHubOrchestratorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClient>("MigrationHubOrchestratorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
