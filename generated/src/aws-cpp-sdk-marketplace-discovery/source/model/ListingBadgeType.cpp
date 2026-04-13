/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ListingBadgeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ListingBadgeTypeMapper {

static const int AWS_FREE_TIER_HASH = HashingUtils::HashString("AWS_FREE_TIER");
static const int FREE_TRIAL_HASH = HashingUtils::HashString("FREE_TRIAL");
static const int DEPLOYED_ON_AWS_HASH = HashingUtils::HashString("DEPLOYED_ON_AWS");
static const int QUICK_LAUNCH_HASH = HashingUtils::HashString("QUICK_LAUNCH");
static const int MULTI_PRODUCT_HASH = HashingUtils::HashString("MULTI_PRODUCT");

ListingBadgeType GetListingBadgeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_FREE_TIER_HASH) {
    return ListingBadgeType::AWS_FREE_TIER;
  } else if (hashCode == FREE_TRIAL_HASH) {
    return ListingBadgeType::FREE_TRIAL;
  } else if (hashCode == DEPLOYED_ON_AWS_HASH) {
    return ListingBadgeType::DEPLOYED_ON_AWS;
  } else if (hashCode == QUICK_LAUNCH_HASH) {
    return ListingBadgeType::QUICK_LAUNCH;
  } else if (hashCode == MULTI_PRODUCT_HASH) {
    return ListingBadgeType::MULTI_PRODUCT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListingBadgeType>(hashCode);
  }

  return ListingBadgeType::NOT_SET;
}

Aws::String GetNameForListingBadgeType(ListingBadgeType enumValue) {
  switch (enumValue) {
    case ListingBadgeType::NOT_SET:
      return {};
    case ListingBadgeType::AWS_FREE_TIER:
      return "AWS_FREE_TIER";
    case ListingBadgeType::FREE_TRIAL:
      return "FREE_TRIAL";
    case ListingBadgeType::DEPLOYED_ON_AWS:
      return "DEPLOYED_ON_AWS";
    case ListingBadgeType::QUICK_LAUNCH:
      return "QUICK_LAUNCH";
    case ListingBadgeType::MULTI_PRODUCT:
      return "MULTI_PRODUCT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListingBadgeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
