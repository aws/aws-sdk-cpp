/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CaptionDestinationSettings.h>
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

CaptionDestinationSettings::CaptionDestinationSettings() : 
    m_aribDestinationSettingsHasBeenSet(false),
    m_burnInDestinationSettingsHasBeenSet(false),
    m_dvbSubDestinationSettingsHasBeenSet(false),
    m_ebuTtDDestinationSettingsHasBeenSet(false),
    m_embeddedDestinationSettingsHasBeenSet(false),
    m_embeddedPlusScte20DestinationSettingsHasBeenSet(false),
    m_rtmpCaptionInfoDestinationSettingsHasBeenSet(false),
    m_scte20PlusEmbeddedDestinationSettingsHasBeenSet(false),
    m_scte27DestinationSettingsHasBeenSet(false),
    m_smpteTtDestinationSettingsHasBeenSet(false),
    m_teletextDestinationSettingsHasBeenSet(false),
    m_ttmlDestinationSettingsHasBeenSet(false),
    m_webvttDestinationSettingsHasBeenSet(false)
{
}

CaptionDestinationSettings::CaptionDestinationSettings(JsonView jsonValue) : 
    m_aribDestinationSettingsHasBeenSet(false),
    m_burnInDestinationSettingsHasBeenSet(false),
    m_dvbSubDestinationSettingsHasBeenSet(false),
    m_ebuTtDDestinationSettingsHasBeenSet(false),
    m_embeddedDestinationSettingsHasBeenSet(false),
    m_embeddedPlusScte20DestinationSettingsHasBeenSet(false),
    m_rtmpCaptionInfoDestinationSettingsHasBeenSet(false),
    m_scte20PlusEmbeddedDestinationSettingsHasBeenSet(false),
    m_scte27DestinationSettingsHasBeenSet(false),
    m_smpteTtDestinationSettingsHasBeenSet(false),
    m_teletextDestinationSettingsHasBeenSet(false),
    m_ttmlDestinationSettingsHasBeenSet(false),
    m_webvttDestinationSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionDestinationSettings& CaptionDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aribDestinationSettings"))
  {
    m_aribDestinationSettings = jsonValue.GetObject("aribDestinationSettings");

    m_aribDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("burnInDestinationSettings"))
  {
    m_burnInDestinationSettings = jsonValue.GetObject("burnInDestinationSettings");

    m_burnInDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbSubDestinationSettings"))
  {
    m_dvbSubDestinationSettings = jsonValue.GetObject("dvbSubDestinationSettings");

    m_dvbSubDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebuTtDDestinationSettings"))
  {
    m_ebuTtDDestinationSettings = jsonValue.GetObject("ebuTtDDestinationSettings");

    m_ebuTtDDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddedDestinationSettings"))
  {
    m_embeddedDestinationSettings = jsonValue.GetObject("embeddedDestinationSettings");

    m_embeddedDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddedPlusScte20DestinationSettings"))
  {
    m_embeddedPlusScte20DestinationSettings = jsonValue.GetObject("embeddedPlusScte20DestinationSettings");

    m_embeddedPlusScte20DestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtmpCaptionInfoDestinationSettings"))
  {
    m_rtmpCaptionInfoDestinationSettings = jsonValue.GetObject("rtmpCaptionInfoDestinationSettings");

    m_rtmpCaptionInfoDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte20PlusEmbeddedDestinationSettings"))
  {
    m_scte20PlusEmbeddedDestinationSettings = jsonValue.GetObject("scte20PlusEmbeddedDestinationSettings");

    m_scte20PlusEmbeddedDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte27DestinationSettings"))
  {
    m_scte27DestinationSettings = jsonValue.GetObject("scte27DestinationSettings");

    m_scte27DestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smpteTtDestinationSettings"))
  {
    m_smpteTtDestinationSettings = jsonValue.GetObject("smpteTtDestinationSettings");

    m_smpteTtDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextDestinationSettings"))
  {
    m_teletextDestinationSettings = jsonValue.GetObject("teletextDestinationSettings");

    m_teletextDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttmlDestinationSettings"))
  {
    m_ttmlDestinationSettings = jsonValue.GetObject("ttmlDestinationSettings");

    m_ttmlDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webvttDestinationSettings"))
  {
    m_webvttDestinationSettings = jsonValue.GetObject("webvttDestinationSettings");

    m_webvttDestinationSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_aribDestinationSettingsHasBeenSet)
  {
   payload.WithObject("aribDestinationSettings", m_aribDestinationSettings.Jsonize());

  }

  if(m_burnInDestinationSettingsHasBeenSet)
  {
   payload.WithObject("burnInDestinationSettings", m_burnInDestinationSettings.Jsonize());

  }

  if(m_dvbSubDestinationSettingsHasBeenSet)
  {
   payload.WithObject("dvbSubDestinationSettings", m_dvbSubDestinationSettings.Jsonize());

  }

  if(m_ebuTtDDestinationSettingsHasBeenSet)
  {
   payload.WithObject("ebuTtDDestinationSettings", m_ebuTtDDestinationSettings.Jsonize());

  }

  if(m_embeddedDestinationSettingsHasBeenSet)
  {
   payload.WithObject("embeddedDestinationSettings", m_embeddedDestinationSettings.Jsonize());

  }

  if(m_embeddedPlusScte20DestinationSettingsHasBeenSet)
  {
   payload.WithObject("embeddedPlusScte20DestinationSettings", m_embeddedPlusScte20DestinationSettings.Jsonize());

  }

  if(m_rtmpCaptionInfoDestinationSettingsHasBeenSet)
  {
   payload.WithObject("rtmpCaptionInfoDestinationSettings", m_rtmpCaptionInfoDestinationSettings.Jsonize());

  }

  if(m_scte20PlusEmbeddedDestinationSettingsHasBeenSet)
  {
   payload.WithObject("scte20PlusEmbeddedDestinationSettings", m_scte20PlusEmbeddedDestinationSettings.Jsonize());

  }

  if(m_scte27DestinationSettingsHasBeenSet)
  {
   payload.WithObject("scte27DestinationSettings", m_scte27DestinationSettings.Jsonize());

  }

  if(m_smpteTtDestinationSettingsHasBeenSet)
  {
   payload.WithObject("smpteTtDestinationSettings", m_smpteTtDestinationSettings.Jsonize());

  }

  if(m_teletextDestinationSettingsHasBeenSet)
  {
   payload.WithObject("teletextDestinationSettings", m_teletextDestinationSettings.Jsonize());

  }

  if(m_ttmlDestinationSettingsHasBeenSet)
  {
   payload.WithObject("ttmlDestinationSettings", m_ttmlDestinationSettings.Jsonize());

  }

  if(m_webvttDestinationSettingsHasBeenSet)
  {
   payload.WithObject("webvttDestinationSettings", m_webvttDestinationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
