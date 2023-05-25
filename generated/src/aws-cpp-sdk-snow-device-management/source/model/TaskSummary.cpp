/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/TaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

TaskSummary::TaskSummary() : 
    m_state(TaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

TaskSummary::TaskSummary(JsonView jsonValue) : 
    m_state(TaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSummary& TaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = TaskStateMapper::GetTaskStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", TaskStateMapper::GetNameForTaskState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
