/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfSettings.h>
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

MxfSettings::MxfSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MxfSettings& MxfSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = MxfAfdSignalingMapper::GetMxfAfdSignalingForName(jsonValue.GetString("afdSignaling"));
    m_afdSignalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profile"))
  {
    m_profile = MxfProfileMapper::GetMxfProfileForName(jsonValue.GetString("profile"));
    m_profileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("xavcProfileSettings"))
  {
    m_xavcProfileSettings = jsonValue.GetObject("xavcProfileSettings");
    m_xavcProfileSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MxfSettings::Jsonize() const
{
  JsonValue payload;

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", MxfAfdSignalingMapper::GetNameForMxfAfdSignaling(m_afdSignaling));
  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", MxfProfileMapper::GetNameForMxfProfile(m_profile));
  }

  if(m_xavcProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavcProfileSettings", m_xavcProfileSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
