/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClient.h>

#include <algorithm>

namespace Aws {
namespace MarketplaceEntitlementService {

template <typename DerivedClient = MarketplaceEntitlementServiceClient>
class MarketplaceEntitlementServiceWaiter {
 public:
};
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
