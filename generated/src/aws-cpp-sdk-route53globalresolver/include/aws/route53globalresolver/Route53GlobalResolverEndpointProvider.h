/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverClientConfiguration.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Endpoint {
using Route53GlobalResolverClientConfiguration = Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53GlobalResolverClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53GLOBALRESOLVER_API Route53GlobalResolverBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53GlobalResolverBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53GlobalResolverClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53GlobalResolverClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53GlobalResolverClientConfiguration& config);
};

/**
 * The type for the Route53GlobalResolver Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53GlobalResolverEndpointProviderBase =
    EndpointProviderBase<Route53GlobalResolverClientConfiguration, Route53GlobalResolverBuiltInParameters,
                         Route53GlobalResolverClientContextParameters>;

using Route53GlobalResolverDefaultEpProviderBase =
    BDDEndpointProvider<Route53GlobalResolverClientConfiguration, Route53GlobalResolverBuiltInParameters,
                        Route53GlobalResolverClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53GlobalResolver

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53GLOBALRESOLVER_EXTERN template class AWS_ROUTE53GLOBALRESOLVER_API
    Aws::Endpoint::EndpointProviderBase<Route53GlobalResolver::Endpoint::Route53GlobalResolverClientConfiguration,
                                        Route53GlobalResolver::Endpoint::Route53GlobalResolverBuiltInParameters,
                                        Route53GlobalResolver::Endpoint::Route53GlobalResolverClientContextParameters>;

AWS_ROUTE53GLOBALRESOLVER_EXTERN template class AWS_ROUTE53GLOBALRESOLVER_API
    Aws::Endpoint::BDDEndpointProvider<Route53GlobalResolver::Endpoint::Route53GlobalResolverClientConfiguration,
                                       Route53GlobalResolver::Endpoint::Route53GlobalResolverBuiltInParameters,
                                       Route53GlobalResolver::Endpoint::Route53GlobalResolverClientContextParameters>;
}  // namespace Endpoint

namespace Route53GlobalResolver {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53GLOBALRESOLVER_API Route53GlobalResolverEndpointProvider : public Route53GlobalResolverDefaultEpProviderBase {
 public:
  using Route53GlobalResolverResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53GlobalResolverEndpointProvider();

  ~Route53GlobalResolverEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53GlobalResolver
}  // namespace Aws
