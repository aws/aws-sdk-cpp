/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/MarketplaceCatalogEndpointProvider.h>
#include <aws/marketplace-catalog/internal/MarketplaceCatalogEndpointRules.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Endpoint {
MarketplaceCatalogEndpointProvider::MarketplaceCatalogEndpointProvider()
    : MarketplaceCatalogDefaultEpProviderBase(Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::GetRulesBlob(),
                                              Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceCatalog
}  // namespace Aws
