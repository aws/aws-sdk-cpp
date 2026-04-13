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
enum class PurchaseOptionType { NOT_SET, OFFER, OFFERSET };

namespace PurchaseOptionTypeMapper {
AWS_MARKETPLACEDISCOVERY_API PurchaseOptionType GetPurchaseOptionTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForPurchaseOptionType(PurchaseOptionType value);
}  // namespace PurchaseOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
