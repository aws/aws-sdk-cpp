/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/PinpointEmailEndpointProvider.h>
#include <aws/pinpoint-email/internal/PinpointEmailEndpointRules.h>

namespace Aws {
#ifndef AWS_PINPOINTEMAIL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PinpointEmail::Endpoint::PinpointEmailClientConfiguration,
                                                   PinpointEmail::Endpoint::PinpointEmailBuiltInParameters,
                                                   PinpointEmail::Endpoint::PinpointEmailClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PinpointEmail::Endpoint::PinpointEmailClientConfiguration,
                                                  PinpointEmail::Endpoint::PinpointEmailBuiltInParameters,
                                                  PinpointEmail::Endpoint::PinpointEmailClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PinpointEmail {
namespace Endpoint {
PinpointEmailEndpointProvider::PinpointEmailEndpointProvider()
    : PinpointEmailDefaultEpProviderBase(Aws::PinpointEmail::PinpointEmailEndpointRules::GetRulesBlob(),
                                         Aws::PinpointEmail::PinpointEmailEndpointRules::RulesBlobSize) {}

void PinpointEmailBuiltInParameters::SetFromClientConfiguration(const PinpointEmailClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PinpointEmailClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PinpointEmailBuiltInParameters::SetFromClientConfiguration(const PinpointEmailClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PinpointEmailClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PinpointEmailBuiltInParameters::SetServiceSpecificParameters(const PinpointEmailClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PinpointEmail
}  // namespace Aws
