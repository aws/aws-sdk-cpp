/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/NetworkMonitorEndpointProvider.h>
#include <aws/networkmonitor/internal/NetworkMonitorEndpointRules.h>

namespace Aws {
#ifndef AWS_NETWORKMONITOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NetworkMonitor::Endpoint::NetworkMonitorClientConfiguration,
                                                   NetworkMonitor::Endpoint::NetworkMonitorBuiltInParameters,
                                                   NetworkMonitor::Endpoint::NetworkMonitorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NetworkMonitor::Endpoint::NetworkMonitorClientConfiguration,
                                                  NetworkMonitor::Endpoint::NetworkMonitorBuiltInParameters,
                                                  NetworkMonitor::Endpoint::NetworkMonitorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NetworkMonitor {
namespace Endpoint {
NetworkMonitorEndpointProvider::NetworkMonitorEndpointProvider()
    : NetworkMonitorDefaultEpProviderBase(Aws::NetworkMonitor::NetworkMonitorEndpointRules::GetRulesBlob(),
                                          Aws::NetworkMonitor::NetworkMonitorEndpointRules::RulesBlobSize) {}

void NetworkMonitorBuiltInParameters::SetFromClientConfiguration(const NetworkMonitorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NetworkMonitorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NetworkMonitorBuiltInParameters::SetFromClientConfiguration(const NetworkMonitorClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NetworkMonitorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NetworkMonitorBuiltInParameters::SetServiceSpecificParameters(const NetworkMonitorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace NetworkMonitor
}  // namespace Aws
