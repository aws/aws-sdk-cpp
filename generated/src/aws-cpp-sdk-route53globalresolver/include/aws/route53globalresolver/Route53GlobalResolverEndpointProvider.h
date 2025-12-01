/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverEndpointRules.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53GlobalResolverClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53GlobalResolverClientConfiguration = Aws::Client::GenericClientConfiguration;
using Route53GlobalResolverBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53GlobalResolver Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53GlobalResolverEndpointProviderBase =
    EndpointProviderBase<Route53GlobalResolverClientConfiguration, Route53GlobalResolverBuiltInParameters,
                         Route53GlobalResolverClientContextParameters>;

using Route53GlobalResolverDefaultEpProviderBase =
    DefaultEndpointProvider<Route53GlobalResolverClientConfiguration, Route53GlobalResolverBuiltInParameters,
                            Route53GlobalResolverClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53GLOBALRESOLVER_API Route53GlobalResolverEndpointProvider : public Route53GlobalResolverDefaultEpProviderBase {
 public:
  using Route53GlobalResolverResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53GlobalResolverEndpointProvider()
      : Route53GlobalResolverDefaultEpProviderBase(Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::GetRulesBlob(),
                                                   Aws::Route53GlobalResolver::Route53GlobalResolverEndpointRules::RulesBlobSize) {}

  ~Route53GlobalResolverEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53GlobalResolver
}  // namespace Aws
