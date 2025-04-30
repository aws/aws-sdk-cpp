/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codestar-connections/CodeStarconnectionsClient.h>
#include <aws/codestar-connections/CodeStarconnectionsEndpointProvider.h>
#include <aws/codestar-connections/CodeStarconnectionsEndpointRules.h>
#include <aws/codestar-connections/CodeStarconnectionsErrorMarshaller.h>
#include <aws/codestar-connections/CodeStarconnectionsErrors.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/codestar-connections/CodeStarconnectionsServiceClientModel.h>
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/BlockerStatus.h>
#include <aws/codestar-connections/model/BlockerType.h>
#include <aws/codestar-connections/model/Connection.h>
#include <aws/codestar-connections/model/ConnectionStatus.h>
#include <aws/codestar-connections/model/CreateConnectionRequest.h>
#include <aws/codestar-connections/model/CreateConnectionResult.h>
#include <aws/codestar-connections/model/CreateHostRequest.h>
#include <aws/codestar-connections/model/CreateHostResult.h>
#include <aws/codestar-connections/model/CreateRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/CreateRepositoryLinkResult.h>
#include <aws/codestar-connections/model/CreateSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/CreateSyncConfigurationResult.h>
#include <aws/codestar-connections/model/DeleteConnectionRequest.h>
#include <aws/codestar-connections/model/DeleteConnectionResult.h>
#include <aws/codestar-connections/model/DeleteHostRequest.h>
#include <aws/codestar-connections/model/DeleteHostResult.h>
#include <aws/codestar-connections/model/DeleteRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/DeleteRepositoryLinkResult.h>
#include <aws/codestar-connections/model/DeleteSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/DeleteSyncConfigurationResult.h>
#include <aws/codestar-connections/model/GetConnectionRequest.h>
#include <aws/codestar-connections/model/GetConnectionResult.h>
#include <aws/codestar-connections/model/GetHostRequest.h>
#include <aws/codestar-connections/model/GetHostResult.h>
#include <aws/codestar-connections/model/GetRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/GetRepositoryLinkResult.h>
#include <aws/codestar-connections/model/GetRepositorySyncStatusRequest.h>
#include <aws/codestar-connections/model/GetRepositorySyncStatusResult.h>
#include <aws/codestar-connections/model/GetResourceSyncStatusRequest.h>
#include <aws/codestar-connections/model/GetResourceSyncStatusResult.h>
#include <aws/codestar-connections/model/GetSyncBlockerSummaryRequest.h>
#include <aws/codestar-connections/model/GetSyncBlockerSummaryResult.h>
#include <aws/codestar-connections/model/GetSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/GetSyncConfigurationResult.h>
#include <aws/codestar-connections/model/Host.h>
#include <aws/codestar-connections/model/ListConnectionsRequest.h>
#include <aws/codestar-connections/model/ListConnectionsResult.h>
#include <aws/codestar-connections/model/ListHostsRequest.h>
#include <aws/codestar-connections/model/ListHostsResult.h>
#include <aws/codestar-connections/model/ListRepositoryLinksRequest.h>
#include <aws/codestar-connections/model/ListRepositoryLinksResult.h>
#include <aws/codestar-connections/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/codestar-connections/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsRequest.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsResult.h>
#include <aws/codestar-connections/model/ListTagsForResourceRequest.h>
#include <aws/codestar-connections/model/ListTagsForResourceResult.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/codestar-connections/model/PublishDeploymentStatus.h>
#include <aws/codestar-connections/model/RepositoryLinkInfo.h>
#include <aws/codestar-connections/model/RepositorySyncAttempt.h>
#include <aws/codestar-connections/model/RepositorySyncDefinition.h>
#include <aws/codestar-connections/model/RepositorySyncEvent.h>
#include <aws/codestar-connections/model/RepositorySyncStatus.h>
#include <aws/codestar-connections/model/ResourceSyncAttempt.h>
#include <aws/codestar-connections/model/ResourceSyncEvent.h>
#include <aws/codestar-connections/model/ResourceSyncStatus.h>
#include <aws/codestar-connections/model/Revision.h>
#include <aws/codestar-connections/model/SyncBlocker.h>
#include <aws/codestar-connections/model/SyncBlockerContext.h>
#include <aws/codestar-connections/model/SyncBlockerSummary.h>
#include <aws/codestar-connections/model/SyncConfiguration.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <aws/codestar-connections/model/Tag.h>
#include <aws/codestar-connections/model/TagResourceRequest.h>
#include <aws/codestar-connections/model/TagResourceResult.h>
#include <aws/codestar-connections/model/TriggerResourceUpdateOn.h>
#include <aws/codestar-connections/model/UntagResourceRequest.h>
#include <aws/codestar-connections/model/UntagResourceResult.h>
#include <aws/codestar-connections/model/UpdateHostRequest.h>
#include <aws/codestar-connections/model/UpdateHostResult.h>
#include <aws/codestar-connections/model/UpdateRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/UpdateRepositoryLinkResult.h>
#include <aws/codestar-connections/model/UpdateSyncBlockerRequest.h>
#include <aws/codestar-connections/model/UpdateSyncBlockerResult.h>
#include <aws/codestar-connections/model/UpdateSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/UpdateSyncConfigurationResult.h>
#include <aws/codestar-connections/model/VpcConfiguration.h>

using CodeStarconnectionsIncludeTest = ::testing::Test;

TEST_F(CodeStarconnectionsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeStarconnections::CodeStarconnectionsClient>("CodeStarconnectionsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
