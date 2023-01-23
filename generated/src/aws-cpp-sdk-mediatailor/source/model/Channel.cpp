/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

Channel::Channel() : 
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelStateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fillerSlateHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_playbackModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tierHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelStateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fillerSlateHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_playbackModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tierHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelState"))
  {
    m_channelState = jsonValue.GetString("ChannelState");

    m_channelStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FillerSlate"))
  {
    m_fillerSlate = jsonValue.GetObject("FillerSlate");

    m_fillerSlateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaybackMode"))
  {
    m_playbackMode = jsonValue.GetString("PlaybackMode");

    m_playbackModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");

    m_tierHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_channelStateHasBeenSet)
  {
   payload.WithString("ChannelState", m_channelState);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_fillerSlateHasBeenSet)
  {
   payload.WithObject("FillerSlate", m_fillerSlate.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
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
   payload.WithString("PlaybackMode", m_playbackMode);

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
   payload.WithString("Tier", m_tier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
