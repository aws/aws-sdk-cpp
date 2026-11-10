/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/Route53ResolverEndpointProvider.h>
#include <aws/route53resolver/internal/Route53ResolverEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53RESOLVER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53Resolver::Endpoint::Route53ResolverClientConfiguration,
                                                   Route53Resolver::Endpoint::Route53ResolverBuiltInParameters,
                                                   Route53Resolver::Endpoint::Route53ResolverClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53Resolver::Endpoint::Route53ResolverClientConfiguration,
                                                  Route53Resolver::Endpoint::Route53ResolverBuiltInParameters,
                                                  Route53Resolver::Endpoint::Route53ResolverClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53Resolver {
namespace Endpoint {
Route53ResolverEndpointProvider::Route53ResolverEndpointProvider()
    : Route53ResolverDefaultEpProviderBase(Aws::Route53Resolver::Route53ResolverEndpointRules::GetRulesBlob(),
                                           Aws::Route53Resolver::Route53ResolverEndpointRules::RulesBlobSize) {}

void Route53ResolverBuiltInParameters::SetFromClientConfiguration(const Route53ResolverClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53ResolverClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53ResolverBuiltInParameters::SetFromClientConfiguration(const Route53ResolverClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53ResolverClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53ResolverBuiltInParameters::SetServiceSpecificParameters(const Route53ResolverClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53Resolver
}  // namespace Aws
