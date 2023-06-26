/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ChildWorkflowExecutionCanceledEventAttributes.h>
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

ChildWorkflowExecutionCanceledEventAttributes::ChildWorkflowExecutionCanceledEventAttributes() : 
    m_workflowExecutionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
}

ChildWorkflowExecutionCanceledEventAttributes::ChildWorkflowExecutionCanceledEventAttributes(JsonView jsonValue) : 
    m_workflowExecutionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_startedEventId(0),
    m_startedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

ChildWorkflowExecutionCanceledEventAttributes& ChildWorkflowExecutionCanceledEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowExecution"))
  {
    m_workflowExecution = jsonValue.GetObject("workflowExecution");

    m_workflowExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiatedEventId"))
  {
    m_initiatedEventId = jsonValue.GetInt64("initiatedEventId");

    m_initiatedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

    m_startedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ChildWorkflowExecutionCanceledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_workflowExecutionHasBeenSet)
  {
   payload.WithObject("workflowExecution", m_workflowExecution.Jsonize());

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_initiatedEventIdHasBeenSet)
  {
   payload.WithInt64("initiatedEventId", m_initiatedEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
