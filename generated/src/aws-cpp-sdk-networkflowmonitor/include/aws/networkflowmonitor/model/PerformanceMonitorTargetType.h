/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
enum class PerformanceMonitorTargetType { NOT_SET, AWS_EC2_VPC };

namespace PerformanceMonitorTargetTypeMapper {
AWS_NETWORKFLOWMONITOR_API PerformanceMonitorTargetType GetPerformanceMonitorTargetTypeForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForPerformanceMonitorTargetType(PerformanceMonitorTargetType value);
}  // namespace PerformanceMonitorTargetTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
