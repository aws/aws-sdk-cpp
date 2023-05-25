/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetTimeSeriesServiceStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTimeSeriesServiceStatisticsRequest::GetTimeSeriesServiceStatisticsRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_entitySelectorExpressionHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_forecastStatistics(false),
    m_forecastStatisticsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetTimeSeriesServiceStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_entitySelectorExpressionHasBeenSet)
  {
   payload.WithString("EntitySelectorExpression", m_entitySelectorExpression);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_forecastStatisticsHasBeenSet)
  {
   payload.WithBool("ForecastStatistics", m_forecastStatistics);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




