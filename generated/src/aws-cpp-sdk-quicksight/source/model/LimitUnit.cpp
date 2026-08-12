/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/LimitUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace LimitUnitMapper {

static const int MB_HASH = HashingUtils::HashString("MB");
static const int GB_HASH = HashingUtils::HashString("GB");
static const int HOURS_HASH = HashingUtils::HashString("HOURS");
static const int DAYS_HASH = HashingUtils::HashString("DAYS");

LimitUnit GetLimitUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MB_HASH) {
    return LimitUnit::MB;
  } else if (hashCode == GB_HASH) {
    return LimitUnit::GB;
  } else if (hashCode == HOURS_HASH) {
    return LimitUnit::HOURS;
  } else if (hashCode == DAYS_HASH) {
    return LimitUnit::DAYS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LimitUnit>(hashCode);
  }

  return LimitUnit::NOT_SET;
}

Aws::String GetNameForLimitUnit(LimitUnit enumValue) {
  switch (enumValue) {
    case LimitUnit::NOT_SET:
      return {};
    case LimitUnit::MB:
      return "MB";
    case LimitUnit::GB:
      return "GB";
    case LimitUnit::HOURS:
      return "HOURS";
    case LimitUnit::DAYS:
      return "DAYS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LimitUnitMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
