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
enum class PerformanceMonitorType { NOT_SET, VPC };

namespace PerformanceMonitorTypeMapper {
AWS_NETWORKFLOWMONITOR_API PerformanceMonitorType GetPerformanceMonitorTypeForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForPerformanceMonitorType(PerformanceMonitorType value);
}  // namespace PerformanceMonitorTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
