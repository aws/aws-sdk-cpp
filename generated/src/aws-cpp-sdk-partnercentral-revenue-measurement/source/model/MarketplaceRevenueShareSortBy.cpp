/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace MarketplaceRevenueShareSortByMapper {

static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");

MarketplaceRevenueShareSortBy GetMarketplaceRevenueShareSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LastModifiedDate_HASH) {
    return MarketplaceRevenueShareSortBy::LastModifiedDate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MarketplaceRevenueShareSortBy>(hashCode);
  }

  return MarketplaceRevenueShareSortBy::NOT_SET;
}

Aws::String GetNameForMarketplaceRevenueShareSortBy(MarketplaceRevenueShareSortBy enumValue) {
  switch (enumValue) {
    case MarketplaceRevenueShareSortBy::NOT_SET:
      return {};
    case MarketplaceRevenueShareSortBy::LastModifiedDate:
      return "LastModifiedDate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MarketplaceRevenueShareSortByMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
