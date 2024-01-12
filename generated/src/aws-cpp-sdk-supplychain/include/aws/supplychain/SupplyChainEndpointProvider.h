/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/supplychain/SupplyChainEndpointRules.h>


namespace Aws
{
namespace SupplyChain
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SupplyChainClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SupplyChainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SupplyChainBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SupplyChain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupplyChainEndpointProviderBase =
    EndpointProviderBase<SupplyChainClientConfiguration, SupplyChainBuiltInParameters, SupplyChainClientContextParameters>;

using SupplyChainDefaultEpProviderBase =
    DefaultEndpointProvider<SupplyChainClientConfiguration, SupplyChainBuiltInParameters, SupplyChainClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPLYCHAIN_API SupplyChainEndpointProvider : public SupplyChainDefaultEpProviderBase
{
public:
    using SupplyChainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SupplyChainEndpointProvider()
      : SupplyChainDefaultEpProviderBase(Aws::SupplyChain::SupplyChainEndpointRules::GetRulesBlob(), Aws::SupplyChain::SupplyChainEndpointRules::RulesBlobSize)
    {}

    ~SupplyChainEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SupplyChain
} // namespace Aws
