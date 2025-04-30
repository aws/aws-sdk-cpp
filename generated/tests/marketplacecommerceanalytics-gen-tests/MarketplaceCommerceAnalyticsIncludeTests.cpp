/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointRules.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrors.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsRequest.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsServiceClientModel.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/marketplacecommerceanalytics/model/DataSetType.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetResult.h>
#include <aws/marketplacecommerceanalytics/model/SupportDataSetType.h>

using MarketplaceCommerceAnalyticsIncludeTest = ::testing::Test;

TEST_F(MarketplaceCommerceAnalyticsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClient>("MarketplaceCommerceAnalyticsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
