/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecution.h>
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

WorkflowExecution::WorkflowExecution() : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

WorkflowExecution::WorkflowExecution(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecution& WorkflowExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");

    m_runIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecution::Jsonize() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
