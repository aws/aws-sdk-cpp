/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/PollForActivityTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PollForActivityTaskRequest::PollForActivityTaskRequest() : 
    m_domainHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_identityHasBeenSet(false)
{
}

Aws::String PollForActivityTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("identity", m_identity);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PollForActivityTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.PollForActivityTask"));
  return headers;

}




