/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/DashBandwidthReportingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace DashBandwidthReportingModeMapper {

static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
static const int MAX_HASH = HashingUtils::HashString("MAX");

DashBandwidthReportingMode GetDashBandwidthReportingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVERAGE_HASH) {
    return DashBandwidthReportingMode::AVERAGE;
  } else if (hashCode == MAX_HASH) {
    return DashBandwidthReportingMode::MAX;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DashBandwidthReportingMode>(hashCode);
  }

  return DashBandwidthReportingMode::NOT_SET;
}

Aws::String GetNameForDashBandwidthReportingMode(DashBandwidthReportingMode enumValue) {
  switch (enumValue) {
    case DashBandwidthReportingMode::NOT_SET:
      return {};
    case DashBandwidthReportingMode::AVERAGE:
      return "AVERAGE";
    case DashBandwidthReportingMode::MAX:
      return "MAX";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DashBandwidthReportingModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
