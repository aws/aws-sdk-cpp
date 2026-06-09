/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/UserIndexCapacitySortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace UserIndexCapacitySortOrderMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

UserIndexCapacitySortOrder GetUserIndexCapacitySortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return UserIndexCapacitySortOrder::ASC;
  } else if (hashCode == DESC_HASH) {
    return UserIndexCapacitySortOrder::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UserIndexCapacitySortOrder>(hashCode);
  }

  return UserIndexCapacitySortOrder::NOT_SET;
}

Aws::String GetNameForUserIndexCapacitySortOrder(UserIndexCapacitySortOrder enumValue) {
  switch (enumValue) {
    case UserIndexCapacitySortOrder::NOT_SET:
      return {};
    case UserIndexCapacitySortOrder::ASC:
      return "ASC";
    case UserIndexCapacitySortOrder::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UserIndexCapacitySortOrderMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
