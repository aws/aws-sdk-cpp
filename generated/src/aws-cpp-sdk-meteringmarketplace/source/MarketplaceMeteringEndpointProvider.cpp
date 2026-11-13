/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/MarketplaceMeteringEndpointProvider.h>
#include <aws/meteringmarketplace/internal/MarketplaceMeteringEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACEMETERING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MarketplaceMetering::Endpoint::MarketplaceMeteringClientConfiguration,
                                                   MarketplaceMetering::Endpoint::MarketplaceMeteringBuiltInParameters,
                                                   MarketplaceMetering::Endpoint::MarketplaceMeteringClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MarketplaceMetering::Endpoint::MarketplaceMeteringClientConfiguration,
                                                  MarketplaceMetering::Endpoint::MarketplaceMeteringBuiltInParameters,
                                                  MarketplaceMetering::Endpoint::MarketplaceMeteringClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceMetering {
namespace Endpoint {
MarketplaceMeteringEndpointProvider::MarketplaceMeteringEndpointProvider()
    : MarketplaceMeteringDefaultEpProviderBase(Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::GetRulesBlob(),
                                               Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::RulesBlobSize) {}

void MarketplaceMeteringBuiltInParameters::SetFromClientConfiguration(const MarketplaceMeteringClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceMeteringClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceMeteringBuiltInParameters::SetFromClientConfiguration(const MarketplaceMeteringClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceMeteringClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceMeteringBuiltInParameters::SetServiceSpecificParameters(const MarketplaceMeteringClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceMetering
}  // namespace Aws
