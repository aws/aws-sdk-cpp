/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreatePrefetchScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePrefetchScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumptionHasBeenSet)
  {
   payload.WithObject("Consumption", m_consumption.Jsonize());

  }

  if(m_retrievalHasBeenSet)
  {
   payload.WithObject("Retrieval", m_retrieval.Jsonize());

  }

  if(m_recurringPrefetchConfigurationHasBeenSet)
  {
   payload.WithObject("RecurringPrefetchConfiguration", m_recurringPrefetchConfiguration.Jsonize());

  }

  if(m_scheduleTypeHasBeenSet)
  {
   payload.WithString("ScheduleType", PrefetchScheduleTypeMapper::GetNameForPrefetchScheduleType(m_scheduleType));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("StreamId", m_streamId);

  }

  return payload.View().WriteReadable();
}




