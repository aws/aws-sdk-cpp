/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/TimeSeriesStatisticType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace TimeSeriesStatisticTypeMapper {

static const int DATE_HISTOGRAM_HASH = HashingUtils::HashString("DATE_HISTOGRAM");
static const int PAYMENT_TRAFFIC_HASH = HashingUtils::HashString("PAYMENT_TRAFFIC");

TimeSeriesStatisticType GetTimeSeriesStatisticTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATE_HISTOGRAM_HASH) {
    return TimeSeriesStatisticType::DATE_HISTOGRAM;
  } else if (hashCode == PAYMENT_TRAFFIC_HASH) {
    return TimeSeriesStatisticType::PAYMENT_TRAFFIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeSeriesStatisticType>(hashCode);
  }

  return TimeSeriesStatisticType::NOT_SET;
}

Aws::String GetNameForTimeSeriesStatisticType(TimeSeriesStatisticType enumValue) {
  switch (enumValue) {
    case TimeSeriesStatisticType::NOT_SET:
      return {};
    case TimeSeriesStatisticType::DATE_HISTOGRAM:
      return "DATE_HISTOGRAM";
    case TimeSeriesStatisticType::PAYMENT_TRAFFIC:
      return "PAYMENT_TRAFFIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeSeriesStatisticTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
