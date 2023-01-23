/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionTerminatedEventAttributes.h>
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

WorkflowExecutionTerminatedEventAttributes::WorkflowExecutionTerminatedEventAttributes() : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false),
    m_cause(WorkflowExecutionTerminatedCause::NOT_SET),
    m_causeHasBeenSet(false)
{
}

WorkflowExecutionTerminatedEventAttributes::WorkflowExecutionTerminatedEventAttributes(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false),
    m_cause(WorkflowExecutionTerminatedCause::NOT_SET),
    m_causeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionTerminatedEventAttributes& WorkflowExecutionTerminatedEventAttributes::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("childPolicy"))
  {
    m_childPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("childPolicy"));

    m_childPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = WorkflowExecutionTerminatedCauseMapper::GetWorkflowExecutionTerminatedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionTerminatedEventAttributes::Jsonize() const
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

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", WorkflowExecutionTerminatedCauseMapper::GetNameForWorkflowExecutionTerminatedCause(m_cause));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
