/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/IntervalType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace IntervalTypeMapper {

static const int MINUTELY_HASH = HashingUtils::HashString("MINUTELY");
static const int FIVE_MINUTELY_HASH = HashingUtils::HashString("FIVE_MINUTELY");
static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
static const int DAILY_HASH = HashingUtils::HashString("DAILY");

IntervalType GetIntervalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MINUTELY_HASH) {
    return IntervalType::MINUTELY;
  } else if (hashCode == FIVE_MINUTELY_HASH) {
    return IntervalType::FIVE_MINUTELY;
  } else if (hashCode == HOURLY_HASH) {
    return IntervalType::HOURLY;
  } else if (hashCode == DAILY_HASH) {
    return IntervalType::DAILY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntervalType>(hashCode);
  }

  return IntervalType::NOT_SET;
}

Aws::String GetNameForIntervalType(IntervalType enumValue) {
  switch (enumValue) {
    case IntervalType::NOT_SET:
      return {};
    case IntervalType::MINUTELY:
      return "MINUTELY";
    case IntervalType::FIVE_MINUTELY:
      return "FIVE_MINUTELY";
    case IntervalType::HOURLY:
      return "HOURLY";
    case IntervalType::DAILY:
      return "DAILY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntervalTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
