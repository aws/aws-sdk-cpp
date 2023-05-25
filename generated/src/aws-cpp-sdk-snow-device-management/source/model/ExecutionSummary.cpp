/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/ExecutionSummary.h>
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

ExecutionSummary::ExecutionSummary() : 
    m_executionIdHasBeenSet(false),
    m_managedDeviceIdHasBeenSet(false),
    m_state(ExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

ExecutionSummary::ExecutionSummary(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_managedDeviceIdHasBeenSet(false),
    m_state(ExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionSummary& ExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedDeviceId"))
  {
    m_managedDeviceId = jsonValue.GetString("managedDeviceId");

    m_managedDeviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ExecutionStateMapper::GetExecutionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_managedDeviceIdHasBeenSet)
  {
   payload.WithString("managedDeviceId", m_managedDeviceId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ExecutionStateMapper::GetNameForExecutionState(m_state));
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
