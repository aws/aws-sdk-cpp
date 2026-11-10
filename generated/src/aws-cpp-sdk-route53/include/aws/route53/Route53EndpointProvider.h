/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53ClientConfiguration.h>
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws {
namespace Route53 {
namespace Endpoint {
using Route53ClientConfiguration = Aws::Route53::Route53ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53_API Route53BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53ClientConfiguration& config);
};

/**
 * The type for the Route53 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53EndpointProviderBase =
    EndpointProviderBase<Route53ClientConfiguration, Route53BuiltInParameters, Route53ClientContextParameters>;

using Route53DefaultEpProviderBase =
    BDDEndpointProvider<Route53ClientConfiguration, Route53BuiltInParameters, Route53ClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53_EXTERN template class AWS_ROUTE53_API
    Aws::Endpoint::EndpointProviderBase<Route53::Endpoint::Route53ClientConfiguration, Route53::Endpoint::Route53BuiltInParameters,
                                        Route53::Endpoint::Route53ClientContextParameters>;

AWS_ROUTE53_EXTERN template class AWS_ROUTE53_API
    Aws::Endpoint::BDDEndpointProvider<Route53::Endpoint::Route53ClientConfiguration, Route53::Endpoint::Route53BuiltInParameters,
                                       Route53::Endpoint::Route53ClientContextParameters>;
}  // namespace Endpoint

namespace Route53 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53_API Route53EndpointProvider : public Route53DefaultEpProviderBase {
 public:
  using Route53ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53EndpointProvider();

  ~Route53EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53
}  // namespace Aws
