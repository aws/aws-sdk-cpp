/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wickr/WickrEndpointProvider.h>
#include <aws/wickr/internal/WickrEndpointRules.h>

namespace Aws {
#ifndef AWS_WICKR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Wickr::Endpoint::WickrClientConfiguration, Wickr::Endpoint::WickrBuiltInParameters,
                                                   Wickr::Endpoint::WickrClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Wickr::Endpoint::WickrClientConfiguration, Wickr::Endpoint::WickrBuiltInParameters,
                                                  Wickr::Endpoint::WickrClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Wickr {
namespace Endpoint {
WickrEndpointProvider::WickrEndpointProvider()
    : WickrDefaultEpProviderBase(Aws::Wickr::WickrEndpointRules::GetRulesBlob(), Aws::Wickr::WickrEndpointRules::RulesBlobSize) {}

void WickrBuiltInParameters::SetFromClientConfiguration(const WickrClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WickrClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WickrBuiltInParameters::SetFromClientConfiguration(const WickrClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WickrClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WickrBuiltInParameters::SetServiceSpecificParameters(const WickrClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Wickr
}  // namespace Aws
