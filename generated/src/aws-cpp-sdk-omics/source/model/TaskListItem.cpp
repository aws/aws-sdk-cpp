/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/TaskListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

TaskListItem::TaskListItem() : 
    m_cpus(0),
    m_cpusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

TaskListItem::TaskListItem(JsonView jsonValue) : 
    m_cpus(0),
    m_cpusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

TaskListItem& TaskListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpus"))
  {
    m_cpus = jsonValue.GetInteger("cpus");

    m_cpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetString("stopTime");

    m_stopTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskListItem::Jsonize() const
{
  JsonValue payload;

  if(m_cpusHasBeenSet)
  {
   payload.WithInteger("cpus", m_cpus);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TaskStatusMapper::GetNameForTaskStatus(m_status));
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithString("stopTime", m_stopTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
