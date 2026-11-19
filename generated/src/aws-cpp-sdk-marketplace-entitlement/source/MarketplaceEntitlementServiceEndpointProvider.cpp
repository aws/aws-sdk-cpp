/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointProvider.h>
#include <aws/marketplace-entitlement/internal/MarketplaceEntitlementServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACEENTITLEMENTSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientConfiguration,
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceBuiltInParameters,
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientConfiguration,
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceBuiltInParameters,
    MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceEntitlementService {
namespace Endpoint {
MarketplaceEntitlementServiceEndpointProvider::MarketplaceEntitlementServiceEndpointProvider()
    : MarketplaceEntitlementServiceDefaultEpProviderBase(
          Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::GetRulesBlob(),
          Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::RulesBlobSize) {}

void MarketplaceEntitlementServiceBuiltInParameters::SetFromClientConfiguration(
    const MarketplaceEntitlementServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceEntitlementServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceEntitlementServiceBuiltInParameters::SetFromClientConfiguration(
    const MarketplaceEntitlementServiceClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceEntitlementServiceClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceEntitlementServiceBuiltInParameters::SetServiceSpecificParameters(
    const MarketplaceEntitlementServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
