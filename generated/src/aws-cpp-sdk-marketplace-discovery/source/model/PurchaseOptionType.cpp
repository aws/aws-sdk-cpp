/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/PurchaseOptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace PurchaseOptionTypeMapper {

static const int OFFER_HASH = HashingUtils::HashString("OFFER");
static const int OFFERSET_HASH = HashingUtils::HashString("OFFERSET");

PurchaseOptionType GetPurchaseOptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OFFER_HASH) {
    return PurchaseOptionType::OFFER;
  } else if (hashCode == OFFERSET_HASH) {
    return PurchaseOptionType::OFFERSET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurchaseOptionType>(hashCode);
  }

  return PurchaseOptionType::NOT_SET;
}

Aws::String GetNameForPurchaseOptionType(PurchaseOptionType enumValue) {
  switch (enumValue) {
    case PurchaseOptionType::NOT_SET:
      return {};
    case PurchaseOptionType::OFFER:
      return "OFFER";
    case PurchaseOptionType::OFFERSET:
      return "OFFERSET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurchaseOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
