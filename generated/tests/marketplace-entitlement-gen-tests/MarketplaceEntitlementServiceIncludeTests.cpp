/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClient.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointProvider.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointRules.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrorMarshaller.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrors.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceRequest.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceServiceClientModel.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/marketplace-entitlement/model/Entitlement.h>
#include <aws/marketplace-entitlement/model/EntitlementValue.h>
#include <aws/marketplace-entitlement/model/GetEntitlementFilterName.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsRequest.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsResult.h>

using MarketplaceEntitlementServiceIncludeTest = ::testing::Test;

TEST_F(MarketplaceEntitlementServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClient>("MarketplaceEntitlementServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
