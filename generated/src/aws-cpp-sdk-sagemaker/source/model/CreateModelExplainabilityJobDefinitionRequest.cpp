/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelExplainabilityJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelExplainabilityJobDefinitionRequest::CreateModelExplainabilityJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_modelExplainabilityBaselineConfigHasBeenSet(false),
    m_modelExplainabilityAppSpecificationHasBeenSet(false),
    m_modelExplainabilityJobInputHasBeenSet(false),
    m_modelExplainabilityJobOutputConfigHasBeenSet(false),
    m_jobResourcesHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateModelExplainabilityJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  if(m_modelExplainabilityBaselineConfigHasBeenSet)
  {
   payload.WithObject("ModelExplainabilityBaselineConfig", m_modelExplainabilityBaselineConfig.Jsonize());

  }

  if(m_modelExplainabilityAppSpecificationHasBeenSet)
  {
   payload.WithObject("ModelExplainabilityAppSpecification", m_modelExplainabilityAppSpecification.Jsonize());

  }

  if(m_modelExplainabilityJobInputHasBeenSet)
  {
   payload.WithObject("ModelExplainabilityJobInput", m_modelExplainabilityJobInput.Jsonize());

  }

  if(m_modelExplainabilityJobOutputConfigHasBeenSet)
  {
   payload.WithObject("ModelExplainabilityJobOutputConfig", m_modelExplainabilityJobOutputConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateModelExplainabilityJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelExplainabilityJobDefinition"));
  return headers;

}




