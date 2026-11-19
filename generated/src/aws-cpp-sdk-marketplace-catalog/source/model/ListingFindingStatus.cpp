/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ListingFindingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ListingFindingStatusMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");

ListingFindingStatus GetListingFindingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return ListingFindingStatus::PASS;
  } else if (hashCode == FAIL_HASH) {
    return ListingFindingStatus::FAIL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListingFindingStatus>(hashCode);
  }

  return ListingFindingStatus::NOT_SET;
}

Aws::String GetNameForListingFindingStatus(ListingFindingStatus enumValue) {
  switch (enumValue) {
    case ListingFindingStatus::NOT_SET:
      return {};
    case ListingFindingStatus::PASS:
      return "PASS";
    case ListingFindingStatus::FAIL:
      return "FAIL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListingFindingStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
