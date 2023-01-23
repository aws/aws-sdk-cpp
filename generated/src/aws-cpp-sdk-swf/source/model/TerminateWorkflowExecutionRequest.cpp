/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/TerminateWorkflowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TerminateWorkflowExecutionRequest::TerminateWorkflowExecutionRequest() : 
    m_domainHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_childPolicy(ChildPolicy::NOT_SET),
    m_childPolicyHasBeenSet(false)
{
}

Aws::String TerminateWorkflowExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateWorkflowExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.TerminateWorkflowExecution"));
  return headers;

}




