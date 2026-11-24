/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/ChangeHistorySortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace ChangeHistorySortOrderMapper {

static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");

ChangeHistorySortOrder GetChangeHistorySortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASCENDING_HASH) {
    return ChangeHistorySortOrder::ASCENDING;
  } else if (hashCode == DESCENDING_HASH) {
    return ChangeHistorySortOrder::DESCENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeHistorySortOrder>(hashCode);
  }

  return ChangeHistorySortOrder::NOT_SET;
}

Aws::String GetNameForChangeHistorySortOrder(ChangeHistorySortOrder enumValue) {
  switch (enumValue) {
    case ChangeHistorySortOrder::NOT_SET:
      return {};
    case ChangeHistorySortOrder::ASCENDING:
      return "ASCENDING";
    case ChangeHistorySortOrder::DESCENDING:
      return "DESCENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeHistorySortOrderMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
