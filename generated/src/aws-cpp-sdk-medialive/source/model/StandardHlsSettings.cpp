/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StandardHlsSettings.h>
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

StandardHlsSettings::StandardHlsSettings() : 
    m_audioRenditionSetsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false)
{
}

StandardHlsSettings::StandardHlsSettings(JsonView jsonValue) : 
    m_audioRenditionSetsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

StandardHlsSettings& StandardHlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");

    m_audioRenditionSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("m3u8Settings"))
  {
    m_m3u8Settings = jsonValue.GetObject("m3u8Settings");

    m_m3u8SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardHlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  if(m_m3u8SettingsHasBeenSet)
  {
   payload.WithObject("m3u8Settings", m_m3u8Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
