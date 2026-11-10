/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/Route53ProfilesClientConfiguration.h>
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>

namespace Aws {
namespace Route53Profiles {
namespace Endpoint {
using Route53ProfilesClientConfiguration = Aws::Route53Profiles::Route53ProfilesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53ProfilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53PROFILES_API Route53ProfilesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53ProfilesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53ProfilesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53ProfilesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53ProfilesClientConfiguration& config);
};

/**
 * The type for the Route53Profiles Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53ProfilesEndpointProviderBase =
    EndpointProviderBase<Route53ProfilesClientConfiguration, Route53ProfilesBuiltInParameters, Route53ProfilesClientContextParameters>;

using Route53ProfilesDefaultEpProviderBase =
    BDDEndpointProvider<Route53ProfilesClientConfiguration, Route53ProfilesBuiltInParameters, Route53ProfilesClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53Profiles

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53PROFILES_EXTERN template class AWS_ROUTE53PROFILES_API Aws::Endpoint::EndpointProviderBase<
    Route53Profiles::Endpoint::Route53ProfilesClientConfiguration, Route53Profiles::Endpoint::Route53ProfilesBuiltInParameters,
    Route53Profiles::Endpoint::Route53ProfilesClientContextParameters>;

AWS_ROUTE53PROFILES_EXTERN template class AWS_ROUTE53PROFILES_API Aws::Endpoint::BDDEndpointProvider<
    Route53Profiles::Endpoint::Route53ProfilesClientConfiguration, Route53Profiles::Endpoint::Route53ProfilesBuiltInParameters,
    Route53Profiles::Endpoint::Route53ProfilesClientContextParameters>;
}  // namespace Endpoint

namespace Route53Profiles {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53PROFILES_API Route53ProfilesEndpointProvider : public Route53ProfilesDefaultEpProviderBase {
 public:
  using Route53ProfilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53ProfilesEndpointProvider();

  ~Route53ProfilesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53Profiles
}  // namespace Aws
