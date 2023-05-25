/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SegmentationDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

SegmentationDescriptor::SegmentationDescriptor() : 
    m_segmentNum(0),
    m_segmentNumHasBeenSet(false),
    m_segmentationEventId(0),
    m_segmentationEventIdHasBeenSet(false),
    m_segmentationTypeId(0),
    m_segmentationTypeIdHasBeenSet(false),
    m_segmentationUpidHasBeenSet(false),
    m_segmentationUpidType(0),
    m_segmentationUpidTypeHasBeenSet(false),
    m_segmentsExpected(0),
    m_segmentsExpectedHasBeenSet(false),
    m_subSegmentNum(0),
    m_subSegmentNumHasBeenSet(false),
    m_subSegmentsExpected(0),
    m_subSegmentsExpectedHasBeenSet(false)
{
}

SegmentationDescriptor::SegmentationDescriptor(JsonView jsonValue) : 
    m_segmentNum(0),
    m_segmentNumHasBeenSet(false),
    m_segmentationEventId(0),
    m_segmentationEventIdHasBeenSet(false),
    m_segmentationTypeId(0),
    m_segmentationTypeIdHasBeenSet(false),
    m_segmentationUpidHasBeenSet(false),
    m_segmentationUpidType(0),
    m_segmentationUpidTypeHasBeenSet(false),
    m_segmentsExpected(0),
    m_segmentsExpectedHasBeenSet(false),
    m_subSegmentNum(0),
    m_subSegmentNumHasBeenSet(false),
    m_subSegmentsExpected(0),
    m_subSegmentsExpectedHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentationDescriptor& SegmentationDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentNum"))
  {
    m_segmentNum = jsonValue.GetInteger("SegmentNum");

    m_segmentNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentationEventId"))
  {
    m_segmentationEventId = jsonValue.GetInteger("SegmentationEventId");

    m_segmentationEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentationTypeId"))
  {
    m_segmentationTypeId = jsonValue.GetInteger("SegmentationTypeId");

    m_segmentationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentationUpid"))
  {
    m_segmentationUpid = jsonValue.GetString("SegmentationUpid");

    m_segmentationUpidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentationUpidType"))
  {
    m_segmentationUpidType = jsonValue.GetInteger("SegmentationUpidType");

    m_segmentationUpidTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentsExpected"))
  {
    m_segmentsExpected = jsonValue.GetInteger("SegmentsExpected");

    m_segmentsExpectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubSegmentNum"))
  {
    m_subSegmentNum = jsonValue.GetInteger("SubSegmentNum");

    m_subSegmentNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubSegmentsExpected"))
  {
    m_subSegmentsExpected = jsonValue.GetInteger("SubSegmentsExpected");

    m_subSegmentsExpectedHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentationDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_segmentNumHasBeenSet)
  {
   payload.WithInteger("SegmentNum", m_segmentNum);

  }

  if(m_segmentationEventIdHasBeenSet)
  {
   payload.WithInteger("SegmentationEventId", m_segmentationEventId);

  }

  if(m_segmentationTypeIdHasBeenSet)
  {
   payload.WithInteger("SegmentationTypeId", m_segmentationTypeId);

  }

  if(m_segmentationUpidHasBeenSet)
  {
   payload.WithString("SegmentationUpid", m_segmentationUpid);

  }

  if(m_segmentationUpidTypeHasBeenSet)
  {
   payload.WithInteger("SegmentationUpidType", m_segmentationUpidType);

  }

  if(m_segmentsExpectedHasBeenSet)
  {
   payload.WithInteger("SegmentsExpected", m_segmentsExpected);

  }

  if(m_subSegmentNumHasBeenSet)
  {
   payload.WithInteger("SubSegmentNum", m_subSegmentNum);

  }

  if(m_subSegmentsExpectedHasBeenSet)
  {
   payload.WithInteger("SubSegmentsExpected", m_subSegmentsExpected);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
