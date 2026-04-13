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

SellerEngagementType GetSellerEngagementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUEST_FOR_PRIVATE_OFFER_HASH) {
    return SellerEngagementType::REQUEST_FOR_PRIVATE_OFFER;
  } else if (hashCode == REQUEST_FOR_DEMO_HASH) {
    return SellerEngagementType::REQUEST_FOR_DEMO;
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
