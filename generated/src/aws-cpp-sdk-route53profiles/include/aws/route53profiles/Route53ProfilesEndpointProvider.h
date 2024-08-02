/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53profiles/Route53ProfilesEndpointRules.h>


namespace Aws
{
namespace Route53Profiles
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53ProfilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53ProfilesClientConfiguration = Aws::Client::GenericClientConfiguration;
using Route53ProfilesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53Profiles Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53ProfilesEndpointProviderBase =
    EndpointProviderBase<Route53ProfilesClientConfiguration, Route53ProfilesBuiltInParameters, Route53ProfilesClientContextParameters>;

using Route53ProfilesDefaultEpProviderBase =
    DefaultEndpointProvider<Route53ProfilesClientConfiguration, Route53ProfilesBuiltInParameters, Route53ProfilesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53PROFILES_API Route53ProfilesEndpointProvider : public Route53ProfilesDefaultEpProviderBase
{
public:
    using Route53ProfilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53ProfilesEndpointProvider()
      : Route53ProfilesDefaultEpProviderBase(Aws::Route53Profiles::Route53ProfilesEndpointRules::GetRulesBlob(), Aws::Route53Profiles::Route53ProfilesEndpointRules::RulesBlobSize)
    {}

    ~Route53ProfilesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53Profiles
} // namespace Aws
