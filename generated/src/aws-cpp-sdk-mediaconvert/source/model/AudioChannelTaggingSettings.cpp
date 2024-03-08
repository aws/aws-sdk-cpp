/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioChannelTaggingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AudioChannelTaggingSettings::AudioChannelTaggingSettings() : 
    m_channelTag(AudioChannelTag::NOT_SET),
    m_channelTagHasBeenSet(false),
    m_channelTagsHasBeenSet(false)
{
}

AudioChannelTaggingSettings::AudioChannelTaggingSettings(JsonView jsonValue) : 
    m_channelTag(AudioChannelTag::NOT_SET),
    m_channelTagHasBeenSet(false),
    m_channelTagsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioChannelTaggingSettings& AudioChannelTaggingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelTag"))
  {
    m_channelTag = AudioChannelTagMapper::GetAudioChannelTagForName(jsonValue.GetString("channelTag"));

    m_channelTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelTags"))
  {
    Aws::Utils::Array<JsonView> channelTagsJsonList = jsonValue.GetArray("channelTags");
    for(unsigned channelTagsIndex = 0; channelTagsIndex < channelTagsJsonList.GetLength(); ++channelTagsIndex)
    {
      m_channelTags.push_back(AudioChannelTagMapper::GetAudioChannelTagForName(channelTagsJsonList[channelTagsIndex].AsString()));
    }
    m_channelTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioChannelTaggingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelTagHasBeenSet)
  {
   payload.WithString("channelTag", AudioChannelTagMapper::GetNameForAudioChannelTag(m_channelTag));
  }

  if(m_channelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelTagsJsonList(m_channelTags.size());
   for(unsigned channelTagsIndex = 0; channelTagsIndex < channelTagsJsonList.GetLength(); ++channelTagsIndex)
   {
     channelTagsJsonList[channelTagsIndex].AsString(AudioChannelTagMapper::GetNameForAudioChannelTag(m_channelTags[channelTagsIndex]));
   }
   payload.WithArray("channelTags", std::move(channelTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
