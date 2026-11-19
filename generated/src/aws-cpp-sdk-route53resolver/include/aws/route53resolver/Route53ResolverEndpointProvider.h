/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53ResolverClientConfiguration.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

namespace Aws {
namespace Route53Resolver {
namespace Endpoint {
using Route53ResolverClientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53ResolverClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53RESOLVER_API Route53ResolverBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53ResolverBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53ResolverClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53ResolverClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53ResolverClientConfiguration& config);
};

/**
 * The type for the Route53Resolver Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53ResolverEndpointProviderBase =
    EndpointProviderBase<Route53ResolverClientConfiguration, Route53ResolverBuiltInParameters, Route53ResolverClientContextParameters>;

using Route53ResolverDefaultEpProviderBase =
    BDDEndpointProvider<Route53ResolverClientConfiguration, Route53ResolverBuiltInParameters, Route53ResolverClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53Resolver

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53RESOLVER_EXTERN template class AWS_ROUTE53RESOLVER_API Aws::Endpoint::EndpointProviderBase<
    Route53Resolver::Endpoint::Route53ResolverClientConfiguration, Route53Resolver::Endpoint::Route53ResolverBuiltInParameters,
    Route53Resolver::Endpoint::Route53ResolverClientContextParameters>;

AWS_ROUTE53RESOLVER_EXTERN template class AWS_ROUTE53RESOLVER_API Aws::Endpoint::BDDEndpointProvider<
    Route53Resolver::Endpoint::Route53ResolverClientConfiguration, Route53Resolver::Endpoint::Route53ResolverBuiltInParameters,
    Route53Resolver::Endpoint::Route53ResolverClientContextParameters>;
}  // namespace Endpoint

namespace Route53Resolver {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RESOLVER_API Route53ResolverEndpointProvider : public Route53ResolverDefaultEpProviderBase {
 public:
  using Route53ResolverResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53ResolverEndpointProvider();

  ~Route53ResolverEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53Resolver
}  // namespace Aws
