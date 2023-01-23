/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineRequest::UpdatePipelineRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDefinitionHasBeenSet(false),
    m_pipelineDefinitionS3LocationHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false)
{
}

Aws::String UpdatePipelineRequest::SerializePayload() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdatePipeline"));
  return headers;

}




