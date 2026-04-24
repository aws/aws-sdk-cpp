/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/scheduler/SchedulerClient.h>
#include <aws/scheduler/SchedulerEndpointProvider.h>
#include <aws/scheduler/SchedulerEndpointRules.h>
#include <aws/scheduler/SchedulerErrorMarshaller.h>
#include <aws/scheduler/SchedulerErrors.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/scheduler/SchedulerServiceClientModel.h>
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/ActionAfterCompletion.h>
#include <aws/scheduler/model/AssignPublicIp.h>
#include <aws/scheduler/model/AwsVpcConfiguration.h>
#include <aws/scheduler/model/CapacityProviderStrategyItem.h>
#include <aws/scheduler/model/CreateScheduleGroupRequest.h>
#include <aws/scheduler/model/CreateScheduleGroupResult.h>
#include <aws/scheduler/model/CreateScheduleRequest.h>
#include <aws/scheduler/model/CreateScheduleResult.h>
#include <aws/scheduler/model/DeadLetterConfig.h>
#include <aws/scheduler/model/DeleteScheduleGroupRequest.h>
#include <aws/scheduler/model/DeleteScheduleGroupResult.h>
#include <aws/scheduler/model/DeleteScheduleRequest.h>
#include <aws/scheduler/model/DeleteScheduleResult.h>
#include <aws/scheduler/model/EcsParameters.h>
#include <aws/scheduler/model/EventBridgeParameters.h>
#include <aws/scheduler/model/FlexibleTimeWindow.h>
#include <aws/scheduler/model/FlexibleTimeWindowMode.h>
#include <aws/scheduler/model/GetScheduleGroupRequest.h>
#include <aws/scheduler/model/GetScheduleGroupResult.h>
#include <aws/scheduler/model/GetScheduleRequest.h>
#include <aws/scheduler/model/GetScheduleResult.h>
#include <aws/scheduler/model/KinesisParameters.h>
#include <aws/scheduler/model/LaunchType.h>
#include <aws/scheduler/model/ListScheduleGroupsRequest.h>
#include <aws/scheduler/model/ListScheduleGroupsResult.h>
#include <aws/scheduler/model/ListSchedulesRequest.h>
#include <aws/scheduler/model/ListSchedulesResult.h>
#include <aws/scheduler/model/ListTagsForResourceRequest.h>
#include <aws/scheduler/model/ListTagsForResourceResult.h>
#include <aws/scheduler/model/NetworkConfiguration.h>
#include <aws/scheduler/model/PlacementConstraint.h>
#include <aws/scheduler/model/PlacementConstraintType.h>
#include <aws/scheduler/model/PlacementStrategy.h>
#include <aws/scheduler/model/PlacementStrategyType.h>
#include <aws/scheduler/model/PropagateTags.h>
#include <aws/scheduler/model/RetryPolicy.h>
#include <aws/scheduler/model/SageMakerPipelineParameter.h>
#include <aws/scheduler/model/SageMakerPipelineParameters.h>
#include <aws/scheduler/model/ScheduleGroupState.h>
#include <aws/scheduler/model/ScheduleGroupSummary.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/ScheduleSummary.h>
#include <aws/scheduler/model/SqsParameters.h>
#include <aws/scheduler/model/Tag.h>
#include <aws/scheduler/model/TagResourceRequest.h>
#include <aws/scheduler/model/TagResourceResult.h>
#include <aws/scheduler/model/Target.h>
#include <aws/scheduler/model/TargetSummary.h>
#include <aws/scheduler/model/UntagResourceRequest.h>
#include <aws/scheduler/model/UntagResourceResult.h>
#include <aws/scheduler/model/UpdateScheduleRequest.h>
#include <aws/scheduler/model/UpdateScheduleResult.h>

using SchedulerIncludeTest = ::testing::Test;

TEST_F(SchedulerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Scheduler::SchedulerClient>("SchedulerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
