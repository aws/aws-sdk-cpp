/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafIngestGroupSettings.h>
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

CmafIngestGroupSettings::CmafIngestGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

CmafIngestGroupSettings& CmafIngestGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nielsenId3Behavior"))
  {
    m_nielsenId3Behavior = CmafNielsenId3BehaviorMapper::GetCmafNielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));
    m_nielsenId3BehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte35Type"))
  {
    m_scte35Type = Scte35TypeMapper::GetScte35TypeForName(jsonValue.GetString("scte35Type"));
    m_scte35TypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");
    m_segmentLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("segmentLengthUnits"))
  {
    m_segmentLengthUnits = CmafIngestSegmentLengthUnitsMapper::GetCmafIngestSegmentLengthUnitsForName(jsonValue.GetString("segmentLengthUnits"));
    m_segmentLengthUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sendDelayMs"))
  {
    m_sendDelayMs = jsonValue.GetInteger("sendDelayMs");
    m_sendDelayMsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("klvBehavior"))
  {
    m_klvBehavior = CmafKLVBehaviorMapper::GetCmafKLVBehaviorForName(jsonValue.GetString("klvBehavior"));
    m_klvBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("klvNameModifier"))
  {
    m_klvNameModifier = jsonValue.GetString("klvNameModifier");
    m_klvNameModifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nielsenId3NameModifier"))
  {
    m_nielsenId3NameModifier = jsonValue.GetString("nielsenId3NameModifier");
    m_nielsenId3NameModifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte35NameModifier"))
  {
    m_scte35NameModifier = jsonValue.GetString("scte35NameModifier");
    m_scte35NameModifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id3Behavior"))
  {
    m_id3Behavior = CmafId3BehaviorMapper::GetCmafId3BehaviorForName(jsonValue.GetString("id3Behavior"));
    m_id3BehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id3NameModifier"))
  {
    m_id3NameModifier = jsonValue.GetString("id3NameModifier");
    m_id3NameModifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("captionLanguageMappings"))
  {
    Aws::Utils::Array<JsonView> captionLanguageMappingsJsonList = jsonValue.GetArray("captionLanguageMappings");
    for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
    {
      m_captionLanguageMappings.push_back(captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject());
    }
    m_captionLanguageMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timedMetadataId3Frame"))
  {
    m_timedMetadataId3Frame = CmafTimedMetadataId3FrameMapper::GetCmafTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));
    m_timedMetadataId3FrameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timedMetadataId3Period"))
  {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");
    m_timedMetadataId3PeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timedMetadataPassthrough"))
  {
    m_timedMetadataPassthrough = CmafTimedMetadataPassthroughMapper::GetCmafTimedMetadataPassthroughForName(jsonValue.GetString("timedMetadataPassthrough"));
    m_timedMetadataPassthroughHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalDestinations"))
  {
    Aws::Utils::Array<JsonView> additionalDestinationsJsonList = jsonValue.GetArray("additionalDestinations");
    for(unsigned additionalDestinationsIndex = 0; additionalDestinationsIndex < additionalDestinationsJsonList.GetLength(); ++additionalDestinationsIndex)
    {
      m_additionalDestinations.push_back(additionalDestinationsJsonList[additionalDestinationsIndex].AsObject());
    }
    m_additionalDestinationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CmafIngestGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_nielsenId3BehaviorHasBeenSet)
  {
   payload.WithString("nielsenId3Behavior", CmafNielsenId3BehaviorMapper::GetNameForCmafNielsenId3Behavior(m_nielsenId3Behavior));
  }

  if(m_scte35TypeHasBeenSet)
  {
   payload.WithString("scte35Type", Scte35TypeMapper::GetNameForScte35Type(m_scte35Type));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_segmentLengthUnitsHasBeenSet)
  {
   payload.WithString("segmentLengthUnits", CmafIngestSegmentLengthUnitsMapper::GetNameForCmafIngestSegmentLengthUnits(m_segmentLengthUnits));
  }

  if(m_sendDelayMsHasBeenSet)
  {
   payload.WithInteger("sendDelayMs", m_sendDelayMs);

  }

  if(m_klvBehaviorHasBeenSet)
  {
   payload.WithString("klvBehavior", CmafKLVBehaviorMapper::GetNameForCmafKLVBehavior(m_klvBehavior));
  }

  if(m_klvNameModifierHasBeenSet)
  {
   payload.WithString("klvNameModifier", m_klvNameModifier);

  }

  if(m_nielsenId3NameModifierHasBeenSet)
  {
   payload.WithString("nielsenId3NameModifier", m_nielsenId3NameModifier);

  }

  if(m_scte35NameModifierHasBeenSet)
  {
   payload.WithString("scte35NameModifier", m_scte35NameModifier);

  }

  if(m_id3BehaviorHasBeenSet)
  {
   payload.WithString("id3Behavior", CmafId3BehaviorMapper::GetNameForCmafId3Behavior(m_id3Behavior));
  }

  if(m_id3NameModifierHasBeenSet)
  {
   payload.WithString("id3NameModifier", m_id3NameModifier);

  }

  if(m_captionLanguageMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionLanguageMappingsJsonList(m_captionLanguageMappings.size());
   for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
   {
     captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject(m_captionLanguageMappings[captionLanguageMappingsIndex].Jsonize());
   }
   payload.WithArray("captionLanguageMappings", std::move(captionLanguageMappingsJsonList));

  }

  if(m_timedMetadataId3FrameHasBeenSet)
  {
   payload.WithString("timedMetadataId3Frame", CmafTimedMetadataId3FrameMapper::GetNameForCmafTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if(m_timedMetadataId3PeriodHasBeenSet)
  {
   payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);

  }

  if(m_timedMetadataPassthroughHasBeenSet)
  {
   payload.WithString("timedMetadataPassthrough", CmafTimedMetadataPassthroughMapper::GetNameForCmafTimedMetadataPassthrough(m_timedMetadataPassthrough));
  }

  if(m_additionalDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalDestinationsJsonList(m_additionalDestinations.size());
   for(unsigned additionalDestinationsIndex = 0; additionalDestinationsIndex < additionalDestinationsJsonList.GetLength(); ++additionalDestinationsIndex)
   {
     additionalDestinationsJsonList[additionalDestinationsIndex].AsObject(m_additionalDestinations[additionalDestinationsIndex].Jsonize());
   }
   payload.WithArray("additionalDestinations", std::move(additionalDestinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
