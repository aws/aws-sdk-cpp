/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>

#include <algorithm>

namespace Aws {
namespace MarketplaceCatalog {

template <typename DerivedClient = MarketplaceCatalogClient>
class MarketplaceCatalogWaiter {
 public:
};
}  // namespace MarketplaceCatalog
}  // namespace Aws
