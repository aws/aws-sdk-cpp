/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClientConfiguration.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>

namespace Aws {
namespace MarketplaceCommerceAnalytics {
namespace Endpoint {
using MarketplaceCommerceAnalyticsClientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MarketplaceCommerceAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MarketplaceCommerceAnalyticsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MarketplaceCommerceAnalyticsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MarketplaceCommerceAnalyticsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MarketplaceCommerceAnalyticsClientConfiguration& config);
};

/**
 * The type for the MarketplaceCommerceAnalytics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceCommerceAnalyticsEndpointProviderBase =
    EndpointProviderBase<MarketplaceCommerceAnalyticsClientConfiguration, MarketplaceCommerceAnalyticsBuiltInParameters,
                         MarketplaceCommerceAnalyticsClientContextParameters>;

using MarketplaceCommerceAnalyticsDefaultEpProviderBase =
    BDDEndpointProvider<MarketplaceCommerceAnalyticsClientConfiguration, MarketplaceCommerceAnalyticsBuiltInParameters,
                        MarketplaceCommerceAnalyticsClientContextParameters>;

}  // namespace Endpoint
}  // namespace MarketplaceCommerceAnalytics

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MARKETPLACECOMMERCEANALYTICS_EXTERN template class AWS_MARKETPLACECOMMERCEANALYTICS_API
    Aws::Endpoint::EndpointProviderBase<MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientConfiguration,
                                        MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsBuiltInParameters,
                                        MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientContextParameters>;

AWS_MARKETPLACECOMMERCEANALYTICS_EXTERN template class AWS_MARKETPLACECOMMERCEANALYTICS_API
    Aws::Endpoint::BDDEndpointProvider<MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientConfiguration,
                                       MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsBuiltInParameters,
                                       MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientContextParameters>;
}  // namespace Endpoint

namespace MarketplaceCommerceAnalytics {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsEndpointProvider
    : public MarketplaceCommerceAnalyticsDefaultEpProviderBase {
 public:
  using MarketplaceCommerceAnalyticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MarketplaceCommerceAnalyticsEndpointProvider();

  ~MarketplaceCommerceAnalyticsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
