/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/Route53EndpointProvider.h>
#include <aws/route53/internal/Route53EndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53::Endpoint::Route53ClientConfiguration,
                                                   Route53::Endpoint::Route53BuiltInParameters,
                                                   Route53::Endpoint::Route53ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53::Endpoint::Route53ClientConfiguration,
                                                  Route53::Endpoint::Route53BuiltInParameters,
                                                  Route53::Endpoint::Route53ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53 {
namespace Endpoint {
Route53EndpointProvider::Route53EndpointProvider()
    : Route53DefaultEpProviderBase(Aws::Route53::Route53EndpointRules::GetRulesBlob(), Aws::Route53::Route53EndpointRules::RulesBlobSize) {}

void Route53BuiltInParameters::SetFromClientConfiguration(const Route53ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53BuiltInParameters::SetFromClientConfiguration(const Route53ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53BuiltInParameters::SetServiceSpecificParameters(const Route53ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53
}  // namespace Aws
