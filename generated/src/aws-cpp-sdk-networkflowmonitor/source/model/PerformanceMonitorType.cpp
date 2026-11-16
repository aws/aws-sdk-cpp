/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace PerformanceMonitorTypeMapper {

static const int VPC_HASH = HashingUtils::HashString("VPC");

PerformanceMonitorType GetPerformanceMonitorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_HASH) {
    return PerformanceMonitorType::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PerformanceMonitorType>(hashCode);
  }

  return PerformanceMonitorType::NOT_SET;
}

Aws::String GetNameForPerformanceMonitorType(PerformanceMonitorType enumValue) {
  switch (enumValue) {
    case PerformanceMonitorType::NOT_SET:
      return {};
    case PerformanceMonitorType::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PerformanceMonitorTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
