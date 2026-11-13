/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/SupportEndpointProvider.h>
#include <aws/support/internal/SupportEndpointRules.h>

namespace Aws {
#ifndef AWS_SUPPORT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Support::Endpoint::SupportClientConfiguration,
                                                   Support::Endpoint::SupportBuiltInParameters,
                                                   Support::Endpoint::SupportClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Support::Endpoint::SupportClientConfiguration,
                                                  Support::Endpoint::SupportBuiltInParameters,
                                                  Support::Endpoint::SupportClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Support {
namespace Endpoint {
SupportEndpointProvider::SupportEndpointProvider()
    : SupportDefaultEpProviderBase(Aws::Support::SupportEndpointRules::GetRulesBlob(), Aws::Support::SupportEndpointRules::RulesBlobSize) {}

void SupportBuiltInParameters::SetFromClientConfiguration(const SupportClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SupportClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SupportBuiltInParameters::SetFromClientConfiguration(const SupportClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SupportClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SupportBuiltInParameters::SetServiceSpecificParameters(const SupportClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Support
}  // namespace Aws
