/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareAllocationSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace MarketplaceRevenueShareAllocationSortFieldMapper {

static const int EffectiveFrom_HASH = HashingUtils::HashString("EffectiveFrom");

MarketplaceRevenueShareAllocationSortField GetMarketplaceRevenueShareAllocationSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EffectiveFrom_HASH) {
    return MarketplaceRevenueShareAllocationSortField::EffectiveFrom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MarketplaceRevenueShareAllocationSortField>(hashCode);
  }

  return MarketplaceRevenueShareAllocationSortField::NOT_SET;
}

Aws::String GetNameForMarketplaceRevenueShareAllocationSortField(MarketplaceRevenueShareAllocationSortField enumValue) {
  switch (enumValue) {
    case MarketplaceRevenueShareAllocationSortField::NOT_SET:
      return {};
    case MarketplaceRevenueShareAllocationSortField::EffectiveFrom:
      return "EffectiveFrom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MarketplaceRevenueShareAllocationSortFieldMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
