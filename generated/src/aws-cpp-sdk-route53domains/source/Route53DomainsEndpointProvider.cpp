/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <aws/route53domains/internal/Route53DomainsEndpointRules.h>

namespace Aws {
#ifndef AWS_ROUTE53DOMAINS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Route53Domains::Endpoint::Route53DomainsClientConfiguration,
                                                   Route53Domains::Endpoint::Route53DomainsBuiltInParameters,
                                                   Route53Domains::Endpoint::Route53DomainsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Route53Domains::Endpoint::Route53DomainsClientConfiguration,
                                                  Route53Domains::Endpoint::Route53DomainsBuiltInParameters,
                                                  Route53Domains::Endpoint::Route53DomainsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Route53Domains {
namespace Endpoint {
Route53DomainsEndpointProvider::Route53DomainsEndpointProvider()
    : Route53DomainsDefaultEpProviderBase(Aws::Route53Domains::Route53DomainsEndpointRules::GetRulesBlob(),
                                          Aws::Route53Domains::Route53DomainsEndpointRules::RulesBlobSize) {}

void Route53DomainsBuiltInParameters::SetFromClientConfiguration(const Route53DomainsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Route53DomainsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Route53DomainsBuiltInParameters::SetFromClientConfiguration(const Route53DomainsClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Route53DomainsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Route53DomainsBuiltInParameters::SetServiceSpecificParameters(const Route53DomainsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Route53Domains
}  // namespace Aws
