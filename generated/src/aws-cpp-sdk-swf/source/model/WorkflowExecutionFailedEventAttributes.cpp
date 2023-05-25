/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionFailedEventAttributes.h>
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

WorkflowExecutionFailedEventAttributes::WorkflowExecutionFailedEventAttributes() : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

WorkflowExecutionFailedEventAttributes::WorkflowExecutionFailedEventAttributes(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionFailedEventAttributes& WorkflowExecutionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

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
