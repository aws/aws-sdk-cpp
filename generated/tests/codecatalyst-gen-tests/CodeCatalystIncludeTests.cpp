/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/codecatalyst/CodeCatalystEndpointRules.h>
#include <aws/codecatalyst/CodeCatalystErrorMarshaller.h>
#include <aws/codecatalyst/CodeCatalystErrors.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/codecatalyst/CodeCatalystServiceClientModel.h>
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/AccessTokenSummary.h>
#include <aws/codecatalyst/model/ComparisonOperator.h>
#include <aws/codecatalyst/model/CreateAccessTokenRequest.h>
#include <aws/codecatalyst/model/CreateAccessTokenResult.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentResult.h>
#include <aws/codecatalyst/model/CreateProjectRequest.h>
#include <aws/codecatalyst/model/CreateProjectResult.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchResult.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryResult.h>
#include <aws/codecatalyst/model/DeleteAccessTokenRequest.h>
#include <aws/codecatalyst/model/DeleteAccessTokenResult.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentResult.h>
#include <aws/codecatalyst/model/DeleteProjectRequest.h>
#include <aws/codecatalyst/model/DeleteProjectResult.h>
#include <aws/codecatalyst/model/DeleteSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/DeleteSourceRepositoryResult.h>
#include <aws/codecatalyst/model/DeleteSpaceRequest.h>
#include <aws/codecatalyst/model/DeleteSpaceResult.h>
#include <aws/codecatalyst/model/DevEnvironmentAccessDetails.h>
#include <aws/codecatalyst/model/DevEnvironmentRepositorySummary.h>
#include <aws/codecatalyst/model/DevEnvironmentSessionConfiguration.h>
#include <aws/codecatalyst/model/DevEnvironmentSessionSummary.h>
#include <aws/codecatalyst/model/DevEnvironmentSessionType.h>
#include <aws/codecatalyst/model/DevEnvironmentStatus.h>
#include <aws/codecatalyst/model/DevEnvironmentSummary.h>
#include <aws/codecatalyst/model/EmailAddress.h>
#include <aws/codecatalyst/model/EventLogEntry.h>
#include <aws/codecatalyst/model/EventPayload.h>
#include <aws/codecatalyst/model/ExecuteCommandSessionConfiguration.h>
#include <aws/codecatalyst/model/Filter.h>
#include <aws/codecatalyst/model/FilterKey.h>
#include <aws/codecatalyst/model/GetDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/GetDevEnvironmentResult.h>
#include <aws/codecatalyst/model/GetProjectRequest.h>
#include <aws/codecatalyst/model/GetProjectResult.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsResult.h>
#include <aws/codecatalyst/model/GetSourceRepositoryRequest.h>
#include <aws/codecatalyst/model/GetSourceRepositoryResult.h>
#include <aws/codecatalyst/model/GetSpaceRequest.h>
#include <aws/codecatalyst/model/GetSpaceResult.h>
#include <aws/codecatalyst/model/GetSubscriptionRequest.h>
#include <aws/codecatalyst/model/GetSubscriptionResult.h>
#include <aws/codecatalyst/model/GetUserDetailsRequest.h>
#include <aws/codecatalyst/model/GetUserDetailsResult.h>
#include <aws/codecatalyst/model/GetWorkflowRequest.h>
#include <aws/codecatalyst/model/GetWorkflowResult.h>
#include <aws/codecatalyst/model/GetWorkflowRunRequest.h>
#include <aws/codecatalyst/model/GetWorkflowRunResult.h>
#include <aws/codecatalyst/model/Ide.h>
#include <aws/codecatalyst/model/IdeConfiguration.h>
#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/codecatalyst/model/ListAccessTokensRequest.h>
#include <aws/codecatalyst/model/ListAccessTokensResult.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsResult.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsResult.h>
#include <aws/codecatalyst/model/ListEventLogsRequest.h>
#include <aws/codecatalyst/model/ListEventLogsResult.h>
#include <aws/codecatalyst/model/ListProjectsRequest.h>
#include <aws/codecatalyst/model/ListProjectsResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesItem.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesItem.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesRequest.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesResult.h>
#include <aws/codecatalyst/model/ListSpacesRequest.h>
#include <aws/codecatalyst/model/ListSpacesResult.h>
#include <aws/codecatalyst/model/ListWorkflowRunsRequest.h>
#include <aws/codecatalyst/model/ListWorkflowRunsResult.h>
#include <aws/codecatalyst/model/ListWorkflowsRequest.h>
#include <aws/codecatalyst/model/ListWorkflowsResult.h>
#include <aws/codecatalyst/model/OperationType.h>
#include <aws/codecatalyst/model/PersistentStorage.h>
#include <aws/codecatalyst/model/PersistentStorageConfiguration.h>
#include <aws/codecatalyst/model/ProjectInformation.h>
#include <aws/codecatalyst/model/ProjectListFilter.h>
#include <aws/codecatalyst/model/ProjectSummary.h>
#include <aws/codecatalyst/model/RepositoryInput.h>
#include <aws/codecatalyst/model/SpaceSummary.h>
#include <aws/codecatalyst/model/StartDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentResult.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionResult.h>
#include <aws/codecatalyst/model/StartWorkflowRunRequest.h>
#include <aws/codecatalyst/model/StartWorkflowRunResult.h>
#include <aws/codecatalyst/model/StopDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentResult.h>
#include <aws/codecatalyst/model/StopDevEnvironmentSessionRequest.h>
#include <aws/codecatalyst/model/StopDevEnvironmentSessionResult.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentRequest.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentResult.h>
#include <aws/codecatalyst/model/UpdateProjectRequest.h>
#include <aws/codecatalyst/model/UpdateProjectResult.h>
#include <aws/codecatalyst/model/UpdateSpaceRequest.h>
#include <aws/codecatalyst/model/UpdateSpaceResult.h>
#include <aws/codecatalyst/model/UserIdentity.h>
#include <aws/codecatalyst/model/UserType.h>
#include <aws/codecatalyst/model/VerifySessionRequest.h>
#include <aws/codecatalyst/model/VerifySessionResult.h>
#include <aws/codecatalyst/model/WorkflowDefinition.h>
#include <aws/codecatalyst/model/WorkflowDefinitionSummary.h>
#include <aws/codecatalyst/model/WorkflowRunMode.h>
#include <aws/codecatalyst/model/WorkflowRunSortCriteria.h>
#include <aws/codecatalyst/model/WorkflowRunStatus.h>
#include <aws/codecatalyst/model/WorkflowRunStatusReason.h>
#include <aws/codecatalyst/model/WorkflowRunSummary.h>
#include <aws/codecatalyst/model/WorkflowSortCriteria.h>
#include <aws/codecatalyst/model/WorkflowStatus.h>
#include <aws/codecatalyst/model/WorkflowSummary.h>

using CodeCatalystIncludeTest = ::testing::Test;

TEST_F(CodeCatalystIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeCatalyst::CodeCatalystClient>("CodeCatalystIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
