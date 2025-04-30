/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/simspaceweaver/SimSpaceWeaverClient.h>
#include <aws/simspaceweaver/SimSpaceWeaverEndpointProvider.h>
#include <aws/simspaceweaver/SimSpaceWeaverEndpointRules.h>
#include <aws/simspaceweaver/SimSpaceWeaverErrorMarshaller.h>
#include <aws/simspaceweaver/SimSpaceWeaverErrors.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/simspaceweaver/SimSpaceWeaverServiceClientModel.h>
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/ClockStatus.h>
#include <aws/simspaceweaver/model/ClockTargetStatus.h>
#include <aws/simspaceweaver/model/CloudWatchLogsLogGroup.h>
#include <aws/simspaceweaver/model/CreateSnapshotRequest.h>
#include <aws/simspaceweaver/model/CreateSnapshotResult.h>
#include <aws/simspaceweaver/model/DeleteAppRequest.h>
#include <aws/simspaceweaver/model/DeleteAppResult.h>
#include <aws/simspaceweaver/model/DeleteSimulationRequest.h>
#include <aws/simspaceweaver/model/DeleteSimulationResult.h>
#include <aws/simspaceweaver/model/DescribeAppRequest.h>
#include <aws/simspaceweaver/model/DescribeAppResult.h>
#include <aws/simspaceweaver/model/DescribeSimulationRequest.h>
#include <aws/simspaceweaver/model/DescribeSimulationResult.h>
#include <aws/simspaceweaver/model/Domain.h>
#include <aws/simspaceweaver/model/LaunchOverrides.h>
#include <aws/simspaceweaver/model/LifecycleManagementStrategy.h>
#include <aws/simspaceweaver/model/ListAppsRequest.h>
#include <aws/simspaceweaver/model/ListAppsResult.h>
#include <aws/simspaceweaver/model/ListSimulationsRequest.h>
#include <aws/simspaceweaver/model/ListSimulationsResult.h>
#include <aws/simspaceweaver/model/ListTagsForResourceRequest.h>
#include <aws/simspaceweaver/model/ListTagsForResourceResult.h>
#include <aws/simspaceweaver/model/LiveSimulationState.h>
#include <aws/simspaceweaver/model/LogDestination.h>
#include <aws/simspaceweaver/model/LoggingConfiguration.h>
#include <aws/simspaceweaver/model/S3Destination.h>
#include <aws/simspaceweaver/model/S3Location.h>
#include <aws/simspaceweaver/model/SimulationAppEndpointInfo.h>
#include <aws/simspaceweaver/model/SimulationAppMetadata.h>
#include <aws/simspaceweaver/model/SimulationAppPortMapping.h>
#include <aws/simspaceweaver/model/SimulationAppStatus.h>
#include <aws/simspaceweaver/model/SimulationAppTargetStatus.h>
#include <aws/simspaceweaver/model/SimulationClock.h>
#include <aws/simspaceweaver/model/SimulationMetadata.h>
#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/simspaceweaver/model/SimulationTargetStatus.h>
#include <aws/simspaceweaver/model/StartAppRequest.h>
#include <aws/simspaceweaver/model/StartAppResult.h>
#include <aws/simspaceweaver/model/StartClockRequest.h>
#include <aws/simspaceweaver/model/StartClockResult.h>
#include <aws/simspaceweaver/model/StartSimulationRequest.h>
#include <aws/simspaceweaver/model/StartSimulationResult.h>
#include <aws/simspaceweaver/model/StopAppRequest.h>
#include <aws/simspaceweaver/model/StopAppResult.h>
#include <aws/simspaceweaver/model/StopClockRequest.h>
#include <aws/simspaceweaver/model/StopClockResult.h>
#include <aws/simspaceweaver/model/StopSimulationRequest.h>
#include <aws/simspaceweaver/model/StopSimulationResult.h>
#include <aws/simspaceweaver/model/TagResourceRequest.h>
#include <aws/simspaceweaver/model/TagResourceResult.h>
#include <aws/simspaceweaver/model/UntagResourceRequest.h>
#include <aws/simspaceweaver/model/UntagResourceResult.h>

using SimSpaceWeaverIncludeTest = ::testing::Test;

TEST_F(SimSpaceWeaverIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SimSpaceWeaver::SimSpaceWeaverClient>("SimSpaceWeaverIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
