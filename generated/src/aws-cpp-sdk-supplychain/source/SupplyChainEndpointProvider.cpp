/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <aws/supplychain/internal/SupplyChainEndpointRules.h>

namespace Aws {
#ifndef AWS_SUPPLYCHAIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SupplyChain::Endpoint::SupplyChainClientConfiguration,
                                                   SupplyChain::Endpoint::SupplyChainBuiltInParameters,
                                                   SupplyChain::Endpoint::SupplyChainClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SupplyChain::Endpoint::SupplyChainClientConfiguration,
                                                  SupplyChain::Endpoint::SupplyChainBuiltInParameters,
                                                  SupplyChain::Endpoint::SupplyChainClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SupplyChain {
namespace Endpoint {
SupplyChainEndpointProvider::SupplyChainEndpointProvider()
    : SupplyChainDefaultEpProviderBase(Aws::SupplyChain::SupplyChainEndpointRules::GetRulesBlob(),
                                       Aws::SupplyChain::SupplyChainEndpointRules::RulesBlobSize) {}

void SupplyChainBuiltInParameters::SetFromClientConfiguration(const SupplyChainClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SupplyChainClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SupplyChainBuiltInParameters::SetFromClientConfiguration(const SupplyChainClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SupplyChainClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SupplyChainBuiltInParameters::SetServiceSpecificParameters(const SupplyChainClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SupplyChain
}  // namespace Aws
