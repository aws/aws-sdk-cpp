﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RespondDecisionTaskCompletedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RespondDecisionTaskCompletedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_decisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> decisionsJsonList(m_decisions.size());
   for(unsigned decisionsIndex = 0; decisionsIndex < decisionsJsonList.GetLength(); ++decisionsIndex)
   {
     decisionsJsonList[decisionsIndex].AsObject(m_decisions[decisionsIndex].Jsonize());
   }
   payload.WithArray("decisions", std::move(decisionsJsonList));

  }

  if(m_executionContextHasBeenSet)
  {
   payload.WithString("executionContext", m_executionContext);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskListScheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("taskListScheduleToStartTimeout", m_taskListScheduleToStartTimeout);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RespondDecisionTaskCompletedRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RespondDecisionTaskCompleted"));
  return headers;

}




