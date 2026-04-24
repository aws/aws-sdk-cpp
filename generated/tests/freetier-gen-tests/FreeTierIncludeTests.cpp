/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/freetier/FreeTierClient.h>
#include <aws/freetier/FreeTierEndpointProvider.h>
#include <aws/freetier/FreeTierEndpointRules.h>
#include <aws/freetier/FreeTierErrorMarshaller.h>
#include <aws/freetier/FreeTierErrors.h>
#include <aws/freetier/FreeTierRequest.h>
#include <aws/freetier/FreeTierServiceClientModel.h>
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/AccountPlanStatus.h>
#include <aws/freetier/model/AccountPlanType.h>
#include <aws/freetier/model/ActivityReward.h>
#include <aws/freetier/model/ActivityStatus.h>
#include <aws/freetier/model/ActivitySummary.h>
#include <aws/freetier/model/CurrencyCode.h>
#include <aws/freetier/model/Dimension.h>
#include <aws/freetier/model/DimensionValues.h>
#include <aws/freetier/model/Expression.h>
#include <aws/freetier/model/FreeTierUsage.h>
#include <aws/freetier/model/GetAccountActivityRequest.h>
#include <aws/freetier/model/GetAccountActivityResult.h>
#include <aws/freetier/model/GetAccountPlanStateRequest.h>
#include <aws/freetier/model/GetAccountPlanStateResult.h>
#include <aws/freetier/model/GetFreeTierUsageRequest.h>
#include <aws/freetier/model/GetFreeTierUsageResult.h>
#include <aws/freetier/model/LanguageCode.h>
#include <aws/freetier/model/ListAccountActivitiesRequest.h>
#include <aws/freetier/model/ListAccountActivitiesResult.h>
#include <aws/freetier/model/MatchOption.h>
#include <aws/freetier/model/MonetaryAmount.h>
#include <aws/freetier/model/UpgradeAccountPlanRequest.h>
#include <aws/freetier/model/UpgradeAccountPlanResult.h>

using FreeTierIncludeTest = ::testing::Test;

TEST_F(FreeTierIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::FreeTier::FreeTierClient>("FreeTierIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
