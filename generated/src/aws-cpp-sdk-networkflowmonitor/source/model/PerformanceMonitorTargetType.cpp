/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTargetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace PerformanceMonitorTargetTypeMapper {

static const int AWS_EC2_VPC_HASH = HashingUtils::HashString("AWS::EC2::VPC");

PerformanceMonitorTargetType GetPerformanceMonitorTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_EC2_VPC_HASH) {
    return PerformanceMonitorTargetType::AWS_EC2_VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PerformanceMonitorTargetType>(hashCode);
  }

  return PerformanceMonitorTargetType::NOT_SET;
}

Aws::String GetNameForPerformanceMonitorTargetType(PerformanceMonitorTargetType enumValue) {
  switch (enumValue) {
    case PerformanceMonitorTargetType::NOT_SET:
      return {};
    case PerformanceMonitorTargetType::AWS_EC2_VPC:
      return "AWS::EC2::VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PerformanceMonitorTargetTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
