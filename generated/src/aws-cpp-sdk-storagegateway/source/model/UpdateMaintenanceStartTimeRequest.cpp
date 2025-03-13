/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMaintenanceStartTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_hourOfDayHasBeenSet)
  {
   payload.WithInteger("HourOfDay", m_hourOfDay);

  }

  if(m_minuteOfHourHasBeenSet)
  {
   payload.WithInteger("MinuteOfHour", m_minuteOfHour);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithInteger("DayOfWeek", m_dayOfWeek);

  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  if(m_softwareUpdatePreferencesHasBeenSet)
  {
   payload.WithObject("SoftwareUpdatePreferences", m_softwareUpdatePreferences.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMaintenanceStartTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateMaintenanceStartTime"));
  return headers;

}




