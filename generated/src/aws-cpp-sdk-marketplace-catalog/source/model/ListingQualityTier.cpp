/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ListingQualityTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ListingQualityTierMapper {

static const int NEEDS_IMPROVEMENT_HASH = HashingUtils::HashString("NEEDS_IMPROVEMENT");
static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int STRONG_HASH = HashingUtils::HashString("STRONG");
static const int EXCELLENT_HASH = HashingUtils::HashString("EXCELLENT");

ListingQualityTier GetListingQualityTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEEDS_IMPROVEMENT_HASH) {
    return ListingQualityTier::NEEDS_IMPROVEMENT;
  } else if (hashCode == BASIC_HASH) {
    return ListingQualityTier::BASIC;
  } else if (hashCode == STRONG_HASH) {
    return ListingQualityTier::STRONG;
  } else if (hashCode == EXCELLENT_HASH) {
    return ListingQualityTier::EXCELLENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListingQualityTier>(hashCode);
  }

  return ListingQualityTier::NOT_SET;
}

Aws::String GetNameForListingQualityTier(ListingQualityTier enumValue) {
  switch (enumValue) {
    case ListingQualityTier::NOT_SET:
      return {};
    case ListingQualityTier::NEEDS_IMPROVEMENT:
      return "NEEDS_IMPROVEMENT";
    case ListingQualityTier::BASIC:
      return "BASIC";
    case ListingQualityTier::STRONG:
      return "STRONG";
    case ListingQualityTier::EXCELLENT:
      return "EXCELLENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListingQualityTierMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
