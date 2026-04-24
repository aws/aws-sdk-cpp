/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SellerEngagementContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SellerEngagementContentTypeMapper {

static const int LINK_HASH = HashingUtils::HashString("LINK");

SellerEngagementContentType GetSellerEngagementContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINK_HASH) {
    return SellerEngagementContentType::LINK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SellerEngagementContentType>(hashCode);
  }

  return SellerEngagementContentType::NOT_SET;
}

Aws::String GetNameForSellerEngagementContentType(SellerEngagementContentType enumValue) {
  switch (enumValue) {
    case SellerEngagementContentType::NOT_SET:
      return {};
    case SellerEngagementContentType::LINK:
      return "LINK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SellerEngagementContentTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
