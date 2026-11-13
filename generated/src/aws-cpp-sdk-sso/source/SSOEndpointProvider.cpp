/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/SSOEndpointProvider.h>
#include <aws/sso/internal/SSOEndpointRules.h>

namespace Aws {
#ifndef AWS_SSO_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSO::Endpoint::SSOClientConfiguration, SSO::Endpoint::SSOBuiltInParameters,
                                                   SSO::Endpoint::SSOClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSO::Endpoint::SSOClientConfiguration, SSO::Endpoint::SSOBuiltInParameters,
                                                  SSO::Endpoint::SSOClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSO {
namespace Endpoint {
SSOEndpointProvider::SSOEndpointProvider()
    : SSODefaultEpProviderBase(Aws::SSO::SSOEndpointRules::GetRulesBlob(), Aws::SSO::SSOEndpointRules::RulesBlobSize) {}

void SSOBuiltInParameters::SetFromClientConfiguration(const SSOClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSOClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSOBuiltInParameters::SetFromClientConfiguration(const SSOClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSOClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSOBuiltInParameters::SetServiceSpecificParameters(const SSOClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSO
}  // namespace Aws
