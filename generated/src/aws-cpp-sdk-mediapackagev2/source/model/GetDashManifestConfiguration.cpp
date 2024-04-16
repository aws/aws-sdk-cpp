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

GetDashManifestConfiguration::GetDashManifestConfiguration() : 
    m_manifestNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_filterConfigurationHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false),
    m_segmentTemplateFormat(DashSegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_scteDashHasBeenSet(false),
    m_drmSignaling(DashDrmSignaling::NOT_SET),
    m_drmSignalingHasBeenSet(false),
    m_utcTimingHasBeenSet(false)
{
}

GetDashManifestConfiguration::GetDashManifestConfiguration(JsonView jsonValue) : 
    m_manifestNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_filterConfigurationHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false),
    m_segmentTemplateFormat(DashSegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_scteDashHasBeenSet(false),
    m_drmSignaling(DashDrmSignaling::NOT_SET),
    m_drmSignalingHasBeenSet(false),
    m_utcTimingHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
