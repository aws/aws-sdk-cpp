/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetInsightSummariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInsightSummariesRequest::GetInsightSummariesRequest() : 
    m_statesHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetInsightSummariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsString(InsightStateMapper::GetNameForInsightState(m_states[statesIndex]));
   }
   payload.WithArray("States", std::move(statesJsonList));

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




