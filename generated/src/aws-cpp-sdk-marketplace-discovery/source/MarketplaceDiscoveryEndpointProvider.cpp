/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointProvider.h>
#include <aws/marketplace-discovery/internal/MarketplaceDiscoveryEndpointRules.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Endpoint {
MarketplaceDiscoveryEndpointProvider::MarketplaceDiscoveryEndpointProvider()
    : MarketplaceDiscoveryDefaultEpProviderBase(Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::GetRulesBlob(),
                                                Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceDiscovery
}  // namespace Aws
