/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetDashManifestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

GetDashManifestConfiguration::GetDashManifestConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GetDashManifestConfiguration& GetDashManifestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");
    m_manifestNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");
    m_manifestWindowSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterConfiguration"))
  {
    m_filterConfiguration = jsonValue.GetObject("FilterConfiguration");
    m_filterConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinUpdatePeriodSeconds"))
  {
    m_minUpdatePeriodSeconds = jsonValue.GetInteger("MinUpdatePeriodSeconds");
    m_minUpdatePeriodSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinBufferTimeSeconds"))
  {
    m_minBufferTimeSeconds = jsonValue.GetInteger("MinBufferTimeSeconds");
    m_minBufferTimeSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuggestedPresentationDelaySeconds"))
  {
    m_suggestedPresentationDelaySeconds = jsonValue.GetInteger("SuggestedPresentationDelaySeconds");
    m_suggestedPresentationDelaySecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SegmentTemplateFormat"))
  {
    m_segmentTemplateFormat = DashSegmentTemplateFormatMapper::GetDashSegmentTemplateFormatForName(jsonValue.GetString("SegmentTemplateFormat"));
    m_segmentTemplateFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeriodTriggers"))
  {
    Aws::Utils::Array<JsonView> periodTriggersJsonList = jsonValue.GetArray("PeriodTriggers");
    for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
    {
      m_periodTriggers.push_back(DashPeriodTriggerMapper::GetDashPeriodTriggerForName(periodTriggersJsonList[periodTriggersIndex].AsString()));
    }
    m_periodTriggersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScteDash"))
  {
    m_scteDash = jsonValue.GetObject("ScteDash");
    m_scteDashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DrmSignaling"))
  {
    m_drmSignaling = DashDrmSignalingMapper::GetDashDrmSignalingForName(jsonValue.GetString("DrmSignaling"));
    m_drmSignalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UtcTiming"))
  {
    m_utcTiming = jsonValue.GetObject("UtcTiming");
    m_utcTimingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Profiles"))
  {
    Aws::Utils::Array<JsonView> profilesJsonList = jsonValue.GetArray("Profiles");
    for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
    {
      m_profiles.push_back(DashProfileMapper::GetDashProfileForName(profilesJsonList[profilesIndex].AsString()));
    }
    m_profilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseUrls"))
  {
    Aws::Utils::Array<JsonView> baseUrlsJsonList = jsonValue.GetArray("BaseUrls");
    for(unsigned baseUrlsIndex = 0; baseUrlsIndex < baseUrlsJsonList.GetLength(); ++baseUrlsIndex)
    {
      m_baseUrls.push_back(baseUrlsJsonList[baseUrlsIndex].AsObject());
    }
    m_baseUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProgramInformation"))
  {
    m_programInformation = jsonValue.GetObject("ProgramInformation");
    m_programInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DvbSettings"))
  {
    m_dvbSettings = jsonValue.GetObject("DvbSettings");
    m_dvbSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compactness"))
  {
    m_compactness = DashCompactnessMapper::GetDashCompactnessForName(jsonValue.GetString("Compactness"));
    m_compactnessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubtitleConfiguration"))
  {
    m_subtitleConfiguration = jsonValue.GetObject("SubtitleConfiguration");
    m_subtitleConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue GetDashManifestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_filterConfigurationHasBeenSet)
  {
   payload.WithObject("FilterConfiguration", m_filterConfiguration.Jsonize());

  }

  if(m_minUpdatePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("MinUpdatePeriodSeconds", m_minUpdatePeriodSeconds);

  }

  if(m_minBufferTimeSecondsHasBeenSet)
  {
   payload.WithInteger("MinBufferTimeSeconds", m_minBufferTimeSeconds);

  }

  if(m_suggestedPresentationDelaySecondsHasBeenSet)
  {
   payload.WithInteger("SuggestedPresentationDelaySeconds", m_suggestedPresentationDelaySeconds);

  }

  if(m_segmentTemplateFormatHasBeenSet)
  {
   payload.WithString("SegmentTemplateFormat", DashSegmentTemplateFormatMapper::GetNameForDashSegmentTemplateFormat(m_segmentTemplateFormat));
  }

  if(m_periodTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> periodTriggersJsonList(m_periodTriggers.size());
   for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
   {
     periodTriggersJsonList[periodTriggersIndex].AsString(DashPeriodTriggerMapper::GetNameForDashPeriodTrigger(m_periodTriggers[periodTriggersIndex]));
   }
   payload.WithArray("PeriodTriggers", std::move(periodTriggersJsonList));

  }

  if(m_scteDashHasBeenSet)
  {
   payload.WithObject("ScteDash", m_scteDash.Jsonize());

  }

  if(m_drmSignalingHasBeenSet)
  {
   payload.WithString("DrmSignaling", DashDrmSignalingMapper::GetNameForDashDrmSignaling(m_drmSignaling));
  }

  if(m_utcTimingHasBeenSet)
  {
   payload.WithObject("UtcTiming", m_utcTiming.Jsonize());

  }

  if(m_profilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profilesJsonList(m_profiles.size());
   for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
   {
     profilesJsonList[profilesIndex].AsString(DashProfileMapper::GetNameForDashProfile(m_profiles[profilesIndex]));
   }
   payload.WithArray("Profiles", std::move(profilesJsonList));

  }

  if(m_baseUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baseUrlsJsonList(m_baseUrls.size());
   for(unsigned baseUrlsIndex = 0; baseUrlsIndex < baseUrlsJsonList.GetLength(); ++baseUrlsIndex)
   {
     baseUrlsJsonList[baseUrlsIndex].AsObject(m_baseUrls[baseUrlsIndex].Jsonize());
   }
   payload.WithArray("BaseUrls", std::move(baseUrlsJsonList));

  }

  if(m_programInformationHasBeenSet)
  {
   payload.WithObject("ProgramInformation", m_programInformation.Jsonize());

  }

  if(m_dvbSettingsHasBeenSet)
  {
   payload.WithObject("DvbSettings", m_dvbSettings.Jsonize());

  }

  if(m_compactnessHasBeenSet)
  {
   payload.WithString("Compactness", DashCompactnessMapper::GetNameForDashCompactness(m_compactness));
  }

  if(m_subtitleConfigurationHasBeenSet)
  {
   payload.WithObject("SubtitleConfiguration", m_subtitleConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
