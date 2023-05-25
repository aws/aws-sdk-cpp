/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateEdgePackagingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEdgePackagingJobRequest::CreateEdgePackagingJobRequest() : 
    m_edgePackagingJobNameHasBeenSet(false),
    m_compilationJobNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_resourceKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEdgePackagingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgePackagingJobNameHasBeenSet)
  {
   payload.WithString("EdgePackagingJobName", m_edgePackagingJobName);

  }

  if(m_compilationJobNameHasBeenSet)
  {
   payload.WithString("CompilationJobName", m_compilationJobName);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_resourceKeyHasBeenSet)
  {
   payload.WithString("ResourceKey", m_resourceKey);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEdgePackagingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateEdgePackagingJob"));
  return headers;

}




