/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ControlSortDirection.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ControlSortDirectionMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");
static const int USER_DEFINED_ORDER_HASH = HashingUtils::HashString("USER_DEFINED_ORDER");

ControlSortDirection GetControlSortDirectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return ControlSortDirection::ASC;
  } else if (hashCode == DESC_HASH) {
    return ControlSortDirection::DESC;
  } else if (hashCode == USER_DEFINED_ORDER_HASH) {
    return ControlSortDirection::USER_DEFINED_ORDER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlSortDirection>(hashCode);
  }

  return ControlSortDirection::NOT_SET;
}

Aws::String GetNameForControlSortDirection(ControlSortDirection enumValue) {
  switch (enumValue) {
    case ControlSortDirection::NOT_SET:
      return {};
    case ControlSortDirection::ASC:
      return "ASC";
    case ControlSortDirection::DESC:
      return "DESC";
    case ControlSortDirection::USER_DEFINED_ORDER:
      return "USER_DEFINED_ORDER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlSortDirectionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
