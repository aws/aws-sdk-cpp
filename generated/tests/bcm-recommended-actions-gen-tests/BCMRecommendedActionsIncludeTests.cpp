/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bcm-recommended-actions/BCMRecommendedActionsClient.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointProvider.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointRules.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrorMarshaller.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrors.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsRequest.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsServiceClientModel.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/bcm-recommended-actions/model/ActionFilter.h>
#include <aws/bcm-recommended-actions/model/ActionType.h>
#include <aws/bcm-recommended-actions/model/Feature.h>
#include <aws/bcm-recommended-actions/model/FilterName.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsRequest.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsResult.h>
#include <aws/bcm-recommended-actions/model/MatchOption.h>
#include <aws/bcm-recommended-actions/model/RecommendedAction.h>
#include <aws/bcm-recommended-actions/model/RequestFilter.h>
#include <aws/bcm-recommended-actions/model/Severity.h>
#include <aws/bcm-recommended-actions/model/ValidationException.h>
#include <aws/bcm-recommended-actions/model/ValidationExceptionField.h>
#include <aws/bcm-recommended-actions/model/ValidationExceptionReason.h>

using BCMRecommendedActionsIncludeTest = ::testing::Test;

TEST_F(BCMRecommendedActionsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BCMRecommendedActions::BCMRecommendedActionsClient>("BCMRecommendedActionsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
