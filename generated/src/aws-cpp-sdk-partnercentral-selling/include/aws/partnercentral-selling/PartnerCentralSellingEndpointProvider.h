/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/partnercentral-selling/PartnerCentralSellingEndpointRules.h>


namespace Aws
{
namespace PartnerCentralSelling
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PartnerCentralSellingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralSellingClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralSellingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralSelling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralSellingEndpointProviderBase =
    EndpointProviderBase<PartnerCentralSellingClientConfiguration, PartnerCentralSellingBuiltInParameters, PartnerCentralSellingClientContextParameters>;

using PartnerCentralSellingDefaultEpProviderBase =
    DefaultEndpointProvider<PartnerCentralSellingClientConfiguration, PartnerCentralSellingBuiltInParameters, PartnerCentralSellingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALSELLING_API PartnerCentralSellingEndpointProvider : public PartnerCentralSellingDefaultEpProviderBase
{
public:
    using PartnerCentralSellingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PartnerCentralSellingEndpointProvider()
      : PartnerCentralSellingDefaultEpProviderBase(Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::GetRulesBlob(), Aws::PartnerCentralSelling::PartnerCentralSellingEndpointRules::RulesBlobSize)
    {}

    ~PartnerCentralSellingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PartnerCentralSelling
} // namespace Aws
