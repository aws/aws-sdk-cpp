/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointProvider.h>
#include <aws/marketplace-entitlement/internal/MarketplaceEntitlementServiceEndpointRules.h>

namespace Aws {
namespace MarketplaceEntitlementService {
namespace Endpoint {
MarketplaceEntitlementServiceEndpointProvider::MarketplaceEntitlementServiceEndpointProvider()
    : MarketplaceEntitlementServiceDefaultEpProviderBase(
          Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::GetRulesBlob(),
          Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
