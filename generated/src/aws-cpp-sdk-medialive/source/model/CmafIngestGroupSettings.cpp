﻿/**
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
