/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <aws/networkflowmonitor/internal/NetworkFlowMonitorEndpointRules.h>

namespace Aws {
#ifndef AWS_NETWORKFLOWMONITOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientConfiguration,
                                                   NetworkFlowMonitor::Endpoint::NetworkFlowMonitorBuiltInParameters,
                                                   NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientConfiguration,
                                                  NetworkFlowMonitor::Endpoint::NetworkFlowMonitorBuiltInParameters,
                                                  NetworkFlowMonitor::Endpoint::NetworkFlowMonitorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NetworkFlowMonitor {
namespace Endpoint {
NetworkFlowMonitorEndpointProvider::NetworkFlowMonitorEndpointProvider()
    : NetworkFlowMonitorDefaultEpProviderBase(Aws::NetworkFlowMonitor::NetworkFlowMonitorEndpointRules::GetRulesBlob(),
                                              Aws::NetworkFlowMonitor::NetworkFlowMonitorEndpointRules::RulesBlobSize) {}

void NetworkFlowMonitorBuiltInParameters::SetFromClientConfiguration(const NetworkFlowMonitorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NetworkFlowMonitorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NetworkFlowMonitorBuiltInParameters::SetFromClientConfiguration(const NetworkFlowMonitorClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NetworkFlowMonitorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NetworkFlowMonitorBuiltInParameters::SetServiceSpecificParameters(const NetworkFlowMonitorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace NetworkFlowMonitor
}  // namespace Aws
