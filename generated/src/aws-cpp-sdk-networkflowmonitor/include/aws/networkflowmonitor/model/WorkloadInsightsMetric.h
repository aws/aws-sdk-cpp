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
  enum class WorkloadInsightsMetric
  {
    NOT_SET,
    TIMEOUTS,
    RETRANSMISSIONS,
    DATA_TRANSFERRED
  };

namespace WorkloadInsightsMetricMapper
{
AWS_NETWORKFLOWMONITOR_API WorkloadInsightsMetric GetWorkloadInsightsMetricForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForWorkloadInsightsMetric(WorkloadInsightsMetric value);
} // namespace WorkloadInsightsMetricMapper
} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
