/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/meteringmarketplace/MarketplaceMeteringClient.h>
#include <aws/meteringmarketplace/MarketplaceMeteringEndpointProvider.h>
#include <aws/meteringmarketplace/MarketplaceMeteringEndpointRules.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrorMarshaller.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/meteringmarketplace/MarketplaceMeteringServiceClientModel.h>
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/model/BatchMeterUsageRequest.h>
#include <aws/meteringmarketplace/model/BatchMeterUsageResult.h>
#include <aws/meteringmarketplace/model/MeterUsageRequest.h>
#include <aws/meteringmarketplace/model/MeterUsageResult.h>
#include <aws/meteringmarketplace/model/RegisterUsageRequest.h>
#include <aws/meteringmarketplace/model/RegisterUsageResult.h>
#include <aws/meteringmarketplace/model/ResolveCustomerRequest.h>
#include <aws/meteringmarketplace/model/ResolveCustomerResult.h>
#include <aws/meteringmarketplace/model/Tag.h>
#include <aws/meteringmarketplace/model/UsageAllocation.h>
#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <aws/meteringmarketplace/model/UsageRecordResult.h>
#include <aws/meteringmarketplace/model/UsageRecordResultStatus.h>

using MarketplaceMeteringIncludeTest = ::testing::Test;

TEST_F(MarketplaceMeteringIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceMetering::MarketplaceMeteringClient>("MarketplaceMeteringIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
