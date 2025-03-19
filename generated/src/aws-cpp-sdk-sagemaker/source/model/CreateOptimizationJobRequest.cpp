/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateOptimizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOptimizationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optimizationJobNameHasBeenSet)
  {
   payload.WithString("OptimizationJobName", m_optimizationJobName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_modelSourceHasBeenSet)
  {
   payload.WithObject("ModelSource", m_modelSource.Jsonize());

  }

  if(m_deploymentInstanceTypeHasBeenSet)
  {
   payload.WithString("DeploymentInstanceType", OptimizationJobDeploymentInstanceTypeMapper::GetNameForOptimizationJobDeploymentInstanceType(m_deploymentInstanceType));
  }

  if(m_optimizationEnvironmentHasBeenSet)
  {
   JsonValue optimizationEnvironmentJsonMap;
   for(auto& optimizationEnvironmentItem : m_optimizationEnvironment)
   {
     optimizationEnvironmentJsonMap.WithString(optimizationEnvironmentItem.first, optimizationEnvironmentItem.second);
   }
   payload.WithObject("OptimizationEnvironment", std::move(optimizationEnvironmentJsonMap));

  }

  if(m_optimizationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optimizationConfigsJsonList(m_optimizationConfigs.size());
   for(unsigned optimizationConfigsIndex = 0; optimizationConfigsIndex < optimizationConfigsJsonList.GetLength(); ++optimizationConfigsIndex)
   {
     optimizationConfigsJsonList[optimizationConfigsIndex].AsObject(m_optimizationConfigs[optimizationConfigsIndex].Jsonize());
   }
   payload.WithArray("OptimizationConfigs", std::move(optimizationConfigsJsonList));

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOptimizationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateOptimizationJob"));
  return headers;

}




