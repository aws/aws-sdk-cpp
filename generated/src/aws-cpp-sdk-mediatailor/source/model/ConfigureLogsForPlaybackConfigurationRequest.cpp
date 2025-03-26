/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ConfigureLogsForPlaybackConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_percentEnabledHasBeenSet)
  {
   payload.WithInteger("PercentEnabled", m_percentEnabled);

  }

  if(m_playbackConfigurationNameHasBeenSet)
  {
   payload.WithString("PlaybackConfigurationName", m_playbackConfigurationName);

  }

  if(m_enabledLoggingStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledLoggingStrategiesJsonList(m_enabledLoggingStrategies.size());
   for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
   {
     enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString(LoggingStrategyMapper::GetNameForLoggingStrategy(m_enabledLoggingStrategies[enabledLoggingStrategiesIndex]));
   }
   payload.WithArray("EnabledLoggingStrategies", std::move(enabledLoggingStrategiesJsonList));

  }

  if(m_adsInteractionLogHasBeenSet)
  {
   payload.WithObject("AdsInteractionLog", m_adsInteractionLog.Jsonize());

  }

  if(m_manifestServiceInteractionLogHasBeenSet)
  {
   payload.WithObject("ManifestServiceInteractionLog", m_manifestServiceInteractionLog.Jsonize());

  }

  return payload.View().WriteReadable();
}




