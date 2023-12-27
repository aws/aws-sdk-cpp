/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/neptunedata/NeptunedataEndpointRules.h>


namespace Aws
{
namespace neptunedata
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NeptunedataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NeptunedataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NeptunedataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the neptunedata Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NeptunedataEndpointProviderBase =
    EndpointProviderBase<NeptunedataClientConfiguration, NeptunedataBuiltInParameters, NeptunedataClientContextParameters>;

using NeptunedataDefaultEpProviderBase =
    DefaultEndpointProvider<NeptunedataClientConfiguration, NeptunedataBuiltInParameters, NeptunedataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NEPTUNEDATA_API NeptunedataEndpointProvider : public NeptunedataDefaultEpProviderBase
{
public:
    using NeptunedataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NeptunedataEndpointProvider()
      : NeptunedataDefaultEpProviderBase(Aws::neptunedata::NeptunedataEndpointRules::GetRulesBlob(), Aws::neptunedata::NeptunedataEndpointRules::RulesBlobSize)
    {}

    ~NeptunedataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace neptunedata
} // namespace Aws
