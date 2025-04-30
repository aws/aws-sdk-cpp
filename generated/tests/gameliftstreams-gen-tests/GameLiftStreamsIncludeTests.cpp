/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <aws/gameliftstreams/GameLiftStreamsEndpointRules.h>
#include <aws/gameliftstreams/GameLiftStreamsErrorMarshaller.h>
#include <aws/gameliftstreams/GameLiftStreamsErrors.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/GameLiftStreamsServiceClientModel.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/AddStreamGroupLocationsRequest.h>
#include <aws/gameliftstreams/model/AddStreamGroupLocationsResult.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/gameliftstreams/model/ApplicationStatusReason.h>
#include <aws/gameliftstreams/model/ApplicationSummary.h>
#include <aws/gameliftstreams/model/AssociateApplicationsRequest.h>
#include <aws/gameliftstreams/model/AssociateApplicationsResult.h>
#include <aws/gameliftstreams/model/CreateApplicationRequest.h>
#include <aws/gameliftstreams/model/CreateApplicationResult.h>
#include <aws/gameliftstreams/model/CreateStreamGroupRequest.h>
#include <aws/gameliftstreams/model/CreateStreamGroupResult.h>
#include <aws/gameliftstreams/model/CreateStreamSessionConnectionRequest.h>
#include <aws/gameliftstreams/model/CreateStreamSessionConnectionResult.h>
#include <aws/gameliftstreams/model/DefaultApplication.h>
#include <aws/gameliftstreams/model/DeleteApplicationRequest.h>
#include <aws/gameliftstreams/model/DeleteStreamGroupRequest.h>
#include <aws/gameliftstreams/model/DisassociateApplicationsRequest.h>
#include <aws/gameliftstreams/model/DisassociateApplicationsResult.h>
#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <aws/gameliftstreams/model/ExportFilesStatus.h>
#include <aws/gameliftstreams/model/ExportStreamSessionFilesRequest.h>
#include <aws/gameliftstreams/model/ExportStreamSessionFilesResult.h>
#include <aws/gameliftstreams/model/GetApplicationRequest.h>
#include <aws/gameliftstreams/model/GetApplicationResult.h>
#include <aws/gameliftstreams/model/GetStreamGroupRequest.h>
#include <aws/gameliftstreams/model/GetStreamGroupResult.h>
#include <aws/gameliftstreams/model/GetStreamSessionRequest.h>
#include <aws/gameliftstreams/model/GetStreamSessionResult.h>
#include <aws/gameliftstreams/model/ListApplicationsRequest.h>
#include <aws/gameliftstreams/model/ListApplicationsResult.h>
#include <aws/gameliftstreams/model/ListStreamGroupsRequest.h>
#include <aws/gameliftstreams/model/ListStreamGroupsResult.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountResult.h>
#include <aws/gameliftstreams/model/ListStreamSessionsRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsResult.h>
#include <aws/gameliftstreams/model/ListTagsForResourceRequest.h>
#include <aws/gameliftstreams/model/ListTagsForResourceResult.h>
#include <aws/gameliftstreams/model/LocationConfiguration.h>
#include <aws/gameliftstreams/model/LocationState.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/gameliftstreams/model/RemoveStreamGroupLocationsRequest.h>
#include <aws/gameliftstreams/model/ReplicationStatus.h>
#include <aws/gameliftstreams/model/ReplicationStatusType.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
#include <aws/gameliftstreams/model/RuntimeEnvironmentType.h>
#include <aws/gameliftstreams/model/StartStreamSessionRequest.h>
#include <aws/gameliftstreams/model/StartStreamSessionResult.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/gameliftstreams/model/StreamGroupLocationStatus.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/gameliftstreams/model/StreamGroupStatusReason.h>
#include <aws/gameliftstreams/model/StreamGroupSummary.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>
#include <aws/gameliftstreams/model/StreamSessionSummary.h>
#include <aws/gameliftstreams/model/TagResourceRequest.h>
#include <aws/gameliftstreams/model/TagResourceResult.h>
#include <aws/gameliftstreams/model/TerminateStreamSessionRequest.h>
#include <aws/gameliftstreams/model/UntagResourceRequest.h>
#include <aws/gameliftstreams/model/UntagResourceResult.h>
#include <aws/gameliftstreams/model/UpdateApplicationRequest.h>
#include <aws/gameliftstreams/model/UpdateApplicationResult.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupRequest.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupResult.h>

using GameLiftStreamsIncludeTest = ::testing::Test;

TEST_F(GameLiftStreamsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::GameLiftStreams::GameLiftStreamsClient>("GameLiftStreamsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
