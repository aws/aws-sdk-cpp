/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionCompletedEventAttributes.h>
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

WorkflowExecutionCompletedEventAttributes::WorkflowExecutionCompletedEventAttributes() : 
    m_resultHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

WorkflowExecutionCompletedEventAttributes::WorkflowExecutionCompletedEventAttributes(JsonView jsonValue) : 
    m_resultHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionCompletedEventAttributes& WorkflowExecutionCompletedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionCompletedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

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
