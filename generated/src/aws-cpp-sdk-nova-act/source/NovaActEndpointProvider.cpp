/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nova-act/NovaActEndpointProvider.h>
#include <aws/nova-act/internal/NovaActEndpointRules.h>

namespace Aws {
#ifndef AWS_NOVAACT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<NovaAct::Endpoint::NovaActClientConfiguration,
                                                   NovaAct::Endpoint::NovaActBuiltInParameters,
                                                   NovaAct::Endpoint::NovaActClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<NovaAct::Endpoint::NovaActClientConfiguration,
                                                  NovaAct::Endpoint::NovaActBuiltInParameters,
                                                  NovaAct::Endpoint::NovaActClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NovaAct {
namespace Endpoint {
NovaActEndpointProvider::NovaActEndpointProvider()
    : NovaActDefaultEpProviderBase(Aws::NovaAct::NovaActEndpointRules::GetRulesBlob(), Aws::NovaAct::NovaActEndpointRules::RulesBlobSize) {}

void NovaActBuiltInParameters::SetFromClientConfiguration(const NovaActClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NovaActClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NovaActBuiltInParameters::SetFromClientConfiguration(const NovaActClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NovaActClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NovaActBuiltInParameters::SetServiceSpecificParameters(const NovaActClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace NovaAct
}  // namespace Aws
