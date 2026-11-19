/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/ServiceDiscoveryEndpointProvider.h>
#include <aws/servicediscovery/internal/ServiceDiscoveryEndpointRules.h>

namespace Aws {
#ifndef AWS_SERVICEDISCOVERY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ServiceDiscovery::Endpoint::ServiceDiscoveryClientConfiguration,
                                                   ServiceDiscovery::Endpoint::ServiceDiscoveryBuiltInParameters,
                                                   ServiceDiscovery::Endpoint::ServiceDiscoveryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ServiceDiscovery::Endpoint::ServiceDiscoveryClientConfiguration,
                                                  ServiceDiscovery::Endpoint::ServiceDiscoveryBuiltInParameters,
                                                  ServiceDiscovery::Endpoint::ServiceDiscoveryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ServiceDiscovery {
namespace Endpoint {
ServiceDiscoveryEndpointProvider::ServiceDiscoveryEndpointProvider()
    : ServiceDiscoveryDefaultEpProviderBase(Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::GetRulesBlob(),
                                            Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::RulesBlobSize) {}

void ServiceDiscoveryBuiltInParameters::SetFromClientConfiguration(const ServiceDiscoveryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ServiceDiscoveryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ServiceDiscoveryBuiltInParameters::SetFromClientConfiguration(const ServiceDiscoveryClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ServiceDiscoveryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ServiceDiscoveryBuiltInParameters::SetServiceSpecificParameters(const ServiceDiscoveryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ServiceDiscovery
}  // namespace Aws
