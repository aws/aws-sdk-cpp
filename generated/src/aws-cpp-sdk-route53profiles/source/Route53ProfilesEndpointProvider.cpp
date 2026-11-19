/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <aws/route53profiles/internal/Route53ProfilesEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53PROFILES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53Profiles::Endpoint::Route53ProfilesClientConfiguration,
                                                   Route53Profiles::Endpoint::Route53ProfilesBuiltInParameters,
                                                   Route53Profiles::Endpoint::Route53ProfilesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53Profiles::Endpoint::Route53ProfilesClientConfiguration,
                                                  Route53Profiles::Endpoint::Route53ProfilesBuiltInParameters,
                                                  Route53Profiles::Endpoint::Route53ProfilesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53Profiles {
namespace Endpoint {
Route53ProfilesEndpointProvider::Route53ProfilesEndpointProvider()
    : Route53ProfilesDefaultEpProviderBase(Aws::Route53Profiles::Route53ProfilesEndpointRules::GetRulesBlob(),
                                           Aws::Route53Profiles::Route53ProfilesEndpointRules::RulesBlobSize) {}

void Route53ProfilesBuiltInParameters::SetFromClientConfiguration(const Route53ProfilesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53ProfilesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53ProfilesBuiltInParameters::SetFromClientConfiguration(const Route53ProfilesClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53ProfilesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53ProfilesBuiltInParameters::SetServiceSpecificParameters(const Route53ProfilesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53Profiles
}  // namespace Aws
