/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <aws/AWSMigrationHub/MigrationHubEndpointRules.h>
#include <aws/AWSMigrationHub/MigrationHubErrorMarshaller.h>
#include <aws/AWSMigrationHub/MigrationHubErrors.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/AWSMigrationHub/MigrationHubServiceClientModel.h>
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/ApplicationState.h>
#include <aws/AWSMigrationHub/model/ApplicationStatus.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/AssociateSourceResourceRequest.h>
#include <aws/AWSMigrationHub/model/AssociateSourceResourceResult.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/CreatedArtifact.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/DisassociateSourceResourceRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateSourceResourceResult.h>
#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesRequest.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesResult.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsRequest.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsResult.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesRequest.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesResult.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesResult.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksResult.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsRequest.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsResult.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesRequest.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesResult.h>
#include <aws/AWSMigrationHub/model/MigrationTask.h>
#include <aws/AWSMigrationHub/model/MigrationTaskSummary.h>
#include <aws/AWSMigrationHub/model/MigrationTaskUpdate.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateRequest.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateResult.h>
#include <aws/AWSMigrationHub/model/ProgressUpdateStreamSummary.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesRequest.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesResult.h>
#include <aws/AWSMigrationHub/model/ResourceAttribute.h>
#include <aws/AWSMigrationHub/model/ResourceAttributeType.h>
#include <aws/AWSMigrationHub/model/SourceResource.h>
#include <aws/AWSMigrationHub/model/Status.h>
#include <aws/AWSMigrationHub/model/Task.h>
#include <aws/AWSMigrationHub/model/ThrottlingException.h>
#include <aws/AWSMigrationHub/model/UpdateType.h>

using MigrationHubIncludeTest = ::testing::Test;

TEST_F(MigrationHubIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MigrationHub::MigrationHubClient>("MigrationHubIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
