/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PurchaseOptionBadgeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PurchaseOptionBadgeTypeMapper {

static const int PRIVATE_PRICING_HASH = HashingUtils::HashString("PRIVATE_PRICING");
static const int FUTURE_DATED_HASH = HashingUtils::HashString("FUTURE_DATED");
static const int REPLACEMENT_OFFER_HASH = HashingUtils::HashString("REPLACEMENT_OFFER");

PurchaseOptionBadgeType GetPurchaseOptionBadgeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIVATE_PRICING_HASH) {
    return PurchaseOptionBadgeType::PRIVATE_PRICING;
  } else if (hashCode == FUTURE_DATED_HASH) {
    return PurchaseOptionBadgeType::FUTURE_DATED;
  } else if (hashCode == REPLACEMENT_OFFER_HASH) {
    return PurchaseOptionBadgeType::REPLACEMENT_OFFER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurchaseOptionBadgeType>(hashCode);
  }

  return PurchaseOptionBadgeType::NOT_SET;
}

Aws::String GetNameForPurchaseOptionBadgeType(PurchaseOptionBadgeType enumValue) {
  switch (enumValue) {
    case PurchaseOptionBadgeType::NOT_SET:
      return {};
    case PurchaseOptionBadgeType::PRIVATE_PRICING:
      return "PRIVATE_PRICING";
    case PurchaseOptionBadgeType::FUTURE_DATED:
      return "FUTURE_DATED";
    case PurchaseOptionBadgeType::REPLACEMENT_OFFER:
      return "REPLACEMENT_OFFER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurchaseOptionBadgeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
