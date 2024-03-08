/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceConfigurableAudioChannelPairConfig.h>
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

InputDeviceConfigurableAudioChannelPairConfig::InputDeviceConfigurableAudioChannelPairConfig() : 
    m_id(0),
    m_idHasBeenSet(false),
    m_profile(InputDeviceConfigurableAudioChannelPairProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
}

InputDeviceConfigurableAudioChannelPairConfig::InputDeviceConfigurableAudioChannelPairConfig(JsonView jsonValue) : 
    m_id(0),
    m_idHasBeenSet(false),
    m_profile(InputDeviceConfigurableAudioChannelPairProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceConfigurableAudioChannelPairConfig& InputDeviceConfigurableAudioChannelPairConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetInteger("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = InputDeviceConfigurableAudioChannelPairProfileMapper::GetInputDeviceConfigurableAudioChannelPairProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceConfigurableAudioChannelPairConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithInteger("id", m_id);

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", InputDeviceConfigurableAudioChannelPairProfileMapper::GetNameForInputDeviceConfigurableAudioChannelPairProfile(m_profile));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
