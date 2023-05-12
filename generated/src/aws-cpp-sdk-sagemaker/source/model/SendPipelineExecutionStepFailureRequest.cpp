/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SendPipelineExecutionStepFailureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendPipelineExecutionStepFailureRequest::SendPipelineExecutionStepFailureRequest() : 
    m_callbackTokenHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String SendPipelineExecutionStepFailureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callbackTokenHasBeenSet)
  {
   payload.WithString("CallbackToken", m_callbackToken);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendPipelineExecutionStepFailureRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.SendPipelineExecutionStepFailure"));
  return headers;

}




