/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsClient;

template <typename DerivedClient>
class MarketplaceCommerceAnalyticsPaginationBase {
 public:
  virtual ~MarketplaceCommerceAnalyticsPaginationBase() = default;
};
}  // namespace MarketplaceCommerceAnalytics
}  // namespace Aws
