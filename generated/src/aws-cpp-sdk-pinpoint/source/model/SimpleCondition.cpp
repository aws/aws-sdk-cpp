/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SimpleCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SimpleCondition::SimpleCondition() : 
    m_eventConditionHasBeenSet(false),
    m_segmentConditionHasBeenSet(false),
    m_segmentDimensionsHasBeenSet(false)
{
}

SimpleCondition::SimpleCondition(JsonView jsonValue) : 
    m_eventConditionHasBeenSet(false),
    m_segmentConditionHasBeenSet(false),
    m_segmentDimensionsHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleCondition& SimpleCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventCondition"))
  {
    m_eventCondition = jsonValue.GetObject("EventCondition");

    m_eventConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentCondition"))
  {
    m_segmentCondition = jsonValue.GetObject("SegmentCondition");

    m_segmentConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDimensions"))
  {
    m_segmentDimensions = jsonValue.GetObject("segmentDimensions");

    m_segmentDimensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleCondition::Jsonize() const
{
  JsonValue payload;

  if(m_eventConditionHasBeenSet)
  {
   payload.WithObject("EventCondition", m_eventCondition.Jsonize());

  }

  if(m_segmentConditionHasBeenSet)
  {
   payload.WithObject("SegmentCondition", m_segmentCondition.Jsonize());

  }

  if(m_segmentDimensionsHasBeenSet)
  {
   payload.WithObject("segmentDimensions", m_segmentDimensions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
