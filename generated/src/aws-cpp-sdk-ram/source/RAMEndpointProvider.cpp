/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/RAMEndpointProvider.h>
#include <aws/ram/internal/RAMEndpointRules.h>

namespace Aws {
#ifndef AWS_RAM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RAM::Endpoint::RAMClientConfiguration, RAM::Endpoint::RAMBuiltInParameters,
                                                   RAM::Endpoint::RAMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RAM::Endpoint::RAMClientConfiguration, RAM::Endpoint::RAMBuiltInParameters,
                                                  RAM::Endpoint::RAMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RAM {
namespace Endpoint {
RAMEndpointProvider::RAMEndpointProvider()
    : RAMDefaultEpProviderBase(Aws::RAM::RAMEndpointRules::GetRulesBlob(), Aws::RAM::RAMEndpointRules::RulesBlobSize) {}

void RAMBuiltInParameters::SetFromClientConfiguration(const RAMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RAMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RAMBuiltInParameters::SetFromClientConfiguration(const RAMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RAMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RAMBuiltInParameters::SetServiceSpecificParameters(const RAMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RAM
}  // namespace Aws
