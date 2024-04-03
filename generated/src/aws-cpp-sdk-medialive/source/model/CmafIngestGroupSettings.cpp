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

CmafIngestGroupSettings::CmafIngestGroupSettings() : 
    m_destinationHasBeenSet(false),
    m_nielsenId3Behavior(CmafNielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_scte35Type(Scte35Type::NOT_SET),
    m_scte35TypeHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthUnits(CmafIngestSegmentLengthUnits::NOT_SET),
    m_segmentLengthUnitsHasBeenSet(false),
    m_sendDelayMs(0),
    m_sendDelayMsHasBeenSet(false)
{
}

CmafIngestGroupSettings::CmafIngestGroupSettings(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_nielsenId3Behavior(CmafNielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_scte35Type(Scte35Type::NOT_SET),
    m_scte35TypeHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthUnits(CmafIngestSegmentLengthUnits::NOT_SET),
    m_segmentLengthUnitsHasBeenSet(false),
    m_sendDelayMs(0),
    m_sendDelayMsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
