/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codeconnections/CodeConnectionsClient.h>
#include <aws/codeconnections/CodeConnectionsEndpointProvider.h>
#include <aws/codeconnections/CodeConnectionsEndpointRules.h>
#include <aws/codeconnections/CodeConnectionsErrorMarshaller.h>
#include <aws/codeconnections/CodeConnectionsErrors.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/codeconnections/CodeConnectionsServiceClientModel.h>
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/BlockerStatus.h>
#include <aws/codeconnections/model/BlockerType.h>
#include <aws/codeconnections/model/Connection.h>
#include <aws/codeconnections/model/ConnectionStatus.h>
#include <aws/codeconnections/model/CreateConnectionRequest.h>
#include <aws/codeconnections/model/CreateConnectionResult.h>
#include <aws/codeconnections/model/CreateHostRequest.h>
#include <aws/codeconnections/model/CreateHostResult.h>
#include <aws/codeconnections/model/CreateRepositoryLinkRequest.h>
#include <aws/codeconnections/model/CreateRepositoryLinkResult.h>
#include <aws/codeconnections/model/CreateSyncConfigurationRequest.h>
#include <aws/codeconnections/model/CreateSyncConfigurationResult.h>
#include <aws/codeconnections/model/DeleteConnectionRequest.h>
#include <aws/codeconnections/model/DeleteConnectionResult.h>
#include <aws/codeconnections/model/DeleteHostRequest.h>
#include <aws/codeconnections/model/DeleteHostResult.h>
#include <aws/codeconnections/model/DeleteRepositoryLinkRequest.h>
#include <aws/codeconnections/model/DeleteRepositoryLinkResult.h>
#include <aws/codeconnections/model/DeleteSyncConfigurationRequest.h>
#include <aws/codeconnections/model/DeleteSyncConfigurationResult.h>
#include <aws/codeconnections/model/GetConnectionRequest.h>
#include <aws/codeconnections/model/GetConnectionResult.h>
#include <aws/codeconnections/model/GetHostRequest.h>
#include <aws/codeconnections/model/GetHostResult.h>
#include <aws/codeconnections/model/GetRepositoryLinkRequest.h>
#include <aws/codeconnections/model/GetRepositoryLinkResult.h>
#include <aws/codeconnections/model/GetRepositorySyncStatusRequest.h>
#include <aws/codeconnections/model/GetRepositorySyncStatusResult.h>
#include <aws/codeconnections/model/GetResourceSyncStatusRequest.h>
#include <aws/codeconnections/model/GetResourceSyncStatusResult.h>
#include <aws/codeconnections/model/GetSyncBlockerSummaryRequest.h>
#include <aws/codeconnections/model/GetSyncBlockerSummaryResult.h>
#include <aws/codeconnections/model/GetSyncConfigurationRequest.h>
#include <aws/codeconnections/model/GetSyncConfigurationResult.h>
#include <aws/codeconnections/model/Host.h>
#include <aws/codeconnections/model/ListConnectionsRequest.h>
#include <aws/codeconnections/model/ListConnectionsResult.h>
#include <aws/codeconnections/model/ListHostsRequest.h>
#include <aws/codeconnections/model/ListHostsResult.h>
#include <aws/codeconnections/model/ListRepositoryLinksRequest.h>
#include <aws/codeconnections/model/ListRepositoryLinksResult.h>
#include <aws/codeconnections/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/codeconnections/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/codeconnections/model/ListSyncConfigurationsRequest.h>
#include <aws/codeconnections/model/ListSyncConfigurationsResult.h>
#include <aws/codeconnections/model/ListTagsForResourceRequest.h>
#include <aws/codeconnections/model/ListTagsForResourceResult.h>
#include <aws/codeconnections/model/ProviderType.h>
#include <aws/codeconnections/model/PublishDeploymentStatus.h>
#include <aws/codeconnections/model/PullRequestComment.h>
#include <aws/codeconnections/model/RepositoryLinkInfo.h>
#include <aws/codeconnections/model/RepositorySyncAttempt.h>
#include <aws/codeconnections/model/RepositorySyncDefinition.h>
#include <aws/codeconnections/model/RepositorySyncEvent.h>
#include <aws/codeconnections/model/RepositorySyncStatus.h>
#include <aws/codeconnections/model/ResourceSyncAttempt.h>
#include <aws/codeconnections/model/ResourceSyncEvent.h>
#include <aws/codeconnections/model/ResourceSyncStatus.h>
#include <aws/codeconnections/model/Revision.h>
#include <aws/codeconnections/model/SyncBlocker.h>
#include <aws/codeconnections/model/SyncBlockerContext.h>
#include <aws/codeconnections/model/SyncBlockerSummary.h>
#include <aws/codeconnections/model/SyncConfiguration.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <aws/codeconnections/model/Tag.h>
#include <aws/codeconnections/model/TagResourceRequest.h>
#include <aws/codeconnections/model/TagResourceResult.h>
#include <aws/codeconnections/model/TriggerResourceUpdateOn.h>
#include <aws/codeconnections/model/UntagResourceRequest.h>
#include <aws/codeconnections/model/UntagResourceResult.h>
#include <aws/codeconnections/model/UpdateHostRequest.h>
#include <aws/codeconnections/model/UpdateHostResult.h>
#include <aws/codeconnections/model/UpdateRepositoryLinkRequest.h>
#include <aws/codeconnections/model/UpdateRepositoryLinkResult.h>
#include <aws/codeconnections/model/UpdateSyncBlockerRequest.h>
#include <aws/codeconnections/model/UpdateSyncBlockerResult.h>
#include <aws/codeconnections/model/UpdateSyncConfigurationRequest.h>
#include <aws/codeconnections/model/UpdateSyncConfigurationResult.h>
#include <aws/codeconnections/model/VpcConfiguration.h>

using CodeConnectionsIncludeTest = ::testing::Test;

TEST_F(CodeConnectionsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeConnections::CodeConnectionsClient>("CodeConnectionsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
