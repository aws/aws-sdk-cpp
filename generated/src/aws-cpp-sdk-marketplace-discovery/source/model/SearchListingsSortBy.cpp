/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SearchListingsSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SearchListingsSortByMapper {

static const int RELEVANCE_HASH = HashingUtils::HashString("RELEVANCE");
static const int AVERAGE_CUSTOMER_RATING_HASH = HashingUtils::HashString("AVERAGE_CUSTOMER_RATING");

SearchListingsSortBy GetSearchListingsSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RELEVANCE_HASH) {
    return SearchListingsSortBy::RELEVANCE;
  } else if (hashCode == AVERAGE_CUSTOMER_RATING_HASH) {
    return SearchListingsSortBy::AVERAGE_CUSTOMER_RATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchListingsSortBy>(hashCode);
  }

  return SearchListingsSortBy::NOT_SET;
}

Aws::String GetNameForSearchListingsSortBy(SearchListingsSortBy enumValue) {
  switch (enumValue) {
    case SearchListingsSortBy::NOT_SET:
      return {};
    case SearchListingsSortBy::RELEVANCE:
      return "RELEVANCE";
    case SearchListingsSortBy::AVERAGE_CUSTOMER_RATING:
      return "AVERAGE_CUSTOMER_RATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchListingsSortByMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
