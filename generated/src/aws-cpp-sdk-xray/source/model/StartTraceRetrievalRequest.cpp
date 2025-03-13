/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/StartTraceRetrievalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTraceRetrievalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_traceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> traceIdsJsonList(m_traceIds.size());
   for(unsigned traceIdsIndex = 0; traceIdsIndex < traceIdsJsonList.GetLength(); ++traceIdsIndex)
   {
     traceIdsJsonList[traceIdsIndex].AsString(m_traceIds[traceIdsIndex]);
   }
   payload.WithArray("TraceIds", std::move(traceIdsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




