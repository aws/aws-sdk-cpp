/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
#include <aws/trustedadvisor/internal/TrustedAdvisorEndpointRules.h>

namespace Aws {
#ifndef AWS_TRUSTEDADVISOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TrustedAdvisor::Endpoint::TrustedAdvisorClientConfiguration,
                                                   TrustedAdvisor::Endpoint::TrustedAdvisorBuiltInParameters,
                                                   TrustedAdvisor::Endpoint::TrustedAdvisorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TrustedAdvisor::Endpoint::TrustedAdvisorClientConfiguration,
                                                  TrustedAdvisor::Endpoint::TrustedAdvisorBuiltInParameters,
                                                  TrustedAdvisor::Endpoint::TrustedAdvisorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TrustedAdvisor {
namespace Endpoint {
TrustedAdvisorEndpointProvider::TrustedAdvisorEndpointProvider()
    : TrustedAdvisorDefaultEpProviderBase(Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::GetRulesBlob(),
                                          Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::RulesBlobSize) {}

void TrustedAdvisorBuiltInParameters::SetFromClientConfiguration(const TrustedAdvisorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TrustedAdvisorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TrustedAdvisorBuiltInParameters::SetFromClientConfiguration(const TrustedAdvisorClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TrustedAdvisorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TrustedAdvisorBuiltInParameters::SetServiceSpecificParameters(const TrustedAdvisorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TrustedAdvisor
}  // namespace Aws
