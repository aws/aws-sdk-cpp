/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/NetworkFirewallEndpointProvider.h>
#include <aws/network-firewall/internal/NetworkFirewallEndpointRules.h>

namespace Aws {
#ifndef AWS_NETWORKFIREWALL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NetworkFirewall::Endpoint::NetworkFirewallClientConfiguration,
                                                   NetworkFirewall::Endpoint::NetworkFirewallBuiltInParameters,
                                                   NetworkFirewall::Endpoint::NetworkFirewallClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NetworkFirewall::Endpoint::NetworkFirewallClientConfiguration,
                                                  NetworkFirewall::Endpoint::NetworkFirewallBuiltInParameters,
                                                  NetworkFirewall::Endpoint::NetworkFirewallClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NetworkFirewall {
namespace Endpoint {
NetworkFirewallEndpointProvider::NetworkFirewallEndpointProvider()
    : NetworkFirewallDefaultEpProviderBase(Aws::NetworkFirewall::NetworkFirewallEndpointRules::GetRulesBlob(),
                                           Aws::NetworkFirewall::NetworkFirewallEndpointRules::RulesBlobSize) {}

void NetworkFirewallBuiltInParameters::SetFromClientConfiguration(const NetworkFirewallClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NetworkFirewallClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NetworkFirewallBuiltInParameters::SetFromClientConfiguration(const NetworkFirewallClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NetworkFirewallClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NetworkFirewallBuiltInParameters::SetServiceSpecificParameters(const NetworkFirewallClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace NetworkFirewall
}  // namespace Aws
