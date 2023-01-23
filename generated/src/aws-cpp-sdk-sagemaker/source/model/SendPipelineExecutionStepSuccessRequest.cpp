/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SendPipelineExecutionStepSuccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendPipelineExecutionStepSuccessRequest::SendPipelineExecutionStepSuccessRequest() : 
    m_callbackTokenHasBeenSet(false),
    m_outputParametersHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String SendPipelineExecutionStepSuccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callbackTokenHasBeenSet)
  {
   payload.WithString("CallbackToken", m_callbackToken);

  }

  if(m_outputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputParametersJsonList(m_outputParameters.size());
   for(unsigned outputParametersIndex = 0; outputParametersIndex < outputParametersJsonList.GetLength(); ++outputParametersIndex)
   {
     outputParametersJsonList[outputParametersIndex].AsObject(m_outputParameters[outputParametersIndex].Jsonize());
   }
   payload.WithArray("OutputParameters", std::move(outputParametersJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendPipelineExecutionStepSuccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.SendPipelineExecutionStepSuccess"));
  return headers;

}




