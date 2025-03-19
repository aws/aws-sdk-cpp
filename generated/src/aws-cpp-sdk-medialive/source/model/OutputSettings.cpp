/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputSettings.h>
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

OutputSettings::OutputSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputSettings& OutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("archiveOutputSettings"))
  {
    m_archiveOutputSettings = jsonValue.GetObject("archiveOutputSettings");
    m_archiveOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frameCaptureOutputSettings"))
  {
    m_frameCaptureOutputSettings = jsonValue.GetObject("frameCaptureOutputSettings");
    m_frameCaptureOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hlsOutputSettings"))
  {
    m_hlsOutputSettings = jsonValue.GetObject("hlsOutputSettings");
    m_hlsOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaPackageOutputSettings"))
  {
    m_mediaPackageOutputSettings = jsonValue.GetObject("mediaPackageOutputSettings");
    m_mediaPackageOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("msSmoothOutputSettings"))
  {
    m_msSmoothOutputSettings = jsonValue.GetObject("msSmoothOutputSettings");
    m_msSmoothOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multiplexOutputSettings"))
  {
    m_multiplexOutputSettings = jsonValue.GetObject("multiplexOutputSettings");
    m_multiplexOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rtmpOutputSettings"))
  {
    m_rtmpOutputSettings = jsonValue.GetObject("rtmpOutputSettings");
    m_rtmpOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("udpOutputSettings"))
  {
    m_udpOutputSettings = jsonValue.GetObject("udpOutputSettings");
    m_udpOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cmafIngestOutputSettings"))
  {
    m_cmafIngestOutputSettings = jsonValue.GetObject("cmafIngestOutputSettings");
    m_cmafIngestOutputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srtOutputSettings"))
  {
    m_srtOutputSettings = jsonValue.GetObject("srtOutputSettings");
    m_srtOutputSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_archiveOutputSettingsHasBeenSet)
  {
   payload.WithObject("archiveOutputSettings", m_archiveOutputSettings.Jsonize());

  }

  if(m_frameCaptureOutputSettingsHasBeenSet)
  {
   payload.WithObject("frameCaptureOutputSettings", m_frameCaptureOutputSettings.Jsonize());

  }

  if(m_hlsOutputSettingsHasBeenSet)
  {
   payload.WithObject("hlsOutputSettings", m_hlsOutputSettings.Jsonize());

  }

  if(m_mediaPackageOutputSettingsHasBeenSet)
  {
   payload.WithObject("mediaPackageOutputSettings", m_mediaPackageOutputSettings.Jsonize());

  }

  if(m_msSmoothOutputSettingsHasBeenSet)
  {
   payload.WithObject("msSmoothOutputSettings", m_msSmoothOutputSettings.Jsonize());

  }

  if(m_multiplexOutputSettingsHasBeenSet)
  {
   payload.WithObject("multiplexOutputSettings", m_multiplexOutputSettings.Jsonize());

  }

  if(m_rtmpOutputSettingsHasBeenSet)
  {
   payload.WithObject("rtmpOutputSettings", m_rtmpOutputSettings.Jsonize());

  }

  if(m_udpOutputSettingsHasBeenSet)
  {
   payload.WithObject("udpOutputSettings", m_udpOutputSettings.Jsonize());

  }

  if(m_cmafIngestOutputSettingsHasBeenSet)
  {
   payload.WithObject("cmafIngestOutputSettings", m_cmafIngestOutputSettings.Jsonize());

  }

  if(m_srtOutputSettingsHasBeenSet)
  {
   payload.WithObject("srtOutputSettings", m_srtOutputSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
