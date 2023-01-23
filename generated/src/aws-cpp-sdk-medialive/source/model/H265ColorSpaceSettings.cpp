/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265ColorSpaceSettings.h>
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

H265ColorSpaceSettings::H265ColorSpaceSettings() : 
    m_colorSpacePassthroughSettingsHasBeenSet(false),
    m_dolbyVision81SettingsHasBeenSet(false),
    m_hdr10SettingsHasBeenSet(false),
    m_rec601SettingsHasBeenSet(false),
    m_rec709SettingsHasBeenSet(false)
{
}

H265ColorSpaceSettings::H265ColorSpaceSettings(JsonView jsonValue) : 
    m_colorSpacePassthroughSettingsHasBeenSet(false),
    m_dolbyVision81SettingsHasBeenSet(false),
    m_hdr10SettingsHasBeenSet(false),
    m_rec601SettingsHasBeenSet(false),
    m_rec709SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H265ColorSpaceSettings& H265ColorSpaceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("colorSpacePassthroughSettings"))
  {
    m_colorSpacePassthroughSettings = jsonValue.GetObject("colorSpacePassthroughSettings");

    m_colorSpacePassthroughSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dolbyVision81Settings"))
  {
    m_dolbyVision81Settings = jsonValue.GetObject("dolbyVision81Settings");

    m_dolbyVision81SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hdr10Settings"))
  {
    m_hdr10Settings = jsonValue.GetObject("hdr10Settings");

    m_hdr10SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rec601Settings"))
  {
    m_rec601Settings = jsonValue.GetObject("rec601Settings");

    m_rec601SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rec709Settings"))
  {
    m_rec709Settings = jsonValue.GetObject("rec709Settings");

    m_rec709SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue H265ColorSpaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_colorSpacePassthroughSettingsHasBeenSet)
  {
   payload.WithObject("colorSpacePassthroughSettings", m_colorSpacePassthroughSettings.Jsonize());

  }

  if(m_dolbyVision81SettingsHasBeenSet)
  {
   payload.WithObject("dolbyVision81Settings", m_dolbyVision81Settings.Jsonize());

  }

  if(m_hdr10SettingsHasBeenSet)
  {
   payload.WithObject("hdr10Settings", m_hdr10Settings.Jsonize());

  }

  if(m_rec601SettingsHasBeenSet)
  {
   payload.WithObject("rec601Settings", m_rec601Settings.Jsonize());

  }

  if(m_rec709SettingsHasBeenSet)
  {
   payload.WithObject("rec709Settings", m_rec709Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
