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
enum class PerformanceMonitorQueryType { NOT_SET, TOP_PATHS };

namespace PerformanceMonitorQueryTypeMapper {
AWS_NETWORKFLOWMONITOR_API PerformanceMonitorQueryType GetPerformanceMonitorQueryTypeForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForPerformanceMonitorQueryType(PerformanceMonitorQueryType value);
}  // namespace PerformanceMonitorQueryTypeMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
