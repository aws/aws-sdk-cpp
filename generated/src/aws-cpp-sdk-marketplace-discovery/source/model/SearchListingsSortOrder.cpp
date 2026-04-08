/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SearchListingsSortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SearchListingsSortOrderMapper {

static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");
static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");

SearchListingsSortOrder GetSearchListingsSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DESCENDING_HASH) {
    return SearchListingsSortOrder::DESCENDING;
  } else if (hashCode == ASCENDING_HASH) {
    return SearchListingsSortOrder::ASCENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchListingsSortOrder>(hashCode);
  }

  return SearchListingsSortOrder::NOT_SET;
}

Aws::String GetNameForSearchListingsSortOrder(SearchListingsSortOrder enumValue) {
  switch (enumValue) {
    case SearchListingsSortOrder::NOT_SET:
      return {};
    case SearchListingsSortOrder::DESCENDING:
      return "DESCENDING";
    case SearchListingsSortOrder::ASCENDING:
      return "ASCENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchListingsSortOrderMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
