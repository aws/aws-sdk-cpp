/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>

#include <algorithm>

namespace Aws {
namespace MarketplaceCommerceAnalytics {

template <typename DerivedClient = MarketplaceCommerceAnalyticsClient>
class MarketplaceCommerceAnalyticsWaiter {
 public:
};
}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
