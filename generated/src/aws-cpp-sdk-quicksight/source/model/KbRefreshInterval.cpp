/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KbRefreshInterval.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KbRefreshIntervalMapper {

static const int DAILY_HASH = HashingUtils::HashString("DAILY");
static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");

KbRefreshInterval GetKbRefreshIntervalForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAILY_HASH) {
    return KbRefreshInterval::DAILY;
  } else if (hashCode == WEEKLY_HASH) {
    return KbRefreshInterval::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return KbRefreshInterval::MONTHLY;
  } else if (hashCode == HOURLY_HASH) {
    return KbRefreshInterval::HOURLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KbRefreshInterval>(hashCode);
  }

  return KbRefreshInterval::NOT_SET;
}

Aws::String GetNameForKbRefreshInterval(KbRefreshInterval enumValue) {
  switch (enumValue) {
    case KbRefreshInterval::NOT_SET:
      return {};
    case KbRefreshInterval::DAILY:
      return "DAILY";
    case KbRefreshInterval::WEEKLY:
      return "WEEKLY";
    case KbRefreshInterval::MONTHLY:
      return "MONTHLY";
    case KbRefreshInterval::HOURLY:
      return "HOURLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KbRefreshIntervalMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
