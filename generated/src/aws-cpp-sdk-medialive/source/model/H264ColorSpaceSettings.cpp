/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264ColorSpaceSettings.h>
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

H264ColorSpaceSettings::H264ColorSpaceSettings() : 
    m_colorSpacePassthroughSettingsHasBeenSet(false),
    m_rec601SettingsHasBeenSet(false),
    m_rec709SettingsHasBeenSet(false)
{
}

H264ColorSpaceSettings::H264ColorSpaceSettings(JsonView jsonValue) : 
    m_colorSpacePassthroughSettingsHasBeenSet(false),
    m_rec601SettingsHasBeenSet(false),
    m_rec709SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H264ColorSpaceSettings& H264ColorSpaceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("colorSpacePassthroughSettings"))
  {
    m_colorSpacePassthroughSettings = jsonValue.GetObject("colorSpacePassthroughSettings");

    m_colorSpacePassthroughSettingsHasBeenSet = true;
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

JsonValue H264ColorSpaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_colorSpacePassthroughSettingsHasBeenSet)
  {
   payload.WithObject("colorSpacePassthroughSettings", m_colorSpacePassthroughSettings.Jsonize());

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
