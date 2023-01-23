/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelRequest::CreateChannelRequest() : 
    m_channelNameHasBeenSet(false),
    m_fillerSlateHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_playbackMode(PlaybackMode::NOT_SET),
    m_playbackModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false)
{
}

Aws::String CreateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fillerSlateHasBeenSet)
  {
   payload.WithObject("FillerSlate", m_fillerSlate.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_playbackModeHasBeenSet)
  {
   payload.WithString("PlaybackMode", PlaybackModeMapper::GetNameForPlaybackMode(m_playbackMode));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  return payload.View().WriteReadable();
}




