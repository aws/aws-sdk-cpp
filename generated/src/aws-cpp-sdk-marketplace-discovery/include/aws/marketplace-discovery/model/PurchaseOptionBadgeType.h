/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class PurchaseOptionBadgeType { NOT_SET, PRIVATE_PRICING, FUTURE_DATED, REPLACEMENT_OFFER };

namespace PurchaseOptionBadgeTypeMapper {
AWS_MARKETPLACEDISCOVERY_API PurchaseOptionBadgeType GetPurchaseOptionBadgeTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForPurchaseOptionBadgeType(PurchaseOptionBadgeType value);
}  // namespace PurchaseOptionBadgeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
