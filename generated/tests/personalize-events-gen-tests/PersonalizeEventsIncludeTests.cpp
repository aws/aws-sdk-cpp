/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/personalize-events/PersonalizeEventsClient.h>
#include <aws/personalize-events/PersonalizeEventsEndpointProvider.h>
#include <aws/personalize-events/PersonalizeEventsEndpointRules.h>
#include <aws/personalize-events/PersonalizeEventsErrorMarshaller.h>
#include <aws/personalize-events/PersonalizeEventsErrors.h>
#include <aws/personalize-events/PersonalizeEventsRequest.h>
#include <aws/personalize-events/PersonalizeEventsServiceClientModel.h>
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/model/Action.h>
#include <aws/personalize-events/model/ActionInteraction.h>
#include <aws/personalize-events/model/Event.h>
#include <aws/personalize-events/model/Item.h>
#include <aws/personalize-events/model/MetricAttribution.h>
#include <aws/personalize-events/model/PutActionInteractionsRequest.h>
#include <aws/personalize-events/model/PutActionsRequest.h>
#include <aws/personalize-events/model/PutEventsRequest.h>
#include <aws/personalize-events/model/PutItemsRequest.h>
#include <aws/personalize-events/model/PutUsersRequest.h>
#include <aws/personalize-events/model/User.h>

using PersonalizeEventsIncludeTest = ::testing::Test;

TEST_F(PersonalizeEventsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PersonalizeEvents::PersonalizeEventsClient>("PersonalizeEventsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
