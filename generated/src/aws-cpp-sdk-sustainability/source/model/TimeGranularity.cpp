/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/TimeGranularity.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace TimeGranularityMapper {

static const int YEARLY_CALENDAR_HASH = HashingUtils::HashString("YEARLY_CALENDAR");
static const int YEARLY_FISCAL_HASH = HashingUtils::HashString("YEARLY_FISCAL");
static const int QUARTERLY_CALENDAR_HASH = HashingUtils::HashString("QUARTERLY_CALENDAR");
static const int QUARTERLY_FISCAL_HASH = HashingUtils::HashString("QUARTERLY_FISCAL");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");

TimeGranularity GetTimeGranularityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == YEARLY_CALENDAR_HASH) {
    return TimeGranularity::YEARLY_CALENDAR;
  } else if (hashCode == YEARLY_FISCAL_HASH) {
    return TimeGranularity::YEARLY_FISCAL;
  } else if (hashCode == QUARTERLY_CALENDAR_HASH) {
    return TimeGranularity::QUARTERLY_CALENDAR;
  } else if (hashCode == QUARTERLY_FISCAL_HASH) {
    return TimeGranularity::QUARTERLY_FISCAL;
  } else if (hashCode == MONTHLY_HASH) {
    return TimeGranularity::MONTHLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeGranularity>(hashCode);
  }

  return TimeGranularity::NOT_SET;
}

Aws::String GetNameForTimeGranularity(TimeGranularity enumValue) {
  switch (enumValue) {
    case TimeGranularity::NOT_SET:
      return {};
    case TimeGranularity::YEARLY_CALENDAR:
      return "YEARLY_CALENDAR";
    case TimeGranularity::YEARLY_FISCAL:
      return "YEARLY_FISCAL";
    case TimeGranularity::QUARTERLY_CALENDAR:
      return "QUARTERLY_CALENDAR";
    case TimeGranularity::QUARTERLY_FISCAL:
      return "QUARTERLY_FISCAL";
    case TimeGranularity::MONTHLY:
      return "MONTHLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeGranularityMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
