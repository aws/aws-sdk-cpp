/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryClientConfiguration.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Endpoint {
using MarketplaceDiscoveryClientConfiguration = Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACEDISCOVERY_API MarketplaceDiscoveryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceDiscoveryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceDiscoveryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceDiscoveryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceDiscoveryClientConfiguration& config);
};

/**
 * The type for the MarketplaceDiscovery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceDiscoveryEndpointProviderBase =
    EndpointProviderBase<MarketplaceDiscoveryClientConfiguration, MarketplaceDiscoveryBuiltInParameters,
                         MarketplaceDiscoveryClientContextParameters>;

using MarketplaceDiscoveryDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceDiscoveryClientConfiguration, MarketplaceDiscoveryBuiltInParameters,
                        MarketplaceDiscoveryClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceDiscovery

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACEDISCOVERY_EXTERN template class AWS_MARKETPLACEDISCOVERY_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientConfiguration,
                                        MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryBuiltInParameters,
                                        MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientContextParameters>;

AWS_MARKETPLACEDISCOVERY_EXTERN template class AWS_MARKETPLACEDISCOVERY_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientConfiguration,
                                       MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryBuiltInParameters,
                                       MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceDiscovery {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEDISCOVERY_API MarketplaceDiscoveryEndpointProvider : public MarketplaceDiscoveryDefaultEpProviderBase {
 public:
  using MarketplaceDiscoveryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceDiscoveryEndpointProvider();

  ~MarketplaceDiscoveryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceDiscovery
}  // namespace Aws
