/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/UserIndexCapacitySortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace UserIndexCapacitySortByMapper {

static const int TOTAL_CAPACITY_BYTES_HASH = HashingUtils::HashString("TOTAL_CAPACITY_BYTES");

UserIndexCapacitySortBy GetUserIndexCapacitySortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOTAL_CAPACITY_BYTES_HASH) {
    return UserIndexCapacitySortBy::TOTAL_CAPACITY_BYTES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UserIndexCapacitySortBy>(hashCode);
  }

  return UserIndexCapacitySortBy::NOT_SET;
}

Aws::String GetNameForUserIndexCapacitySortBy(UserIndexCapacitySortBy enumValue) {
  switch (enumValue) {
    case UserIndexCapacitySortBy::NOT_SET:
      return {};
    case UserIndexCapacitySortBy::TOTAL_CAPACITY_BYTES:
      return "TOTAL_CAPACITY_BYTES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UserIndexCapacitySortByMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
