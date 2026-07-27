/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <aws/marketplacecommerceanalytics/internal/MarketplaceCommerceAnalyticsEndpointRules.h>

namespace Aws {
namespace MarketplaceCommerceAnalytics {
namespace Endpoint {
MarketplaceCommerceAnalyticsEndpointProvider::MarketplaceCommerceAnalyticsEndpointProvider()
    : MarketplaceCommerceAnalyticsDefaultEpProviderBase(
          Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::GetRulesBlob(),
          Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
