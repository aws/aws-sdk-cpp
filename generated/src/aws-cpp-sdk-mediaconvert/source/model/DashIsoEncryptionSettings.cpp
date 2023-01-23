/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoEncryptionSettings.h>
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

DashIsoEncryptionSettings::DashIsoEncryptionSettings() : 
    m_playbackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility::NOT_SET),
    m_playbackDeviceCompatibilityHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
}

DashIsoEncryptionSettings::DashIsoEncryptionSettings(JsonView jsonValue) : 
    m_playbackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility::NOT_SET),
    m_playbackDeviceCompatibilityHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

DashIsoEncryptionSettings& DashIsoEncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("playbackDeviceCompatibility"))
  {
    m_playbackDeviceCompatibility = DashIsoPlaybackDeviceCompatibilityMapper::GetDashIsoPlaybackDeviceCompatibilityForName(jsonValue.GetString("playbackDeviceCompatibility"));

    m_playbackDeviceCompatibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue DashIsoEncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_playbackDeviceCompatibilityHasBeenSet)
  {
   payload.WithString("playbackDeviceCompatibility", DashIsoPlaybackDeviceCompatibilityMapper::GetNameForDashIsoPlaybackDeviceCompatibility(m_playbackDeviceCompatibility));
  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
