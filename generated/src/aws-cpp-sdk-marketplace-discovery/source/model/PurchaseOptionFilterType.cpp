/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PurchaseOptionFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PurchaseOptionFilterTypeMapper {

static const int PRODUCT_ID_HASH = HashingUtils::HashString("PRODUCT_ID");
static const int SELLER_OF_RECORD_PROFILE_ID_HASH = HashingUtils::HashString("SELLER_OF_RECORD_PROFILE_ID");
static const int PURCHASE_OPTION_TYPE_HASH = HashingUtils::HashString("PURCHASE_OPTION_TYPE");
static const int VISIBILITY_SCOPE_HASH = HashingUtils::HashString("VISIBILITY_SCOPE");
static const int AVAILABILITY_STATUS_HASH = HashingUtils::HashString("AVAILABILITY_STATUS");

PurchaseOptionFilterType GetPurchaseOptionFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRODUCT_ID_HASH) {
    return PurchaseOptionFilterType::PRODUCT_ID;
  } else if (hashCode == SELLER_OF_RECORD_PROFILE_ID_HASH) {
    return PurchaseOptionFilterType::SELLER_OF_RECORD_PROFILE_ID;
  } else if (hashCode == PURCHASE_OPTION_TYPE_HASH) {
    return PurchaseOptionFilterType::PURCHASE_OPTION_TYPE;
  } else if (hashCode == VISIBILITY_SCOPE_HASH) {
    return PurchaseOptionFilterType::VISIBILITY_SCOPE;
  } else if (hashCode == AVAILABILITY_STATUS_HASH) {
    return PurchaseOptionFilterType::AVAILABILITY_STATUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurchaseOptionFilterType>(hashCode);
  }

  return PurchaseOptionFilterType::NOT_SET;
}

Aws::String GetNameForPurchaseOptionFilterType(PurchaseOptionFilterType enumValue) {
  switch (enumValue) {
    case PurchaseOptionFilterType::NOT_SET:
      return {};
    case PurchaseOptionFilterType::PRODUCT_ID:
      return "PRODUCT_ID";
    case PurchaseOptionFilterType::SELLER_OF_RECORD_PROFILE_ID:
      return "SELLER_OF_RECORD_PROFILE_ID";
    case PurchaseOptionFilterType::PURCHASE_OPTION_TYPE:
      return "PURCHASE_OPTION_TYPE";
    case PurchaseOptionFilterType::VISIBILITY_SCOPE:
      return "VISIBILITY_SCOPE";
    case PurchaseOptionFilterType::AVAILABILITY_STATUS:
      return "AVAILABILITY_STATUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurchaseOptionFilterTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
