/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClient.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointProvider.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointRules.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrorMarshaller.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrors.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AccountInfo.h>
#include <aws/compute-optimizer-automation/model/AssociateAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/AssociateAccountsResult.h>
#include <aws/compute-optimizer-automation/model/AutomationEvent.h>
#include <aws/compute-optimizer-automation/model/AutomationEventFilter.h>
#include <aws/compute-optimizer-automation/model/AutomationEventFilterName.h>
#include <aws/compute-optimizer-automation/model/AutomationEventStep.h>
#include <aws/compute-optimizer-automation/model/AutomationEventSummary.h>
#include <aws/compute-optimizer-automation/model/AutomationRule.h>
#include <aws/compute-optimizer-automation/model/AutomationRuleFilterName.h>
#include <aws/compute-optimizer-automation/model/ComparisonOperator.h>
#include <aws/compute-optimizer-automation/model/CreateAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/CreateAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/Criteria.h>
#include <aws/compute-optimizer-automation/model/DeleteAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/DeleteAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/DisassociateAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/DisassociateAccountsResult.h>
#include <aws/compute-optimizer-automation/model/DoubleCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/EbsVolume.h>
#include <aws/compute-optimizer-automation/model/EbsVolumeConfiguration.h>
#include <aws/compute-optimizer-automation/model/EnrollmentStatus.h>
#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/compute-optimizer-automation/model/EventStatus.h>
#include <aws/compute-optimizer-automation/model/EventType.h>
#include <aws/compute-optimizer-automation/model/Filter.h>
#include <aws/compute-optimizer-automation/model/GetAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/GetAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/GetAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/GetAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationRequest.h>
#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationResult.h>
#include <aws/compute-optimizer-automation/model/IntegerCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/ListAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAccountsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesResult.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsResult.h>
#include <aws/compute-optimizer-automation/model/ListTagsForResourceRequest.h>
#include <aws/compute-optimizer-automation/model/ListTagsForResourceResult.h>
#include <aws/compute-optimizer-automation/model/OrganizationConfiguration.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
#include <aws/compute-optimizer-automation/model/OrganizationScope.h>
#include <aws/compute-optimizer-automation/model/PreviewResult.h>
#include <aws/compute-optimizer-automation/model/PreviewResultSummary.h>
#include <aws/compute-optimizer-automation/model/RecommendedAction.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionFilter.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionFilterName.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionSummary.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionTotal.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/compute-optimizer-automation/model/ResourceDetails.h>
#include <aws/compute-optimizer-automation/model/ResourceTagsCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/ResourceType.h>
#include <aws/compute-optimizer-automation/model/RollbackAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/RollbackAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/RuleApplyOrder.h>
#include <aws/compute-optimizer-automation/model/RulePreviewTotal.h>
#include <aws/compute-optimizer-automation/model/RuleStatus.h>
#include <aws/compute-optimizer-automation/model/RuleType.h>
#include <aws/compute-optimizer-automation/model/SavingsEstimationMode.h>
#include <aws/compute-optimizer-automation/model/Schedule.h>
#include <aws/compute-optimizer-automation/model/StartAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/StartAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/StepStatus.h>
#include <aws/compute-optimizer-automation/model/StepType.h>
#include <aws/compute-optimizer-automation/model/StringCriteriaCondition.h>
#include <aws/compute-optimizer-automation/model/SummaryDimension.h>
#include <aws/compute-optimizer-automation/model/SummaryDimensionKey.h>
#include <aws/compute-optimizer-automation/model/SummaryTotals.h>
#include <aws/compute-optimizer-automation/model/Tag.h>
#include <aws/compute-optimizer-automation/model/TagResourceRequest.h>
#include <aws/compute-optimizer-automation/model/TagResourceResult.h>
#include <aws/compute-optimizer-automation/model/TimePeriod.h>
#include <aws/compute-optimizer-automation/model/UntagResourceRequest.h>
#include <aws/compute-optimizer-automation/model/UntagResourceResult.h>
#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/UpdateEnrollmentConfigurationRequest.h>
#include <aws/compute-optimizer-automation/model/UpdateEnrollmentConfigurationResult.h>

using ComputeOptimizerAutomationIncludeTest = ::testing::Test;

TEST_F(ComputeOptimizerAutomationIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClient>("ComputeOptimizerAutomationIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
