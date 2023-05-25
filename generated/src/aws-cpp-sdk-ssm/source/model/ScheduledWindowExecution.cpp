/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ScheduledWindowExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ScheduledWindowExecution::ScheduledWindowExecution() : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_executionTimeHasBeenSet(false)
{
}

ScheduledWindowExecution::ScheduledWindowExecution(JsonView jsonValue) : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_executionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledWindowExecution& ScheduledWindowExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

    m_windowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetString("ExecutionTime");

    m_executionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledWindowExecution::Jsonize() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithString("ExecutionTime", m_executionTime);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
