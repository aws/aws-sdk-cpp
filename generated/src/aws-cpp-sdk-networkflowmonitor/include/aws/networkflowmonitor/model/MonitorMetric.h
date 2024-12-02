/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{
  enum class MonitorMetric
  {
    NOT_SET,
    ROUND_TRIP_TIME,
    TIMEOUTS,
    RETRANSMISSIONS,
    DATA_TRANSFERRED
  };

namespace MonitorMetricMapper
{
AWS_NETWORKFLOWMONITOR_API MonitorMetric GetMonitorMetricForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForMonitorMetric(MonitorMetric value);
} // namespace MonitorMetricMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
