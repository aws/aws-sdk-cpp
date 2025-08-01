/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/arc-region-switch/ARCRegionswitchClient.h>
#include <aws/arc-region-switch/ARCRegionswitchEndpointProvider.h>
#include <aws/arc-region-switch/ARCRegionswitchEndpointRules.h>
#include <aws/arc-region-switch/ARCRegionswitchErrorMarshaller.h>
#include <aws/arc-region-switch/ARCRegionswitchErrors.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/AbbreviatedExecution.h>
#include <aws/arc-region-switch/model/AbbreviatedPlan.h>
#include <aws/arc-region-switch/model/AlarmCondition.h>
#include <aws/arc-region-switch/model/AlarmType.h>
#include <aws/arc-region-switch/model/Approval.h>
#include <aws/arc-region-switch/model/ApprovePlanExecutionStepRequest.h>
#include <aws/arc-region-switch/model/ApprovePlanExecutionStepResult.h>
#include <aws/arc-region-switch/model/ArcRoutingControlConfiguration.h>
#include <aws/arc-region-switch/model/ArcRoutingControlState.h>
#include <aws/arc-region-switch/model/Asg.h>
#include <aws/arc-region-switch/model/AssociatedAlarm.h>
#include <aws/arc-region-switch/model/CancelPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/CancelPlanExecutionResult.h>
#include <aws/arc-region-switch/model/CreatePlanRequest.h>
#include <aws/arc-region-switch/model/CreatePlanResult.h>
#include <aws/arc-region-switch/model/CustomActionLambdaConfiguration.h>
#include <aws/arc-region-switch/model/DeletePlanRequest.h>
#include <aws/arc-region-switch/model/DeletePlanResult.h>
#include <aws/arc-region-switch/model/Ec2AsgCapacityIncreaseConfiguration.h>
#include <aws/arc-region-switch/model/Ec2AsgCapacityMonitoringApproach.h>
#include <aws/arc-region-switch/model/Ec2Ungraceful.h>
#include <aws/arc-region-switch/model/EcsCapacityIncreaseConfiguration.h>
#include <aws/arc-region-switch/model/EcsCapacityMonitoringApproach.h>
#include <aws/arc-region-switch/model/EcsUngraceful.h>
#include <aws/arc-region-switch/model/EksCapacityMonitoringApproach.h>
#include <aws/arc-region-switch/model/EksCluster.h>
#include <aws/arc-region-switch/model/EksResourceScalingConfiguration.h>
#include <aws/arc-region-switch/model/EksResourceScalingUngraceful.h>
#include <aws/arc-region-switch/model/EvaluationStatus.h>
#include <aws/arc-region-switch/model/ExecutionAction.h>
#include <aws/arc-region-switch/model/ExecutionApprovalConfiguration.h>
#include <aws/arc-region-switch/model/ExecutionBlockConfiguration.h>
#include <aws/arc-region-switch/model/ExecutionBlockType.h>
#include <aws/arc-region-switch/model/ExecutionEvent.h>
#include <aws/arc-region-switch/model/ExecutionEventType.h>
#include <aws/arc-region-switch/model/ExecutionMode.h>
#include <aws/arc-region-switch/model/ExecutionState.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusRequest.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusResult.h>
#include <aws/arc-region-switch/model/GetPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/GetPlanExecutionResult.h>
#include <aws/arc-region-switch/model/GetPlanInRegionRequest.h>
#include <aws/arc-region-switch/model/GetPlanInRegionResult.h>
#include <aws/arc-region-switch/model/GetPlanRequest.h>
#include <aws/arc-region-switch/model/GetPlanResult.h>
#include <aws/arc-region-switch/model/GlobalAuroraConfiguration.h>
#include <aws/arc-region-switch/model/GlobalAuroraDefaultBehavior.h>
#include <aws/arc-region-switch/model/GlobalAuroraUngraceful.h>
#include <aws/arc-region-switch/model/GlobalAuroraUngracefulBehavior.h>
#include <aws/arc-region-switch/model/KubernetesResourceType.h>
#include <aws/arc-region-switch/model/KubernetesScalingResource.h>
#include <aws/arc-region-switch/model/LambdaUngraceful.h>
#include <aws/arc-region-switch/model/LambdaUngracefulBehavior.h>
#include <aws/arc-region-switch/model/Lambdas.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsRequest.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsResult.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsRequest.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsResult.h>
#include <aws/arc-region-switch/model/ListPlansInRegionRequest.h>
#include <aws/arc-region-switch/model/ListPlansInRegionResult.h>
#include <aws/arc-region-switch/model/ListPlansRequest.h>
#include <aws/arc-region-switch/model/ListPlansResult.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksRequest.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksResult.h>
#include <aws/arc-region-switch/model/ListTagsForResourceRequest.h>
#include <aws/arc-region-switch/model/ListTagsForResourceResult.h>
#include <aws/arc-region-switch/model/MinimalWorkflow.h>
#include <aws/arc-region-switch/model/ParallelExecutionBlockConfiguration.h>
#include <aws/arc-region-switch/model/Plan.h>
#include <aws/arc-region-switch/model/RecoveryApproach.h>
#include <aws/arc-region-switch/model/RegionSwitchPlanConfiguration.h>
#include <aws/arc-region-switch/model/RegionToRunIn.h>
#include <aws/arc-region-switch/model/ResourceWarning.h>
#include <aws/arc-region-switch/model/ResourceWarningStatus.h>
#include <aws/arc-region-switch/model/Route53HealthCheck.h>
#include <aws/arc-region-switch/model/Route53HealthCheckConfiguration.h>
#include <aws/arc-region-switch/model/Route53ResourceRecordSet.h>
#include <aws/arc-region-switch/model/RoutingControlStateChange.h>
#include <aws/arc-region-switch/model/Service.h>
#include <aws/arc-region-switch/model/StartPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/StartPlanExecutionResult.h>
#include <aws/arc-region-switch/model/Step.h>
#include <aws/arc-region-switch/model/StepState.h>
#include <aws/arc-region-switch/model/StepStatus.h>
#include <aws/arc-region-switch/model/TagResourceRequest.h>
#include <aws/arc-region-switch/model/TagResourceResult.h>
#include <aws/arc-region-switch/model/Trigger.h>
#include <aws/arc-region-switch/model/TriggerCondition.h>
#include <aws/arc-region-switch/model/UntagResourceRequest.h>
#include <aws/arc-region-switch/model/UntagResourceResult.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionAction.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionResult.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionStepAction.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionStepRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionStepResult.h>
#include <aws/arc-region-switch/model/UpdatePlanRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanResult.h>
#include <aws/arc-region-switch/model/Workflow.h>
#include <aws/arc-region-switch/model/WorkflowTargetAction.h>

using ARCRegionswitchIncludeTest = ::testing::Test;

TEST_F(ARCRegionswitchIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ARCRegionswitch::ARCRegionswitchClient>("ARCRegionswitchIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
