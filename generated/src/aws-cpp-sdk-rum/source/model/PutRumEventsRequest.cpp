/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRumEventsRequest::PutRumEventsRequest() : 
    m_appMonitorDetailsHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_rumEventsHasBeenSet(false),
    m_userDetailsHasBeenSet(false)
{
}

Aws::String PutRumEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appMonitorDetailsHasBeenSet)
  {
   payload.WithObject("AppMonitorDetails", m_appMonitorDetails.Jsonize());

  }

  if(m_batchIdHasBeenSet)
  {
   payload.WithString("BatchId", m_batchId);

  }

  if(m_rumEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rumEventsJsonList(m_rumEvents.size());
   for(unsigned rumEventsIndex = 0; rumEventsIndex < rumEventsJsonList.GetLength(); ++rumEventsIndex)
   {
     rumEventsJsonList[rumEventsIndex].AsObject(m_rumEvents[rumEventsIndex].Jsonize());
   }
   payload.WithArray("RumEvents", std::move(rumEventsJsonList));

  }

  if(m_userDetailsHasBeenSet)
  {
   payload.WithObject("UserDetails", m_userDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}




