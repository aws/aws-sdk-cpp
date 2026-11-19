/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/PinpointEndpointProvider.h>
#include <aws/pinpoint/internal/PinpointEndpointRules.h>

namespace Aws {
#ifndef AWS_PINPOINT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Pinpoint::Endpoint::PinpointClientConfiguration,
                                                   Pinpoint::Endpoint::PinpointBuiltInParameters,
                                                   Pinpoint::Endpoint::PinpointClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Pinpoint::Endpoint::PinpointClientConfiguration,
                                                  Pinpoint::Endpoint::PinpointBuiltInParameters,
                                                  Pinpoint::Endpoint::PinpointClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Pinpoint {
namespace Endpoint {
PinpointEndpointProvider::PinpointEndpointProvider()
    : PinpointDefaultEpProviderBase(Aws::Pinpoint::PinpointEndpointRules::GetRulesBlob(),
                                    Aws::Pinpoint::PinpointEndpointRules::RulesBlobSize) {}

void PinpointBuiltInParameters::SetFromClientConfiguration(const PinpointClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PinpointClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PinpointBuiltInParameters::SetFromClientConfiguration(const PinpointClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PinpointClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PinpointBuiltInParameters::SetServiceSpecificParameters(const PinpointClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Pinpoint
}  // namespace Aws
