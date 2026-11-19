/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
#include <aws/rolesanywhere/internal/RolesAnywhereEndpointRules.h>

namespace Aws {
#ifndef AWS_ROLESANYWHERE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RolesAnywhere::Endpoint::RolesAnywhereClientConfiguration,
                                                   RolesAnywhere::Endpoint::RolesAnywhereBuiltInParameters,
                                                   RolesAnywhere::Endpoint::RolesAnywhereClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RolesAnywhere::Endpoint::RolesAnywhereClientConfiguration,
                                                  RolesAnywhere::Endpoint::RolesAnywhereBuiltInParameters,
                                                  RolesAnywhere::Endpoint::RolesAnywhereClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RolesAnywhere {
namespace Endpoint {
RolesAnywhereEndpointProvider::RolesAnywhereEndpointProvider()
    : RolesAnywhereDefaultEpProviderBase(Aws::RolesAnywhere::RolesAnywhereEndpointRules::GetRulesBlob(),
                                         Aws::RolesAnywhere::RolesAnywhereEndpointRules::RulesBlobSize) {}

void RolesAnywhereBuiltInParameters::SetFromClientConfiguration(const RolesAnywhereClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RolesAnywhereClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RolesAnywhereBuiltInParameters::SetFromClientConfiguration(const RolesAnywhereClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RolesAnywhereClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RolesAnywhereBuiltInParameters::SetServiceSpecificParameters(const RolesAnywhereClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RolesAnywhere
}  // namespace Aws
