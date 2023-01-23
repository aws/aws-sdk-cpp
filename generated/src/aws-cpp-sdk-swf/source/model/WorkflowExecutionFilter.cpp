/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionFilter.h>
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

WorkflowExecutionFilter::WorkflowExecutionFilter() : 
    m_workflowIdHasBeenSet(false)
{
}

WorkflowExecutionFilter::WorkflowExecutionFilter(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionFilter& WorkflowExecutionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

    m_workflowIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
