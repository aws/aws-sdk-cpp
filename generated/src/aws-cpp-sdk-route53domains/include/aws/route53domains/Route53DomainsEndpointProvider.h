/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/Route53DomainsClientConfiguration.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>

namespace Aws {
namespace Route53Domains {
namespace Endpoint {
using Route53DomainsClientConfiguration = Aws::Route53Domains::Route53DomainsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53DomainsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53DOMAINS_API Route53DomainsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53DomainsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53DomainsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53DomainsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53DomainsClientConfiguration& config);
};

/**
 * The type for the Route53Domains Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53DomainsEndpointProviderBase =
    EndpointProviderBase<Route53DomainsClientConfiguration, Route53DomainsBuiltInParameters, Route53DomainsClientContextParameters>;

using Route53DomainsDefaultEpProviderBase =
    BDDEndpointProvider<Route53DomainsClientConfiguration, Route53DomainsBuiltInParameters, Route53DomainsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53Domains

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53DOMAINS_EXTERN template class AWS_ROUTE53DOMAINS_API Aws::Endpoint::EndpointProviderBase<
    Route53Domains::Endpoint::Route53DomainsClientConfiguration, Route53Domains::Endpoint::Route53DomainsBuiltInParameters,
    Route53Domains::Endpoint::Route53DomainsClientContextParameters>;

AWS_ROUTE53DOMAINS_EXTERN template class AWS_ROUTE53DOMAINS_API Aws::Endpoint::BDDEndpointProvider<
    Route53Domains::Endpoint::Route53DomainsClientConfiguration, Route53Domains::Endpoint::Route53DomainsBuiltInParameters,
    Route53Domains::Endpoint::Route53DomainsClientContextParameters>;
}  // namespace Endpoint

namespace Route53Domains {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53DOMAINS_API Route53DomainsEndpointProvider : public Route53DomainsDefaultEpProviderBase {
 public:
  using Route53DomainsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53DomainsEndpointProvider();

  ~Route53DomainsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53Domains
}  // namespace Aws
