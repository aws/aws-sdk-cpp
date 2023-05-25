/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RespondActivityTaskCompletedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RespondActivityTaskCompletedRequest::RespondActivityTaskCompletedRequest() : 
    m_taskTokenHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

Aws::String RespondActivityTaskCompletedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RespondActivityTaskCompletedRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RespondActivityTaskCompleted"));
  return headers;

}




