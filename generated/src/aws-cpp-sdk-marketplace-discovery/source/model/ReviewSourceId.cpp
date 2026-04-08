/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ReviewSourceId.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ReviewSourceIdMapper {

static const int AWS_MARKETPLACE_HASH = HashingUtils::HashString("AWS_MARKETPLACE");

ReviewSourceId GetReviewSourceIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MARKETPLACE_HASH) {
    return ReviewSourceId::AWS_MARKETPLACE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReviewSourceId>(hashCode);
  }

  return ReviewSourceId::NOT_SET;
}

Aws::String GetNameForReviewSourceId(ReviewSourceId enumValue) {
  switch (enumValue) {
    case ReviewSourceId::NOT_SET:
      return {};
    case ReviewSourceId::AWS_MARKETPLACE:
      return "AWS_MARKETPLACE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReviewSourceIdMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
