/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/StartChildWorkflowExecutionFailedEventAttributes.h>
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

StartChildWorkflowExecutionFailedEventAttributes::StartChildWorkflowExecutionFailedEventAttributes() : 
    m_workflowTypeHasBeenSet(false),
    m_cause(StartChildWorkflowExecutionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
}

StartChildWorkflowExecutionFailedEventAttributes::StartChildWorkflowExecutionFailedEventAttributes(JsonView jsonValue) : 
    m_workflowTypeHasBeenSet(false),
    m_cause(StartChildWorkflowExecutionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_initiatedEventId(0),
    m_initiatedEventIdHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
  *this = jsonValue;
}

StartChildWorkflowExecutionFailedEventAttributes& StartChildWorkflowExecutionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = StartChildWorkflowExecutionFailedCauseMapper::GetStartChildWorkflowExecutionFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiatedEventId"))
  {
    m_initiatedEventId = jsonValue.GetInt64("initiatedEventId");

    m_initiatedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  return *this;
}

JsonValue StartChildWorkflowExecutionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", StartChildWorkflowExecutionFailedCauseMapper::GetNameForStartChildWorkflowExecutionFailedCause(m_cause));
  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_initiatedEventIdHasBeenSet)
  {
   payload.WithInt64("initiatedEventId", m_initiatedEventId);

  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", m_control);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
