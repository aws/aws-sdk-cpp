/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/NetworkManagerEndpointProvider.h>
#include <aws/networkmanager/internal/NetworkManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_NETWORKMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NetworkManager::Endpoint::NetworkManagerClientConfiguration,
                                                   NetworkManager::Endpoint::NetworkManagerBuiltInParameters,
                                                   NetworkManager::Endpoint::NetworkManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NetworkManager::Endpoint::NetworkManagerClientConfiguration,
                                                  NetworkManager::Endpoint::NetworkManagerBuiltInParameters,
                                                  NetworkManager::Endpoint::NetworkManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NetworkManager {
namespace Endpoint {
NetworkManagerEndpointProvider::NetworkManagerEndpointProvider()
    : NetworkManagerDefaultEpProviderBase(Aws::NetworkManager::NetworkManagerEndpointRules::GetRulesBlob(),
                                          Aws::NetworkManager::NetworkManagerEndpointRules::RulesBlobSize) {}

void NetworkManagerBuiltInParameters::SetFromClientConfiguration(const NetworkManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NetworkManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NetworkManagerBuiltInParameters::SetFromClientConfiguration(const NetworkManagerClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NetworkManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NetworkManagerBuiltInParameters::SetServiceSpecificParameters(const NetworkManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace NetworkManager
}  // namespace Aws
