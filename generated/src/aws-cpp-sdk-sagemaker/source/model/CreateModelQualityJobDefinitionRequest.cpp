/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelQualityJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelQualityJobDefinitionRequest::CreateModelQualityJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_modelQualityBaselineConfigHasBeenSet(false),
    m_modelQualityAppSpecificationHasBeenSet(false),
    m_modelQualityJobInputHasBeenSet(false),
    m_modelQualityJobOutputConfigHasBeenSet(false),
    m_jobResourcesHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateModelQualityJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  if(m_modelQualityBaselineConfigHasBeenSet)
  {
   payload.WithObject("ModelQualityBaselineConfig", m_modelQualityBaselineConfig.Jsonize());

  }

  if(m_modelQualityAppSpecificationHasBeenSet)
  {
   payload.WithObject("ModelQualityAppSpecification", m_modelQualityAppSpecification.Jsonize());

  }

  if(m_modelQualityJobInputHasBeenSet)
  {
   payload.WithObject("ModelQualityJobInput", m_modelQualityJobInput.Jsonize());

  }

  if(m_modelQualityJobOutputConfigHasBeenSet)
  {
   payload.WithObject("ModelQualityJobOutputConfig", m_modelQualityJobOutputConfig.Jsonize());

  }

  if(m_jobResourcesHasBeenSet)
  {
   payload.WithObject("JobResources", m_jobResources.Jsonize());

  }

  if(m_networkConfigHasBeenSet)
  {
   payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

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

Aws::Http::HeaderValueCollection CreateModelQualityJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelQualityJobDefinition"));
  return headers;

}




