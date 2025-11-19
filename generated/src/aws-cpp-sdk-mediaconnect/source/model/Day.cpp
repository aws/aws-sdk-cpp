/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/Day.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace DayMapper {

static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");
static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");

Day GetDayForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MONDAY_HASH) {
    return Day::MONDAY;
  } else if (hashCode == TUESDAY_HASH) {
    return Day::TUESDAY;
  } else if (hashCode == WEDNESDAY_HASH) {
    return Day::WEDNESDAY;
  } else if (hashCode == THURSDAY_HASH) {
    return Day::THURSDAY;
  } else if (hashCode == FRIDAY_HASH) {
    return Day::FRIDAY;
  } else if (hashCode == SATURDAY_HASH) {
    return Day::SATURDAY;
  } else if (hashCode == SUNDAY_HASH) {
    return Day::SUNDAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Day>(hashCode);
  }

  return Day::NOT_SET;
}

Aws::String GetNameForDay(Day enumValue) {
  switch (enumValue) {
    case Day::NOT_SET:
      return {};
    case Day::MONDAY:
      return "MONDAY";
    case Day::TUESDAY:
      return "TUESDAY";
    case Day::WEDNESDAY:
      return "WEDNESDAY";
    case Day::THURSDAY:
      return "THURSDAY";
    case Day::FRIDAY:
      return "FRIDAY";
    case Day::SATURDAY:
      return "SATURDAY";
    case Day::SUNDAY:
      return "SUNDAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DayMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
