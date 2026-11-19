/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/PIEndpointProvider.h>
#include <aws/pi/internal/PIEndpointRules.h>

namespace Aws {
#ifndef AWS_PI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PI::Endpoint::PIClientConfiguration, PI::Endpoint::PIBuiltInParameters,
                                                   PI::Endpoint::PIClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PI::Endpoint::PIClientConfiguration, PI::Endpoint::PIBuiltInParameters,
                                                  PI::Endpoint::PIClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PI {
namespace Endpoint {
PIEndpointProvider::PIEndpointProvider()
    : PIDefaultEpProviderBase(Aws::PI::PIEndpointRules::GetRulesBlob(), Aws::PI::PIEndpointRules::RulesBlobSize) {}

void PIBuiltInParameters::SetFromClientConfiguration(const PIClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PIClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PIBuiltInParameters::SetFromClientConfiguration(const PIClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PIClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PIBuiltInParameters::SetServiceSpecificParameters(const PIClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PI
}  // namespace Aws
