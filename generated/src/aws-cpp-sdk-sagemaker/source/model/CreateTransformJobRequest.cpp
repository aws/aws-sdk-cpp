/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateTransformJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTransformJobRequest::CreateTransformJobRequest() : 
    m_transformJobNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_maxConcurrentTransforms(0),
    m_maxConcurrentTransformsHasBeenSet(false),
    m_modelClientConfigHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_batchStrategy(BatchStrategy::NOT_SET),
    m_batchStrategyHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_transformInputHasBeenSet(false),
    m_transformOutputHasBeenSet(false),
    m_dataCaptureConfigHasBeenSet(false),
    m_transformResourcesHasBeenSet(false),
    m_dataProcessingHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_experimentConfigHasBeenSet(false)
{
}

Aws::String CreateTransformJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformJobNameHasBeenSet)
  {
   payload.WithString("TransformJobName", m_transformJobName);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_maxConcurrentTransformsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentTransforms", m_maxConcurrentTransforms);

  }

  if(m_modelClientConfigHasBeenSet)
  {
   payload.WithObject("ModelClientConfig", m_modelClientConfig.Jsonize());

  }

  if(m_maxPayloadInMBHasBeenSet)
  {
   payload.WithInteger("MaxPayloadInMB", m_maxPayloadInMB);

  }

  if(m_batchStrategyHasBeenSet)
  {
   payload.WithString("BatchStrategy", BatchStrategyMapper::GetNameForBatchStrategy(m_batchStrategy));
  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  if(m_transformInputHasBeenSet)
  {
   payload.WithObject("TransformInput", m_transformInput.Jsonize());

  }

  if(m_transformOutputHasBeenSet)
  {
   payload.WithObject("TransformOutput", m_transformOutput.Jsonize());

  }

  if(m_dataCaptureConfigHasBeenSet)
  {
   payload.WithObject("DataCaptureConfig", m_dataCaptureConfig.Jsonize());

  }

  if(m_transformResourcesHasBeenSet)
  {
   payload.WithObject("TransformResources", m_transformResources.Jsonize());

  }

  if(m_dataProcessingHasBeenSet)
  {
   payload.WithObject("DataProcessing", m_dataProcessing.Jsonize());

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

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTransformJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateTransformJob"));
  return headers;

}




