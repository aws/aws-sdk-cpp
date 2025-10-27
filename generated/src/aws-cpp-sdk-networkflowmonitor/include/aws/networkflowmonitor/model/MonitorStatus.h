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
enum class MonitorStatus { NOT_SET, PENDING, ACTIVE, INACTIVE, ERROR_, DELETING };

namespace MonitorStatusMapper {
AWS_NETWORKFLOWMONITOR_API MonitorStatus GetMonitorStatusForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForMonitorStatus(MonitorStatus value);
}  // namespace MonitorStatusMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
