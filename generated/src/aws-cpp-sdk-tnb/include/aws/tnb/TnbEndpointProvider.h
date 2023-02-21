/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/tnb/TnbEndpointRules.h>


namespace Aws
{
namespace tnb
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TnbClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TnbClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using TnbBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the tnb Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TnbEndpointProviderBase =
    EndpointProviderBase<TnbClientConfiguration, TnbBuiltInParameters, TnbClientContextParameters>;

using TnbDefaultEpProviderBase =
    DefaultEndpointProvider<TnbClientConfiguration, TnbBuiltInParameters, TnbClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TNB_API TnbEndpointProvider : public TnbDefaultEpProviderBase
{
public:
    using TnbResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TnbEndpointProvider()
      : TnbDefaultEpProviderBase(Aws::tnb::TnbEndpointRules::GetRulesBlob(), Aws::tnb::TnbEndpointRules::RulesBlobSize)
    {}

    ~TnbEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace tnb
} // namespace Aws
