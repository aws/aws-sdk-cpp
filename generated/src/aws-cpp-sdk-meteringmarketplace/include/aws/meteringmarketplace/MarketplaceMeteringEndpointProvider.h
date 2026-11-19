/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/MarketplaceMeteringClientConfiguration.h>
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>

namespace Aws {
namespace MarketplaceMetering {
namespace Endpoint {
using MarketplaceMeteringClientConfiguration = Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceMeteringClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACEMETERING_API MarketplaceMeteringBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceMeteringBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceMeteringClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceMeteringClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceMeteringClientConfiguration& config);
};

/**
 * The type for the MarketplaceMetering Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceMeteringEndpointProviderBase =
    EndpointProviderBase<MarketplaceMeteringClientConfiguration, MarketplaceMeteringBuiltInParameters,
                         MarketplaceMeteringClientContextParameters>;

using MarketplaceMeteringDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceMeteringClientConfiguration, MarketplaceMeteringBuiltInParameters,
                        MarketplaceMeteringClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceMetering

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACEMETERING_EXTERN template class AWS_MARKETPLACEMETERING_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceMetering::Endpoint::MarketplaceMeteringClientConfiguration,
                                        MarketplaceMetering::Endpoint::MarketplaceMeteringBuiltInParameters,
                                        MarketplaceMetering::Endpoint::MarketplaceMeteringClientContextParameters>;

AWS_MARKETPLACEMETERING_EXTERN template class AWS_MARKETPLACEMETERING_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceMetering::Endpoint::MarketplaceMeteringClientConfiguration,
                                       MarketplaceMetering::Endpoint::MarketplaceMeteringBuiltInParameters,
                                       MarketplaceMetering::Endpoint::MarketplaceMeteringClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceMetering {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEMETERING_API MarketplaceMeteringEndpointProvider : public MarketplaceMeteringDefaultEpProviderBase {
 public:
  using MarketplaceMeteringResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceMeteringEndpointProvider();

  ~MarketplaceMeteringEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceMetering
}  // namespace Aws
