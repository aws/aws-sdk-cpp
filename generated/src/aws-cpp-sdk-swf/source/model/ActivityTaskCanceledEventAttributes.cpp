﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ActivityTaskCanceledEventAttributes.h>
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

ActivityTaskCanceledEventAttributes::ActivityTaskCanceledEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ActivityTaskCanceledEventAttributes& ActivityTaskCanceledEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");
    m_scheduledEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");
    m_startedEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestCancelRequestedEventId"))
  {
    m_latestCancelRequestedEventId = jsonValue.GetInt64("latestCancelRequestedEventId");
    m_latestCancelRequestedEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ActivityTaskCanceledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  if(m_latestCancelRequestedEventIdHasBeenSet)
  {
   payload.WithInt64("latestCancelRequestedEventId", m_latestCancelRequestedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
