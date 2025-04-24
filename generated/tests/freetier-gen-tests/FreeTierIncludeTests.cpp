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
#include <aws/freetier/model/Dimension.h>
#include <aws/freetier/model/DimensionValues.h>
#include <aws/freetier/model/Expression.h>
#include <aws/freetier/model/FreeTierUsage.h>
#include <aws/freetier/model/GetFreeTierUsageRequest.h>
#include <aws/freetier/model/GetFreeTierUsageResult.h>
#include <aws/freetier/model/MatchOption.h>

using FreeTierIncludeTest = ::testing::Test;

TEST_F(FreeTierIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  auto pClient = Aws::MakeUnique<Aws::FreeTier::FreeTierClient>("FreeTierIncludeTest", config);
  ASSERT_TRUE(pClient.get());
}
