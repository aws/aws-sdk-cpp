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
    m_latencyMsHasBeenSet(false)
{
}

InputDeviceConfigurableSettings::InputDeviceConfigurableSettings(JsonView jsonValue) : 
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_latencyMs(0),
    m_latencyMsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
