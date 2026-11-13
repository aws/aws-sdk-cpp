/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointProvider.h>
#include <aws/marketplace-discovery/internal/MarketplaceDiscoveryEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACEDISCOVERY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientConfiguration,
                                                   MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryBuiltInParameters,
                                                   MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientConfiguration,
                                                  MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryBuiltInParameters,
                                                  MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceDiscovery {
namespace Endpoint {
MarketplaceDiscoveryEndpointProvider::MarketplaceDiscoveryEndpointProvider()
    : MarketplaceDiscoveryDefaultEpProviderBase(Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::GetRulesBlob(),
                                                Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::RulesBlobSize) {}

void MarketplaceDiscoveryBuiltInParameters::SetFromClientConfiguration(const MarketplaceDiscoveryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceDiscoveryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceDiscoveryBuiltInParameters::SetFromClientConfiguration(const MarketplaceDiscoveryClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceDiscoveryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceDiscoveryBuiltInParameters::SetServiceSpecificParameters(const MarketplaceDiscoveryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceDiscovery
}  // namespace Aws
