/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HopDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

HopDestination::HopDestination() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_waitMinutes(0),
    m_waitMinutesHasBeenSet(false)
{
}

HopDestination::HopDestination(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_waitMinutes(0),
    m_waitMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

HopDestination& HopDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queue"))
  {
    m_queue = jsonValue.GetString("queue");

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waitMinutes"))
  {
    m_waitMinutes = jsonValue.GetInteger("waitMinutes");

    m_waitMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue HopDestination::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_waitMinutesHasBeenSet)
  {
   payload.WithInteger("waitMinutes", m_waitMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
