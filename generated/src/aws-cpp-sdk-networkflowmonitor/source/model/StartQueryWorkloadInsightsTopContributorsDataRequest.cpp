/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartQueryWorkloadInsightsTopContributorsDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", WorkloadInsightsMetricMapper::GetNameForWorkloadInsightsMetric(m_metricName));
  }

  if(m_destinationCategoryHasBeenSet)
  {
   payload.WithString("destinationCategory", DestinationCategoryMapper::GetNameForDestinationCategory(m_destinationCategory));
  }

  return payload.View().WriteReadable();
}




