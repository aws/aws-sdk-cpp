/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/MarketplaceMeteringEndpointProvider.h>
#include <aws/meteringmarketplace/internal/MarketplaceMeteringEndpointRules.h>

namespace Aws {
namespace MarketplaceMetering {
namespace Endpoint {
MarketplaceMeteringEndpointProvider::MarketplaceMeteringEndpointProvider()
    : MarketplaceMeteringDefaultEpProviderBase(Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::GetRulesBlob(),
                                               Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceMetering
}  // namespace Aws
