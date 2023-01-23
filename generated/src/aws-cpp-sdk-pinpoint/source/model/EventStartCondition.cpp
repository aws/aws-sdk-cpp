/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventStartCondition.h>
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

EventStartCondition::EventStartCondition() : 
    m_eventFilterHasBeenSet(false),
    m_segmentIdHasBeenSet(false)
{
}

EventStartCondition::EventStartCondition(JsonView jsonValue) : 
    m_eventFilterHasBeenSet(false),
    m_segmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

EventStartCondition& EventStartCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventFilter"))
  {
    m_eventFilter = jsonValue.GetObject("EventFilter");

    m_eventFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EventStartCondition::Jsonize() const
{
  JsonValue payload;

  if(m_eventFilterHasBeenSet)
  {
   payload.WithObject("EventFilter", m_eventFilter.Jsonize());

  }

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
