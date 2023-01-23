/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ActivityTaskCancelRequestedEventAttributes.h>
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

ActivityTaskCancelRequestedEventAttributes::ActivityTaskCancelRequestedEventAttributes() : 
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
}

ActivityTaskCancelRequestedEventAttributes::ActivityTaskCancelRequestedEventAttributes(JsonView jsonValue) : 
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTaskCancelRequestedEventAttributes& ActivityTaskCancelRequestedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

    m_activityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTaskCancelRequestedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
