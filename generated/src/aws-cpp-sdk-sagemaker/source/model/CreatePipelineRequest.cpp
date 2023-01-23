/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePipelineRequest::CreatePipelineRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDefinitionHasBeenSet(false),
    m_pipelineDefinitionS3LocationHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false)
{
}

Aws::String CreatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("PipelineName", m_pipelineName);

  }

  if(m_pipelineDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineDisplayName", m_pipelineDisplayName);

  }

  if(m_pipelineDefinitionHasBeenSet)
  {
   payload.WithString("PipelineDefinition", m_pipelineDefinition);

  }

  if(m_pipelineDefinitionS3LocationHasBeenSet)
  {
   payload.WithObject("PipelineDefinitionS3Location", m_pipelineDefinitionS3Location.Jsonize());

  }

  if(m_pipelineDescriptionHasBeenSet)
  {
   payload.WithString("PipelineDescription", m_pipelineDescription);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreatePipeline"));
  return headers;

}




