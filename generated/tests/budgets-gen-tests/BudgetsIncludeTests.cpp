/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/budgets/BudgetsClient.h>
#include <aws/budgets/BudgetsEndpointProvider.h>
#include <aws/budgets/BudgetsEndpointRules.h>
#include <aws/budgets/BudgetsErrorMarshaller.h>
#include <aws/budgets/BudgetsErrors.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Action.h>
#include <aws/budgets/model/ActionHistory.h>
#include <aws/budgets/model/ActionHistoryDetails.h>
#include <aws/budgets/model/ActionStatus.h>
#include <aws/budgets/model/ActionSubType.h>
#include <aws/budgets/model/ActionThreshold.h>
#include <aws/budgets/model/ActionType.h>
#include <aws/budgets/model/ApprovalModel.h>
#include <aws/budgets/model/AutoAdjustData.h>
#include <aws/budgets/model/AutoAdjustType.h>
#include <aws/budgets/model/Budget.h>
#include <aws/budgets/model/BudgetNotificationsForAccount.h>
#include <aws/budgets/model/BudgetPerformanceHistory.h>
#include <aws/budgets/model/BudgetType.h>
#include <aws/budgets/model/BudgetedAndActualAmounts.h>
#include <aws/budgets/model/CalculatedSpend.h>
#include <aws/budgets/model/ComparisonOperator.h>
#include <aws/budgets/model/CostCategoryValues.h>
#include <aws/budgets/model/CostTypes.h>
#include <aws/budgets/model/CreateBudgetActionRequest.h>
#include <aws/budgets/model/CreateBudgetActionResult.h>
#include <aws/budgets/model/CreateBudgetRequest.h>
#include <aws/budgets/model/CreateBudgetResult.h>
#include <aws/budgets/model/CreateNotificationRequest.h>
#include <aws/budgets/model/CreateNotificationResult.h>
#include <aws/budgets/model/CreateSubscriberRequest.h>
#include <aws/budgets/model/CreateSubscriberResult.h>
#include <aws/budgets/model/Definition.h>
#include <aws/budgets/model/DeleteBudgetActionRequest.h>
#include <aws/budgets/model/DeleteBudgetActionResult.h>
#include <aws/budgets/model/DeleteBudgetRequest.h>
#include <aws/budgets/model/DeleteBudgetResult.h>
#include <aws/budgets/model/DeleteNotificationRequest.h>
#include <aws/budgets/model/DeleteNotificationResult.h>
#include <aws/budgets/model/DeleteSubscriberRequest.h>
#include <aws/budgets/model/DeleteSubscriberResult.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesRequest.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesResult.h>
#include <aws/budgets/model/DescribeBudgetActionRequest.h>
#include <aws/budgets/model/DescribeBudgetActionResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryRequest.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryResult.h>
#include <aws/budgets/model/DescribeBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetsRequest.h>
#include <aws/budgets/model/DescribeBudgetsResult.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetRequest.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationRequest.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationResult.h>
#include <aws/budgets/model/Dimension.h>
#include <aws/budgets/model/EventType.h>
#include <aws/budgets/model/ExecuteBudgetActionRequest.h>
#include <aws/budgets/model/ExecuteBudgetActionResult.h>
#include <aws/budgets/model/ExecutionType.h>
#include <aws/budgets/model/Expression.h>
#include <aws/budgets/model/ExpressionDimensionValues.h>
#include <aws/budgets/model/HealthStatus.h>
#include <aws/budgets/model/HealthStatusReason.h>
#include <aws/budgets/model/HealthStatusValue.h>
#include <aws/budgets/model/HistoricalOptions.h>
#include <aws/budgets/model/IamActionDefinition.h>
#include <aws/budgets/model/ListTagsForResourceRequest.h>
#include <aws/budgets/model/ListTagsForResourceResult.h>
#include <aws/budgets/model/MatchOption.h>
#include <aws/budgets/model/Metric.h>
#include <aws/budgets/model/Notification.h>
#include <aws/budgets/model/NotificationState.h>
#include <aws/budgets/model/NotificationType.h>
#include <aws/budgets/model/NotificationWithSubscribers.h>
#include <aws/budgets/model/ResourceTag.h>
#include <aws/budgets/model/ScpActionDefinition.h>
#include <aws/budgets/model/Spend.h>
#include <aws/budgets/model/SsmActionDefinition.h>
#include <aws/budgets/model/Subscriber.h>
#include <aws/budgets/model/SubscriptionType.h>
#include <aws/budgets/model/TagResourceRequest.h>
#include <aws/budgets/model/TagResourceResult.h>
#include <aws/budgets/model/TagValues.h>
#include <aws/budgets/model/ThresholdType.h>
#include <aws/budgets/model/TimePeriod.h>
#include <aws/budgets/model/TimeUnit.h>
#include <aws/budgets/model/UntagResourceRequest.h>
#include <aws/budgets/model/UntagResourceResult.h>
#include <aws/budgets/model/UpdateBudgetActionRequest.h>
#include <aws/budgets/model/UpdateBudgetActionResult.h>
#include <aws/budgets/model/UpdateBudgetRequest.h>
#include <aws/budgets/model/UpdateBudgetResult.h>
#include <aws/budgets/model/UpdateNotificationRequest.h>
#include <aws/budgets/model/UpdateNotificationResult.h>
#include <aws/budgets/model/UpdateSubscriberRequest.h>
#include <aws/budgets/model/UpdateSubscriberResult.h>

using BudgetsIncludeTest = ::testing::Test;

TEST_F(BudgetsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Budgets::BudgetsClient>("BudgetsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
