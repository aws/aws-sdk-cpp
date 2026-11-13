/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <aws/marketplacecommerceanalytics/internal/MarketplaceCommerceAnalyticsEndpointRules.h>

namespace Aws {
#ifndef AWS_MARKETPLACECOMMERCEANALYTICS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientConfiguration,
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsBuiltInParameters,
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientConfiguration,
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsBuiltInParameters,
    MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MarketplaceCommerceAnalytics {
namespace Endpoint {
MarketplaceCommerceAnalyticsEndpointProvider::MarketplaceCommerceAnalyticsEndpointProvider()
    : MarketplaceCommerceAnalyticsDefaultEpProviderBase(
          Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::GetRulesBlob(),
          Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::RulesBlobSize) {}

void MarketplaceCommerceAnalyticsBuiltInParameters::SetFromClientConfiguration(
    const MarketplaceCommerceAnalyticsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MarketplaceCommerceAnalyticsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MarketplaceCommerceAnalyticsBuiltInParameters::SetFromClientConfiguration(
    const MarketplaceCommerceAnalyticsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MarketplaceCommerceAnalyticsClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void MarketplaceCommerceAnalyticsBuiltInParameters::SetServiceSpecificParameters(
    const MarketplaceCommerceAnalyticsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
