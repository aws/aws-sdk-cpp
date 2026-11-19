/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53globalresolver/Route53GlobalResolverEndpointProvider.h>
#include <aws/route53globalresolver/internal/Route53GlobalResolverEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53GLOBALRESOLVER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53GlobalResolver::Endpoint::Route53GlobalResolverClientConfiguration,
                                                   Route53GlobalResolver::Endpoint::Route53GlobalResolverBuiltInParameters,
                                                   Route53GlobalResolver::Endpoint::Route53GlobalResolverClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53GlobalResolver::Endpoint::Route53GlobalResolverClientConfiguration,
                                                  Route53GlobalResolver::Endpoint::Route53GlobalResolverBuiltInParameters,
                                                  Route53GlobalResolver::Endpoint::Route53GlobalResolverClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53GlobalResolver {
namespace Endpoint {
Route53GlobalResolverEndpointProvider::Route53GlobalResolverEndpointProvider()
    : Route53GlobalResolverDefaultEpProviderBase(Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::GetRulesBlob(),
                                                 Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::RulesBlobSize) {}

void Route53GlobalResolverBuiltInParameters::SetFromClientConfiguration(const Route53GlobalResolverClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53GlobalResolverClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53GlobalResolverBuiltInParameters::SetFromClientConfiguration(const Route53GlobalResolverClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53GlobalResolverClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53GlobalResolverBuiltInParameters::SetServiceSpecificParameters(const Route53GlobalResolverClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53GlobalResolver
}  // namespace Aws
