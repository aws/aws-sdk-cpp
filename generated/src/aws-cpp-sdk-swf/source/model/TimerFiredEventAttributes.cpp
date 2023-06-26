/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/TimerFiredEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

TimerFiredEventAttributes::TimerFiredEventAttributes() : 
    m_timerIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
}

TimerFiredEventAttributes::TimerFiredEventAttributes(JsonView jsonValue) : 
    m_timerIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

TimerFiredEventAttributes& TimerFiredEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timerId"))
  {
    m_timerId = jsonValue.GetString("timerId");

    m_timerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

    m_startedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TimerFiredEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timerIdHasBeenSet)
  {
   payload.WithString("timerId", m_timerId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
