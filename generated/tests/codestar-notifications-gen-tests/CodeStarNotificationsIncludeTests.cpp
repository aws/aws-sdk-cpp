/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codestar-notifications/CodeStarNotificationsClient.h>
#include <aws/codestar-notifications/CodeStarNotificationsEndpointProvider.h>
#include <aws/codestar-notifications/CodeStarNotificationsEndpointRules.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrorMarshaller.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrors.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/codestar-notifications/CodeStarNotificationsServiceClientModel.h>
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/CreateNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/CreateNotificationRuleResult.h>
#include <aws/codestar-notifications/model/DeleteNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DeleteNotificationRuleResult.h>
#include <aws/codestar-notifications/model/DeleteTargetRequest.h>
#include <aws/codestar-notifications/model/DeleteTargetResult.h>
#include <aws/codestar-notifications/model/DescribeNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DescribeNotificationRuleResult.h>
#include <aws/codestar-notifications/model/DetailType.h>
#include <aws/codestar-notifications/model/EventTypeSummary.h>
#include <aws/codestar-notifications/model/ListEventTypesFilter.h>
#include <aws/codestar-notifications/model/ListEventTypesFilterName.h>
#include <aws/codestar-notifications/model/ListEventTypesRequest.h>
#include <aws/codestar-notifications/model/ListEventTypesResult.h>
#include <aws/codestar-notifications/model/ListNotificationRulesFilter.h>
#include <aws/codestar-notifications/model/ListNotificationRulesFilterName.h>
#include <aws/codestar-notifications/model/ListNotificationRulesRequest.h>
#include <aws/codestar-notifications/model/ListNotificationRulesResult.h>
#include <aws/codestar-notifications/model/ListTagsForResourceRequest.h>
#include <aws/codestar-notifications/model/ListTagsForResourceResult.h>
#include <aws/codestar-notifications/model/ListTargetsFilter.h>
#include <aws/codestar-notifications/model/ListTargetsFilterName.h>
#include <aws/codestar-notifications/model/ListTargetsRequest.h>
#include <aws/codestar-notifications/model/ListTargetsResult.h>
#include <aws/codestar-notifications/model/NotificationRuleStatus.h>
#include <aws/codestar-notifications/model/NotificationRuleSummary.h>
#include <aws/codestar-notifications/model/SubscribeRequest.h>
#include <aws/codestar-notifications/model/SubscribeResult.h>
#include <aws/codestar-notifications/model/TagResourceRequest.h>
#include <aws/codestar-notifications/model/TagResourceResult.h>
#include <aws/codestar-notifications/model/Target.h>
#include <aws/codestar-notifications/model/TargetStatus.h>
#include <aws/codestar-notifications/model/TargetSummary.h>
#include <aws/codestar-notifications/model/UnsubscribeRequest.h>
#include <aws/codestar-notifications/model/UnsubscribeResult.h>
#include <aws/codestar-notifications/model/UntagResourceRequest.h>
#include <aws/codestar-notifications/model/UntagResourceResult.h>
#include <aws/codestar-notifications/model/UpdateNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/UpdateNotificationRuleResult.h>

using CodeStarNotificationsIncludeTest = ::testing::Test;

TEST_F(CodeStarNotificationsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeStarNotifications::CodeStarNotificationsClient>("CodeStarNotificationsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
