/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sustainability/SustainabilityEndpointProvider.h>
#include <aws/sustainability/internal/SustainabilityEndpointRules.h>

namespace Aws {
#ifndef AWS_SUSTAINABILITY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Sustainability::Endpoint::SustainabilityClientConfiguration,
                                                   Sustainability::Endpoint::SustainabilityBuiltInParameters,
                                                   Sustainability::Endpoint::SustainabilityClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Sustainability::Endpoint::SustainabilityClientConfiguration,
                                                  Sustainability::Endpoint::SustainabilityBuiltInParameters,
                                                  Sustainability::Endpoint::SustainabilityClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Sustainability {
namespace Endpoint {
SustainabilityEndpointProvider::SustainabilityEndpointProvider()
    : SustainabilityDefaultEpProviderBase(Aws::Sustainability::SustainabilityEndpointRules::GetRulesBlob(),
                                          Aws::Sustainability::SustainabilityEndpointRules::RulesBlobSize) {}

void SustainabilityBuiltInParameters::SetFromClientConfiguration(const SustainabilityClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SustainabilityClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SustainabilityBuiltInParameters::SetFromClientConfiguration(const SustainabilityClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SustainabilityClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SustainabilityBuiltInParameters::SetServiceSpecificParameters(const SustainabilityClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Sustainability
}  // namespace Aws
