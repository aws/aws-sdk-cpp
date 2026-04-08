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
enum class PurchaseOptionFilterType {
  NOT_SET,
  PRODUCT_ID,
  SELLER_OF_RECORD_PROFILE_ID,
  PURCHASE_OPTION_TYPE,
  VISIBILITY_SCOPE,
  AVAILABILITY_STATUS
};

namespace PurchaseOptionFilterTypeMapper {
AWS_MARKETPLACEDISCOVERY_API PurchaseOptionFilterType GetPurchaseOptionFilterTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForPurchaseOptionFilterType(PurchaseOptionFilterType value);
}  // namespace PurchaseOptionFilterTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
