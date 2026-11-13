/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/ProtonEndpointProvider.h>
#include <aws/proton/internal/ProtonEndpointRules.h>

namespace Aws {
#ifndef AWS_PROTON_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Proton::Endpoint::ProtonClientConfiguration, Proton::Endpoint::ProtonBuiltInParameters,
                                                   Proton::Endpoint::ProtonClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Proton::Endpoint::ProtonClientConfiguration, Proton::Endpoint::ProtonBuiltInParameters,
                                                  Proton::Endpoint::ProtonClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Proton {
namespace Endpoint {
ProtonEndpointProvider::ProtonEndpointProvider()
    : ProtonDefaultEpProviderBase(Aws::Proton::ProtonEndpointRules::GetRulesBlob(), Aws::Proton::ProtonEndpointRules::RulesBlobSize) {}

void ProtonBuiltInParameters::SetFromClientConfiguration(const ProtonClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ProtonClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ProtonBuiltInParameters::SetFromClientConfiguration(const ProtonClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ProtonClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ProtonBuiltInParameters::SetServiceSpecificParameters(const ProtonClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Proton
}  // namespace Aws
