﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProgramRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adBreaksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adBreaksJsonList(m_adBreaks.size());
   for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
   {
     adBreaksJsonList[adBreaksIndex].AsObject(m_adBreaks[adBreaksIndex].Jsonize());
   }
   payload.WithArray("AdBreaks", std::move(adBreaksJsonList));

  }

  if(m_liveSourceNameHasBeenSet)
  {
   payload.WithString("LiveSourceName", m_liveSourceName);

  }

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  if(m_audienceMediaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audienceMediaJsonList(m_audienceMedia.size());
   for(unsigned audienceMediaIndex = 0; audienceMediaIndex < audienceMediaJsonList.GetLength(); ++audienceMediaIndex)
   {
     audienceMediaJsonList[audienceMediaIndex].AsObject(m_audienceMedia[audienceMediaIndex].Jsonize());
   }
   payload.WithArray("AudienceMedia", std::move(audienceMediaJsonList));

  }

  return payload.View().WriteReadable();
}




