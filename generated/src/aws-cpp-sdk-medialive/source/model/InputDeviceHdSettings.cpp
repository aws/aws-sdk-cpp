﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceHdSettings.h>
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

InputDeviceHdSettings::InputDeviceHdSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

InputDeviceHdSettings& InputDeviceHdSettings::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue InputDeviceHdSettings::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
