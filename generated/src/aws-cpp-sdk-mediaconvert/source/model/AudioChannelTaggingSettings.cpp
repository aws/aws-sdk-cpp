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
    m_channelTagHasBeenSet(false)
{
}

AudioChannelTaggingSettings::AudioChannelTaggingSettings(JsonView jsonValue) : 
    m_channelTag(AudioChannelTag::NOT_SET),
    m_channelTagHasBeenSet(false)
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

  return *this;
}

JsonValue AudioChannelTaggingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelTagHasBeenSet)
  {
   payload.WithString("channelTag", AudioChannelTagMapper::GetNameForAudioChannelTag(m_channelTag));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
