/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CancelWorkflowExecutionFailedEventAttributes.h>
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

CancelWorkflowExecutionFailedEventAttributes::CancelWorkflowExecutionFailedEventAttributes() : 
    m_cause(CancelWorkflowExecutionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

CancelWorkflowExecutionFailedEventAttributes::CancelWorkflowExecutionFailedEventAttributes(JsonView jsonValue) : 
    m_cause(CancelWorkflowExecutionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

CancelWorkflowExecutionFailedEventAttributes& CancelWorkflowExecutionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = CancelWorkflowExecutionFailedCauseMapper::GetCancelWorkflowExecutionFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelWorkflowExecutionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", CancelWorkflowExecutionFailedCauseMapper::GetNameForCancelWorkflowExecutionFailedCause(m_cause));
  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
