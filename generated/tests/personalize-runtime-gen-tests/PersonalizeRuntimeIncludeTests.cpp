/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/personalize-runtime/PersonalizeRuntimeClient.h>
#include <aws/personalize-runtime/PersonalizeRuntimeEndpointProvider.h>
#include <aws/personalize-runtime/PersonalizeRuntimeEndpointRules.h>
#include <aws/personalize-runtime/PersonalizeRuntimeErrorMarshaller.h>
#include <aws/personalize-runtime/PersonalizeRuntimeErrors.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/personalize-runtime/PersonalizeRuntimeServiceClientModel.h>
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/model/GetActionRecommendationsRequest.h>
#include <aws/personalize-runtime/model/GetActionRecommendationsResult.h>
#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/personalize-runtime/model/GetPersonalizedRankingResult.h>
#include <aws/personalize-runtime/model/GetRecommendationsRequest.h>
#include <aws/personalize-runtime/model/GetRecommendationsResult.h>
#include <aws/personalize-runtime/model/PredictedAction.h>
#include <aws/personalize-runtime/model/PredictedItem.h>
#include <aws/personalize-runtime/model/Promotion.h>

using PersonalizeRuntimeIncludeTest = ::testing::Test;

TEST_F(PersonalizeRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PersonalizeRuntime::PersonalizeRuntimeClient>("PersonalizeRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
