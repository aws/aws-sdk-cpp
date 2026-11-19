/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/ShieldEndpointProvider.h>
#include <aws/shield/internal/ShieldEndpointRules.h>

namespace Aws {
#ifndef AWS_SHIELD_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Shield::Endpoint::ShieldClientConfiguration, Shield::Endpoint::ShieldBuiltInParameters,
                                                   Shield::Endpoint::ShieldClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Shield::Endpoint::ShieldClientConfiguration, Shield::Endpoint::ShieldBuiltInParameters,
                                                  Shield::Endpoint::ShieldClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Shield {
namespace Endpoint {
ShieldEndpointProvider::ShieldEndpointProvider()
    : ShieldDefaultEpProviderBase(Aws::Shield::ShieldEndpointRules::GetRulesBlob(), Aws::Shield::ShieldEndpointRules::RulesBlobSize) {}

void ShieldBuiltInParameters::SetFromClientConfiguration(const ShieldClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ShieldClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ShieldBuiltInParameters::SetFromClientConfiguration(const ShieldClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ShieldClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ShieldBuiltInParameters::SetServiceSpecificParameters(const ShieldClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Shield
}  // namespace Aws
