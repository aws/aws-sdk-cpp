/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplace-reporting/MarketplaceReportingClient.h>
#include <aws/marketplace-reporting/MarketplaceReportingEndpointProvider.h>
#include <aws/marketplace-reporting/MarketplaceReportingEndpointRules.h>
#include <aws/marketplace-reporting/MarketplaceReportingErrorMarshaller.h>
#include <aws/marketplace-reporting/MarketplaceReportingErrors.h>
#include <aws/marketplace-reporting/MarketplaceReportingRequest.h>
#include <aws/marketplace-reporting/MarketplaceReportingServiceClientModel.h>
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>
#include <aws/marketplace-reporting/model/GetBuyerDashboardRequest.h>
#include <aws/marketplace-reporting/model/GetBuyerDashboardResult.h>

using MarketplaceReportingIncludeTest = ::testing::Test;

TEST_F(MarketplaceReportingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceReporting::MarketplaceReportingClient>("MarketplaceReportingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
