/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mpa/MPAEndpointRules.h>


namespace Aws
{
namespace MPA
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MPAClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MPAClientConfiguration = Aws::Client::GenericClientConfiguration;
using MPABuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MPA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MPAEndpointProviderBase =
    EndpointProviderBase<MPAClientConfiguration, MPABuiltInParameters, MPAClientContextParameters>;

using MPADefaultEpProviderBase =
    DefaultEndpointProvider<MPAClientConfiguration, MPABuiltInParameters, MPAClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MPA_API MPAEndpointProvider : public MPADefaultEpProviderBase
{
public:
    using MPAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MPAEndpointProvider()
      : MPADefaultEpProviderBase(Aws::MPA::MPAEndpointRules::GetRulesBlob(), Aws::MPA::MPAEndpointRules::RulesBlobSize)
    {}

    ~MPAEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MPA
} // namespace Aws
