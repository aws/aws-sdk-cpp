/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorQueryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace PerformanceMonitorQueryTypeMapper {

static const int TOP_PATHS_HASH = HashingUtils::HashString("TOP_PATHS");

PerformanceMonitorQueryType GetPerformanceMonitorQueryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOP_PATHS_HASH) {
    return PerformanceMonitorQueryType::TOP_PATHS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PerformanceMonitorQueryType>(hashCode);
  }

  return PerformanceMonitorQueryType::NOT_SET;
}

Aws::String GetNameForPerformanceMonitorQueryType(PerformanceMonitorQueryType enumValue) {
  switch (enumValue) {
    case PerformanceMonitorQueryType::NOT_SET:
      return {};
    case PerformanceMonitorQueryType::TOP_PATHS:
      return "TOP_PATHS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PerformanceMonitorQueryTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
