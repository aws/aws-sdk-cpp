/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SellerEngagementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SellerEngagementTypeMapper {

static const int REQUEST_FOR_PRIVATE_OFFER_HASH = HashingUtils::HashString("REQUEST_FOR_PRIVATE_OFFER");
static const int REQUEST_FOR_DEMO_HASH = HashingUtils::HashString("REQUEST_FOR_DEMO");
static const int EXPRESS_PRIVATE_OFFER_HASH = HashingUtils::HashString("EXPRESS_PRIVATE_OFFER");
static const int BUY_NOW_HASH = HashingUtils::HashString("BUY_NOW");
static const int TRY_FOR_FREE_HASH = HashingUtils::HashString("TRY_FOR_FREE");

SellerEngagementType GetSellerEngagementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUEST_FOR_PRIVATE_OFFER_HASH) {
    return SellerEngagementType::REQUEST_FOR_PRIVATE_OFFER;
  } else if (hashCode == REQUEST_FOR_DEMO_HASH) {
    return SellerEngagementType::REQUEST_FOR_DEMO;
  } else if (hashCode == EXPRESS_PRIVATE_OFFER_HASH) {
    return SellerEngagementType::EXPRESS_PRIVATE_OFFER;
  } else if (hashCode == BUY_NOW_HASH) {
    return SellerEngagementType::BUY_NOW;
  } else if (hashCode == TRY_FOR_FREE_HASH) {
    return SellerEngagementType::TRY_FOR_FREE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SellerEngagementType>(hashCode);
  }

  return SellerEngagementType::NOT_SET;
}

Aws::String GetNameForSellerEngagementType(SellerEngagementType enumValue) {
  switch (enumValue) {
    case SellerEngagementType::NOT_SET:
      return {};
    case SellerEngagementType::REQUEST_FOR_PRIVATE_OFFER:
      return "REQUEST_FOR_PRIVATE_OFFER";
    case SellerEngagementType::REQUEST_FOR_DEMO:
      return "REQUEST_FOR_DEMO";
    case SellerEngagementType::EXPRESS_PRIVATE_OFFER:
      return "EXPRESS_PRIVATE_OFFER";
    case SellerEngagementType::BUY_NOW:
      return "BUY_NOW";
    case SellerEngagementType::TRY_FOR_FREE:
      return "TRY_FOR_FREE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SellerEngagementTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
