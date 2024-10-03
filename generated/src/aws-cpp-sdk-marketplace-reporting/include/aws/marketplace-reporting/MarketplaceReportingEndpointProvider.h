/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplace-reporting/MarketplaceReportingEndpointRules.h>


namespace Aws
{
namespace MarketplaceReporting
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceReportingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceReportingClientConfiguration = Aws::Client::GenericClientConfiguration;
using MarketplaceReportingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceReporting Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceReportingEndpointProviderBase =
    EndpointProviderBase<MarketplaceReportingClientConfiguration, MarketplaceReportingBuiltInParameters, MarketplaceReportingClientContextParameters>;

using MarketplaceReportingDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceReportingClientConfiguration, MarketplaceReportingBuiltInParameters, MarketplaceReportingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEREPORTING_API MarketplaceReportingEndpointProvider : public MarketplaceReportingDefaultEpProviderBase
{
public:
    using MarketplaceReportingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceReportingEndpointProvider()
      : MarketplaceReportingDefaultEpProviderBase(Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::GetRulesBlob(), Aws::MarketplaceReporting::MarketplaceReportingEndpointRules::RulesBlobSize)
    {}

    ~MarketplaceReportingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceReporting
} // namespace Aws
