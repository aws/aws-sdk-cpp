/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/GetWorkflowExecutionHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkflowExecutionHistoryRequest::GetWorkflowExecutionHistoryRequest() : 
    m_domainHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maximumPageSize(0),
    m_maximumPageSizeHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false)
{
}

Aws::String GetWorkflowExecutionHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_executionHasBeenSet)
  {
   payload.WithObject("execution", m_execution.Jsonize());

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("nextPageToken", m_nextPageToken);

  }

  if(m_maximumPageSizeHasBeenSet)
  {
   payload.WithInteger("maximumPageSize", m_maximumPageSize);

  }

  if(m_reverseOrderHasBeenSet)
  {
   payload.WithBool("reverseOrder", m_reverseOrder);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetWorkflowExecutionHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.GetWorkflowExecutionHistory"));
  return headers;

}




