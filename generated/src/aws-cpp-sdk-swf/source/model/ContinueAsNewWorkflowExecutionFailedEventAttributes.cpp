/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ContinueAsNewWorkflowExecutionFailedEventAttributes.h>
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

ContinueAsNewWorkflowExecutionFailedEventAttributes::ContinueAsNewWorkflowExecutionFailedEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ContinueAsNewWorkflowExecutionFailedEventAttributes& ContinueAsNewWorkflowExecutionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = ContinueAsNewWorkflowExecutionFailedCauseMapper::GetContinueAsNewWorkflowExecutionFailedCauseForName(jsonValue.GetString("cause"));
    m_causeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");
    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ContinueAsNewWorkflowExecutionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", ContinueAsNewWorkflowExecutionFailedCauseMapper::GetNameForContinueAsNewWorkflowExecutionFailedCause(m_cause));
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
