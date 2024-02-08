/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceConfigurableSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDeviceConfigurableSettings::InputDeviceConfigurableSettings() : 
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_latencyMs(0),
    m_latencyMsHasBeenSet(false),
    m_codec(InputDeviceCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_mediaconnectSettingsHasBeenSet(false),
    m_audioChannelPairsHasBeenSet(false)
{
}

InputDeviceConfigurableSettings::InputDeviceConfigurableSettings(JsonView jsonValue) : 
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_latencyMs(0),
    m_latencyMsHasBeenSet(false),
    m_codec(InputDeviceCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_mediaconnectSettingsHasBeenSet(false),
    m_audioChannelPairsHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceConfigurableSettings& InputDeviceConfigurableSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuredInput"))
  {
    m_configuredInput = InputDeviceConfiguredInputMapper::GetInputDeviceConfiguredInputForName(jsonValue.GetString("configuredInput"));

    m_configuredInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latencyMs"))
  {
    m_latencyMs = jsonValue.GetInteger("latencyMs");

    m_latencyMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = InputDeviceCodecMapper::GetInputDeviceCodecForName(jsonValue.GetString("codec"));

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaconnectSettings"))
  {
    m_mediaconnectSettings = jsonValue.GetObject("mediaconnectSettings");

    m_mediaconnectSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioChannelPairs"))
  {
    Aws::Utils::Array<JsonView> audioChannelPairsJsonList = jsonValue.GetArray("audioChannelPairs");
    for(unsigned audioChannelPairsIndex = 0; audioChannelPairsIndex < audioChannelPairsJsonList.GetLength(); ++audioChannelPairsIndex)
    {
      m_audioChannelPairs.push_back(audioChannelPairsJsonList[audioChannelPairsIndex].AsObject());
    }
    m_audioChannelPairsHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceConfigurableSettings::Jsonize() const
{
  JsonValue payload;

  if(m_configuredInputHasBeenSet)
  {
   payload.WithString("configuredInput", InputDeviceConfiguredInputMapper::GetNameForInputDeviceConfiguredInput(m_configuredInput));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_latencyMsHasBeenSet)
  {
   payload.WithInteger("latencyMs", m_latencyMs);

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", InputDeviceCodecMapper::GetNameForInputDeviceCodec(m_codec));
  }

  if(m_mediaconnectSettingsHasBeenSet)
  {
   payload.WithObject("mediaconnectSettings", m_mediaconnectSettings.Jsonize());

  }

  if(m_audioChannelPairsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioChannelPairsJsonList(m_audioChannelPairs.size());
   for(unsigned audioChannelPairsIndex = 0; audioChannelPairsIndex < audioChannelPairsJsonList.GetLength(); ++audioChannelPairsIndex)
   {
     audioChannelPairsJsonList[audioChannelPairsIndex].AsObject(m_audioChannelPairs[audioChannelPairsIndex].Jsonize());
   }
   payload.WithArray("audioChannelPairs", std::move(audioChannelPairsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
