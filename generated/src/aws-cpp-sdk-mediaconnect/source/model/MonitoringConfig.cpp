/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MonitoringConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

MonitoringConfig::MonitoringConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoringConfig& MonitoringConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thumbnailState"))
  {
    m_thumbnailState = ThumbnailStateMapper::GetThumbnailStateForName(jsonValue.GetString("thumbnailState"));
    m_thumbnailStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioMonitoringSettings"))
  {
    Aws::Utils::Array<JsonView> audioMonitoringSettingsJsonList = jsonValue.GetArray("audioMonitoringSettings");
    for(unsigned audioMonitoringSettingsIndex = 0; audioMonitoringSettingsIndex < audioMonitoringSettingsJsonList.GetLength(); ++audioMonitoringSettingsIndex)
    {
      m_audioMonitoringSettings.push_back(audioMonitoringSettingsJsonList[audioMonitoringSettingsIndex].AsObject());
    }
    m_audioMonitoringSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentQualityAnalysisState"))
  {
    m_contentQualityAnalysisState = ContentQualityAnalysisStateMapper::GetContentQualityAnalysisStateForName(jsonValue.GetString("contentQualityAnalysisState"));
    m_contentQualityAnalysisStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoMonitoringSettings"))
  {
    Aws::Utils::Array<JsonView> videoMonitoringSettingsJsonList = jsonValue.GetArray("videoMonitoringSettings");
    for(unsigned videoMonitoringSettingsIndex = 0; videoMonitoringSettingsIndex < videoMonitoringSettingsJsonList.GetLength(); ++videoMonitoringSettingsIndex)
    {
      m_videoMonitoringSettings.push_back(videoMonitoringSettingsJsonList[videoMonitoringSettingsIndex].AsObject());
    }
    m_videoMonitoringSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringConfig::Jsonize() const
{
  JsonValue payload;

  if(m_thumbnailStateHasBeenSet)
  {
   payload.WithString("thumbnailState", ThumbnailStateMapper::GetNameForThumbnailState(m_thumbnailState));
  }

  if(m_audioMonitoringSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioMonitoringSettingsJsonList(m_audioMonitoringSettings.size());
   for(unsigned audioMonitoringSettingsIndex = 0; audioMonitoringSettingsIndex < audioMonitoringSettingsJsonList.GetLength(); ++audioMonitoringSettingsIndex)
   {
     audioMonitoringSettingsJsonList[audioMonitoringSettingsIndex].AsObject(m_audioMonitoringSettings[audioMonitoringSettingsIndex].Jsonize());
   }
   payload.WithArray("audioMonitoringSettings", std::move(audioMonitoringSettingsJsonList));

  }

  if(m_contentQualityAnalysisStateHasBeenSet)
  {
   payload.WithString("contentQualityAnalysisState", ContentQualityAnalysisStateMapper::GetNameForContentQualityAnalysisState(m_contentQualityAnalysisState));
  }

  if(m_videoMonitoringSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> videoMonitoringSettingsJsonList(m_videoMonitoringSettings.size());
   for(unsigned videoMonitoringSettingsIndex = 0; videoMonitoringSettingsIndex < videoMonitoringSettingsJsonList.GetLength(); ++videoMonitoringSettingsIndex)
   {
     videoMonitoringSettingsJsonList[videoMonitoringSettingsIndex].AsObject(m_videoMonitoringSettings[videoMonitoringSettingsIndex].Jsonize());
   }
   payload.WithArray("videoMonitoringSettings", std::move(videoMonitoringSettingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
