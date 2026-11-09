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
static const int G2_HASH = HashingUtils::HashString("G2");
static const int PEERSPOT_HASH = HashingUtils::HashString("PEERSPOT");

ReviewSourceId GetReviewSourceIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MARKETPLACE_HASH) {
    return ReviewSourceId::AWS_MARKETPLACE;
  } else if (hashCode == G2_HASH) {
    return ReviewSourceId::G2;
  } else if (hashCode == PEERSPOT_HASH) {
    return ReviewSourceId::PEERSPOT;
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
    case ReviewSourceId::G2:
      return "G2";
    case ReviewSourceId::PEERSPOT:
      return "PEERSPOT";
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
