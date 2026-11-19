/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointProvider.h>
#include <aws/marketplace-deployment/internal/MarketplaceDeploymentEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACEDEPLOYMENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientConfiguration,
                                                   MarketplaceDeployment::Endpoint::MarketplaceDeploymentBuiltInParameters,
                                                   MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientConfiguration,
                                                  MarketplaceDeployment::Endpoint::MarketplaceDeploymentBuiltInParameters,
                                                  MarketplaceDeployment::Endpoint::MarketplaceDeploymentClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceDeployment {
namespace Endpoint {
MarketplaceDeploymentEndpointProvider::MarketplaceDeploymentEndpointProvider()
    : MarketplaceDeploymentDefaultEpProviderBase(Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::GetRulesBlob(),
                                                 Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::RulesBlobSize) {}

void MarketplaceDeploymentBuiltInParameters::SetFromClientConfiguration(const MarketplaceDeploymentClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceDeploymentClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceDeploymentBuiltInParameters::SetFromClientConfiguration(const MarketplaceDeploymentClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceDeploymentClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceDeploymentBuiltInParameters::SetServiceSpecificParameters(const MarketplaceDeploymentClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceDeployment
}  // namespace Aws
