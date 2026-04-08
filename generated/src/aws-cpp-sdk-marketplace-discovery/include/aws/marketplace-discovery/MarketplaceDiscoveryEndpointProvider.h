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
#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointRules.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration;
using MarketplaceDiscoveryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceDiscovery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceDiscoveryEndpointProviderBase =
    EndpointProviderBase<MarketplaceDiscoveryClientConfiguration, MarketplaceDiscoveryBuiltInParameters,
                         MarketplaceDiscoveryClientContextParameters>;

using MarketplaceDiscoveryDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceDiscoveryClientConfiguration, MarketplaceDiscoveryBuiltInParameters,
                            MarketplaceDiscoveryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEDISCOVERY_API MarketplaceDiscoveryEndpointProvider : public MarketplaceDiscoveryDefaultEpProviderBase {
 public:
  using MarketplaceDiscoveryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceDiscoveryEndpointProvider()
      : MarketplaceDiscoveryDefaultEpProviderBase(Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::GetRulesBlob(),
                                                  Aws::MarketplaceDiscovery::MarketplaceDiscoveryEndpointRules::RulesBlobSize) {}

  ~MarketplaceDiscoveryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceDiscovery
}  // namespace Aws
