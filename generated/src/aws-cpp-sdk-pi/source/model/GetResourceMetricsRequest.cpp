﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/GetResourceMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetResourceMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_metricQueriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricQueriesJsonList(m_metricQueries.size());
   for(unsigned metricQueriesIndex = 0; metricQueriesIndex < metricQueriesJsonList.GetLength(); ++metricQueriesIndex)
   {
     metricQueriesJsonList[metricQueriesIndex].AsObject(m_metricQueries[metricQueriesIndex].Jsonize());
   }
   payload.WithArray("MetricQueries", std::move(metricQueriesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_periodInSecondsHasBeenSet)
  {
   payload.WithInteger("PeriodInSeconds", m_periodInSeconds);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_periodAlignmentHasBeenSet)
  {
   payload.WithString("PeriodAlignment", PeriodAlignmentMapper::GetNameForPeriodAlignment(m_periodAlignment));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourceMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.GetResourceMetrics"));
  return headers;

}




