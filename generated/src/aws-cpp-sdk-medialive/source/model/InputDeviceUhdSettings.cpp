/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceUhdSettings.h>
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

InputDeviceUhdSettings::InputDeviceUhdSettings() : 
    m_activeInput(InputDeviceActiveInput::NOT_SET),
    m_activeInputHasBeenSet(false),
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_deviceState(InputDeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false),
    m_framerate(0.0),
    m_framerateHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_scanType(InputDeviceScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_latencyMs(0),
    m_latencyMsHasBeenSet(false),
    m_codec(InputDeviceCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_mediaconnectSettingsHasBeenSet(false),
    m_audioChannelPairsHasBeenSet(false)
{
}

InputDeviceUhdSettings::InputDeviceUhdSettings(JsonView jsonValue) : 
    m_activeInput(InputDeviceActiveInput::NOT_SET),
    m_activeInputHasBeenSet(false),
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_deviceState(InputDeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false),
    m_framerate(0.0),
    m_framerateHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_scanType(InputDeviceScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_latencyMs(0),
    m_latencyMsHasBeenSet(false),
    m_codec(InputDeviceCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_mediaconnectSettingsHasBeenSet(false),
    m_audioChannelPairsHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceUhdSettings& InputDeviceUhdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeInput"))
  {
    m_activeInput = InputDeviceActiveInputMapper::GetInputDeviceActiveInputForName(jsonValue.GetString("activeInput"));

    m_activeInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuredInput"))
  {
    m_configuredInput = InputDeviceConfiguredInputMapper::GetInputDeviceConfiguredInputForName(jsonValue.GetString("configuredInput"));

    m_configuredInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceState"))
  {
    m_deviceState = InputDeviceStateMapper::GetInputDeviceStateForName(jsonValue.GetString("deviceState"));

    m_deviceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetDouble("framerate");

    m_framerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = InputDeviceScanTypeMapper::GetInputDeviceScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
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

JsonValue InputDeviceUhdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_activeInputHasBeenSet)
  {
   payload.WithString("activeInput", InputDeviceActiveInputMapper::GetNameForInputDeviceActiveInput(m_activeInput));
  }

  if(m_configuredInputHasBeenSet)
  {
   payload.WithString("configuredInput", InputDeviceConfiguredInputMapper::GetNameForInputDeviceConfiguredInput(m_configuredInput));
  }

  if(m_deviceStateHasBeenSet)
  {
   payload.WithString("deviceState", InputDeviceStateMapper::GetNameForInputDeviceState(m_deviceState));
  }

  if(m_framerateHasBeenSet)
  {
   payload.WithDouble("framerate", m_framerate);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", InputDeviceScanTypeMapper::GetNameForInputDeviceScanType(m_scanType));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

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
