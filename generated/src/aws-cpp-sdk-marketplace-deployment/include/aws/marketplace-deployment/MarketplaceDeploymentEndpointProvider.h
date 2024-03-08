/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointRules.h>


namespace Aws
{
namespace MarketplaceDeployment
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceDeploymentClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceDeploymentClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MarketplaceDeploymentBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceDeployment Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceDeploymentEndpointProviderBase =
    EndpointProviderBase<MarketplaceDeploymentClientConfiguration, MarketplaceDeploymentBuiltInParameters, MarketplaceDeploymentClientContextParameters>;

using MarketplaceDeploymentDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceDeploymentClientConfiguration, MarketplaceDeploymentBuiltInParameters, MarketplaceDeploymentClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEDEPLOYMENT_API MarketplaceDeploymentEndpointProvider : public MarketplaceDeploymentDefaultEpProviderBase
{
public:
    using MarketplaceDeploymentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceDeploymentEndpointProvider()
      : MarketplaceDeploymentDefaultEpProviderBase(Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::GetRulesBlob(), Aws::MarketplaceDeployment::MarketplaceDeploymentEndpointRules::RulesBlobSize)
    {}

    ~MarketplaceDeploymentEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceDeployment
} // namespace Aws
