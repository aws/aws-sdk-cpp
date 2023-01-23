/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StartPipelineExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartPipelineExecutionRequest::StartPipelineExecutionRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_pipelineParametersHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_parallelismConfigurationHasBeenSet(false)
{
}

Aws::String StartPipelineExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("PipelineName", m_pipelineName);

  }

  if(m_pipelineExecutionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineExecutionDisplayName", m_pipelineExecutionDisplayName);

  }

  if(m_pipelineParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineParametersJsonList(m_pipelineParameters.size());
   for(unsigned pipelineParametersIndex = 0; pipelineParametersIndex < pipelineParametersJsonList.GetLength(); ++pipelineParametersIndex)
   {
     pipelineParametersJsonList[pipelineParametersIndex].AsObject(m_pipelineParameters[pipelineParametersIndex].Jsonize());
   }
   payload.WithArray("PipelineParameters", std::move(pipelineParametersJsonList));

  }

  if(m_pipelineExecutionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineExecutionDescription", m_pipelineExecutionDescription);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartPipelineExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StartPipelineExecution"));
  return headers;

}




