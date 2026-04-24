/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/meteringmarketplace/MarketplaceMeteringClient.h>

#include <algorithm>

namespace Aws {
namespace MarketplaceMetering {

template <typename DerivedClient = MarketplaceMeteringClient>
class MarketplaceMeteringWaiter {
 public:
};
}  // namespace MarketplaceMetering
}  // namespace Aws
