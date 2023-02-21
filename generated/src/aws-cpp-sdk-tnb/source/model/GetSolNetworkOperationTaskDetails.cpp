/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkOperationTaskDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

GetSolNetworkOperationTaskDetails::GetSolNetworkOperationTaskDetails() : 
    m_taskContextHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskErrorDetailsHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false)
{
}

GetSolNetworkOperationTaskDetails::GetSolNetworkOperationTaskDetails(JsonView jsonValue) : 
    m_taskContextHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskErrorDetailsHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolNetworkOperationTaskDetails& GetSolNetworkOperationTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskContext"))
  {
    Aws::Map<Aws::String, JsonView> taskContextJsonMap = jsonValue.GetObject("taskContext").GetAllObjects();
    for(auto& taskContextItem : taskContextJsonMap)
    {
      m_taskContext[taskContextItem.first] = taskContextItem.second.AsString();
    }
    m_taskContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskEndTime"))
  {
    m_taskEndTime = jsonValue.GetString("taskEndTime");

    m_taskEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskErrorDetails"))
  {
    m_taskErrorDetails = jsonValue.GetObject("taskErrorDetails");

    m_taskErrorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskName"))
  {
    m_taskName = jsonValue.GetString("taskName");

    m_taskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartTime"))
  {
    m_taskStartTime = jsonValue.GetString("taskStartTime");

    m_taskStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("taskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolNetworkOperationTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_taskContextHasBeenSet)
  {
   JsonValue taskContextJsonMap;
   for(auto& taskContextItem : m_taskContext)
   {
     taskContextJsonMap.WithString(taskContextItem.first, taskContextItem.second);
   }
   payload.WithObject("taskContext", std::move(taskContextJsonMap));

  }

  if(m_taskEndTimeHasBeenSet)
  {
   payload.WithString("taskEndTime", m_taskEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_taskErrorDetailsHasBeenSet)
  {
   payload.WithObject("taskErrorDetails", m_taskErrorDetails.Jsonize());

  }

  if(m_taskNameHasBeenSet)
  {
   payload.WithString("taskName", m_taskName);

  }

  if(m_taskStartTimeHasBeenSet)
  {
   payload.WithString("taskStartTime", m_taskStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
