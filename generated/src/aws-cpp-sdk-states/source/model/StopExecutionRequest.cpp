/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StopExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopExecutionRequest::StopExecutionRequest() : 
    m_executionArnHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_causeHasBeenSet(false)
{
}

Aws::String StopExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.StopExecution"));
  return headers;

}




