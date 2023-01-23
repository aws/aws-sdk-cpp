/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ActivityTypeConfiguration.h>
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

ActivityTypeConfiguration::ActivityTypeConfiguration() : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskHeartbeatTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultTaskScheduleToStartTimeoutHasBeenSet(false),
    m_defaultTaskScheduleToCloseTimeoutHasBeenSet(false)
{
}

ActivityTypeConfiguration::ActivityTypeConfiguration(JsonView jsonValue) : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskHeartbeatTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultTaskScheduleToStartTimeoutHasBeenSet(false),
    m_defaultTaskScheduleToCloseTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTypeConfiguration& ActivityTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultTaskStartToCloseTimeout"))
  {
    m_defaultTaskStartToCloseTimeout = jsonValue.GetString("defaultTaskStartToCloseTimeout");

    m_defaultTaskStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskHeartbeatTimeout"))
  {
    m_defaultTaskHeartbeatTimeout = jsonValue.GetString("defaultTaskHeartbeatTimeout");

    m_defaultTaskHeartbeatTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskList"))
  {
    m_defaultTaskList = jsonValue.GetObject("defaultTaskList");

    m_defaultTaskListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskPriority"))
  {
    m_defaultTaskPriority = jsonValue.GetString("defaultTaskPriority");

    m_defaultTaskPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskScheduleToStartTimeout"))
  {
    m_defaultTaskScheduleToStartTimeout = jsonValue.GetString("defaultTaskScheduleToStartTimeout");

    m_defaultTaskScheduleToStartTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskScheduleToCloseTimeout"))
  {
    m_defaultTaskScheduleToCloseTimeout = jsonValue.GetString("defaultTaskScheduleToCloseTimeout");

    m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultTaskHeartbeatTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskHeartbeatTimeout", m_defaultTaskHeartbeatTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultTaskScheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskScheduleToStartTimeout", m_defaultTaskScheduleToStartTimeout);

  }

  if(m_defaultTaskScheduleToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskScheduleToCloseTimeout", m_defaultTaskScheduleToCloseTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
