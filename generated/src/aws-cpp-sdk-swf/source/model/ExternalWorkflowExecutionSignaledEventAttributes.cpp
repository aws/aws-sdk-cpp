/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ExternalWorkflowExecutionSignaledEventAttributes.h>
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

ExternalWorkflowExecutionSignaledEventAttributes::ExternalWorkflowExecutionSignaledEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ExternalWorkflowExecutionSignaledEventAttributes& ExternalWorkflowExecutionSignaledEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowExecution"))
  {
    m_workflowExecution = jsonValue.GetObject("workflowExecution");
    m_workflowExecutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initiatedEventId"))
  {
    m_initiatedEventId = jsonValue.GetInt64("initiatedEventId");
    m_initiatedEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalWorkflowExecutionSignaledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_workflowExecutionHasBeenSet)
  {
   payload.WithObject("workflowExecution", m_workflowExecution.Jsonize());

  }

  if(m_initiatedEventIdHasBeenSet)
  {
   payload.WithInt64("initiatedEventId", m_initiatedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
