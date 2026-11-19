/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/SFNEndpointProvider.h>
#include <aws/states/internal/SFNEndpointRules.h>

namespace Aws {
#ifndef AWS_SFN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SFN::Endpoint::SFNClientConfiguration, SFN::Endpoint::SFNBuiltInParameters,
                                                   SFN::Endpoint::SFNClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SFN::Endpoint::SFNClientConfiguration, SFN::Endpoint::SFNBuiltInParameters,
                                                  SFN::Endpoint::SFNClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SFN {
namespace Endpoint {
SFNEndpointProvider::SFNEndpointProvider()
    : SFNDefaultEpProviderBase(Aws::SFN::SFNEndpointRules::GetRulesBlob(), Aws::SFN::SFNEndpointRules::RulesBlobSize) {}

void SFNBuiltInParameters::SetFromClientConfiguration(const SFNClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SFNClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SFNBuiltInParameters::SetFromClientConfiguration(const SFNClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SFNClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SFNBuiltInParameters::SetServiceSpecificParameters(const SFNClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SFN
}  // namespace Aws
