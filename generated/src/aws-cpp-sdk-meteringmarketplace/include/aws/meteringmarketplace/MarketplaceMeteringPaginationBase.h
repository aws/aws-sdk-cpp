/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace MarketplaceMetering {

class MarketplaceMeteringClient;

template <typename DerivedClient>
class MarketplaceMeteringPaginationBase {
 public:
  virtual ~MarketplaceMeteringPaginationBase() = default;
};
}  // namespace MarketplaceMetering
}  // namespace Aws
