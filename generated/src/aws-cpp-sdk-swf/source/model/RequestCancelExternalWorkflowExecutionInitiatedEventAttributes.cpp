/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RequestCancelExternalWorkflowExecutionInitiatedEventAttributes.h>
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

RequestCancelExternalWorkflowExecutionInitiatedEventAttributes::RequestCancelExternalWorkflowExecutionInitiatedEventAttributes() : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
}

RequestCancelExternalWorkflowExecutionInitiatedEventAttributes::RequestCancelExternalWorkflowExecutionInitiatedEventAttributes(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
  *this = jsonValue;
}

RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& RequestCancelExternalWorkflowExecutionInitiatedEventAttributes::operator =(JsonView jsonValue)
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

JsonValue RequestCancelExternalWorkflowExecutionInitiatedEventAttributes::Jsonize() const
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
