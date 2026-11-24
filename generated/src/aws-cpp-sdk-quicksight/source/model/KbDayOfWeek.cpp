/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KbDayOfWeek.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KbDayOfWeekMapper {

static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");
static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");

KbDayOfWeek GetKbDayOfWeekForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUNDAY_HASH) {
    return KbDayOfWeek::SUNDAY;
  } else if (hashCode == MONDAY_HASH) {
    return KbDayOfWeek::MONDAY;
  } else if (hashCode == TUESDAY_HASH) {
    return KbDayOfWeek::TUESDAY;
  } else if (hashCode == WEDNESDAY_HASH) {
    return KbDayOfWeek::WEDNESDAY;
  } else if (hashCode == THURSDAY_HASH) {
    return KbDayOfWeek::THURSDAY;
  } else if (hashCode == FRIDAY_HASH) {
    return KbDayOfWeek::FRIDAY;
  } else if (hashCode == SATURDAY_HASH) {
    return KbDayOfWeek::SATURDAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KbDayOfWeek>(hashCode);
  }

  return KbDayOfWeek::NOT_SET;
}

Aws::String GetNameForKbDayOfWeek(KbDayOfWeek enumValue) {
  switch (enumValue) {
    case KbDayOfWeek::NOT_SET:
      return {};
    case KbDayOfWeek::SUNDAY:
      return "SUNDAY";
    case KbDayOfWeek::MONDAY:
      return "MONDAY";
    case KbDayOfWeek::TUESDAY:
      return "TUESDAY";
    case KbDayOfWeek::WEDNESDAY:
      return "WEDNESDAY";
    case KbDayOfWeek::THURSDAY:
      return "THURSDAY";
    case KbDayOfWeek::FRIDAY:
      return "FRIDAY";
    case KbDayOfWeek::SATURDAY:
      return "SATURDAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KbDayOfWeekMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
