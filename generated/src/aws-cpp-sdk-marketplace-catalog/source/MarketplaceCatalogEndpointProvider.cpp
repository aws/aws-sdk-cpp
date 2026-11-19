/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/MarketplaceCatalogEndpointProvider.h>
#include <aws/marketplace-catalog/internal/MarketplaceCatalogEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACECATALOG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MarketplaceCatalog::Endpoint::MarketplaceCatalogClientConfiguration,
                                                   MarketplaceCatalog::Endpoint::MarketplaceCatalogBuiltInParameters,
                                                   MarketplaceCatalog::Endpoint::MarketplaceCatalogClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MarketplaceCatalog::Endpoint::MarketplaceCatalogClientConfiguration,
                                                  MarketplaceCatalog::Endpoint::MarketplaceCatalogBuiltInParameters,
                                                  MarketplaceCatalog::Endpoint::MarketplaceCatalogClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceCatalog {
namespace Endpoint {
MarketplaceCatalogEndpointProvider::MarketplaceCatalogEndpointProvider()
    : MarketplaceCatalogDefaultEpProviderBase(Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::GetRulesBlob(),
                                              Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::RulesBlobSize) {}

void MarketplaceCatalogBuiltInParameters::SetFromClientConfiguration(const MarketplaceCatalogClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceCatalogClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceCatalogBuiltInParameters::SetFromClientConfiguration(const MarketplaceCatalogClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceCatalogClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceCatalogBuiltInParameters::SetServiceSpecificParameters(const MarketplaceCatalogClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceCatalog
}  // namespace Aws
