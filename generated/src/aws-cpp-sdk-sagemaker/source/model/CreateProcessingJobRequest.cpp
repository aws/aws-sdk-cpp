/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateProcessingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProcessingJobRequest::CreateProcessingJobRequest() : 
    m_processingInputsHasBeenSet(false),
    m_processingOutputConfigHasBeenSet(false),
    m_processingJobNameHasBeenSet(false),
    m_processingResourcesHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_appSpecificationHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_experimentConfigHasBeenSet(false)
{
}

Aws::String CreateProcessingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_processingInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processingInputsJsonList(m_processingInputs.size());
   for(unsigned processingInputsIndex = 0; processingInputsIndex < processingInputsJsonList.GetLength(); ++processingInputsIndex)
   {
     processingInputsJsonList[processingInputsIndex].AsObject(m_processingInputs[processingInputsIndex].Jsonize());
   }
   payload.WithArray("ProcessingInputs", std::move(processingInputsJsonList));

  }

  if(m_processingOutputConfigHasBeenSet)
  {
   payload.WithObject("ProcessingOutputConfig", m_processingOutputConfig.Jsonize());

  }

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  if(m_processingResourcesHasBeenSet)
  {
   payload.WithObject("ProcessingResources", m_processingResources.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_appSpecificationHasBeenSet)
  {
   payload.WithObject("AppSpecification", m_appSpecification.Jsonize());

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

  if(m_networkConfigHasBeenSet)
  {
   payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());

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

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProcessingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateProcessingJob"));
  return headers;

}




