/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-security-manager/NetworkSecurityManagerEndpointProvider.h>
#include <aws/network-security-manager/internal/NetworkSecurityManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_NETWORKSECURITYMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NetworkSecurityManager::Endpoint::NetworkSecurityManagerClientConfiguration,
                                                   NetworkSecurityManager::Endpoint::NetworkSecurityManagerBuiltInParameters,
                                                   NetworkSecurityManager::Endpoint::NetworkSecurityManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NetworkSecurityManager::Endpoint::NetworkSecurityManagerClientConfiguration,
                                                  NetworkSecurityManager::Endpoint::NetworkSecurityManagerBuiltInParameters,
                                                  NetworkSecurityManager::Endpoint::NetworkSecurityManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NetworkSecurityManager {
namespace Endpoint {
NetworkSecurityManagerEndpointProvider::NetworkSecurityManagerEndpointProvider()
    : NetworkSecurityManagerDefaultEpProviderBase(Aws::NetworkSecurityManager::NetworkSecurityManagerEndpointRules::GetRulesBlob(),
                                                  Aws::NetworkSecurityManager::NetworkSecurityManagerEndpointRules::RulesBlobSize) {}

void NetworkSecurityManagerBuiltInParameters::SetFromClientConfiguration(const NetworkSecurityManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NetworkSecurityManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NetworkSecurityManagerBuiltInParameters::SetFromClientConfiguration(const NetworkSecurityManagerClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NetworkSecurityManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NetworkSecurityManagerBuiltInParameters::SetServiceSpecificParameters(const NetworkSecurityManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace NetworkSecurityManager
}  // namespace Aws
