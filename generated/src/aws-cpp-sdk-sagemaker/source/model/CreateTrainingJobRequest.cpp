/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateTrainingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrainingJobRequest::CreateTrainingJobRequest() : 
    m_trainingJobNameHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_algorithmSpecificationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false),
    m_enableManagedSpotTraining(false),
    m_enableManagedSpotTrainingHasBeenSet(false),
    m_checkpointConfigHasBeenSet(false),
    m_debugHookConfigHasBeenSet(false),
    m_debugRuleConfigurationsHasBeenSet(false),
    m_tensorBoardOutputConfigHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_profilerConfigHasBeenSet(false),
    m_profilerRuleConfigurationsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_retryStrategyHasBeenSet(false)
{
}

Aws::String CreateTrainingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("TrainingJobName", m_trainingJobName);

  }

  if(m_hyperParametersHasBeenSet)
  {
   JsonValue hyperParametersJsonMap;
   for(auto& hyperParametersItem : m_hyperParameters)
   {
     hyperParametersJsonMap.WithString(hyperParametersItem.first, hyperParametersItem.second);
   }
   payload.WithObject("HyperParameters", std::move(hyperParametersJsonMap));

  }

  if(m_algorithmSpecificationHasBeenSet)
  {
   payload.WithObject("AlgorithmSpecification", m_algorithmSpecification.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
   for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
   {
     inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
   }
   payload.WithArray("InputDataConfig", std::move(inputDataConfigJsonList));

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("ResourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

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

  if(m_enableNetworkIsolationHasBeenSet)
  {
   payload.WithBool("EnableNetworkIsolation", m_enableNetworkIsolation);

  }

  if(m_enableInterContainerTrafficEncryptionHasBeenSet)
  {
   payload.WithBool("EnableInterContainerTrafficEncryption", m_enableInterContainerTrafficEncryption);

  }

  if(m_enableManagedSpotTrainingHasBeenSet)
  {
   payload.WithBool("EnableManagedSpotTraining", m_enableManagedSpotTraining);

  }

  if(m_checkpointConfigHasBeenSet)
  {
   payload.WithObject("CheckpointConfig", m_checkpointConfig.Jsonize());

  }

  if(m_debugHookConfigHasBeenSet)
  {
   payload.WithObject("DebugHookConfig", m_debugHookConfig.Jsonize());

  }

  if(m_debugRuleConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> debugRuleConfigurationsJsonList(m_debugRuleConfigurations.size());
   for(unsigned debugRuleConfigurationsIndex = 0; debugRuleConfigurationsIndex < debugRuleConfigurationsJsonList.GetLength(); ++debugRuleConfigurationsIndex)
   {
     debugRuleConfigurationsJsonList[debugRuleConfigurationsIndex].AsObject(m_debugRuleConfigurations[debugRuleConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DebugRuleConfigurations", std::move(debugRuleConfigurationsJsonList));

  }

  if(m_tensorBoardOutputConfigHasBeenSet)
  {
   payload.WithObject("TensorBoardOutputConfig", m_tensorBoardOutputConfig.Jsonize());

  }

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

  }

  if(m_profilerConfigHasBeenSet)
  {
   payload.WithObject("ProfilerConfig", m_profilerConfig.Jsonize());

  }

  if(m_profilerRuleConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profilerRuleConfigurationsJsonList(m_profilerRuleConfigurations.size());
   for(unsigned profilerRuleConfigurationsIndex = 0; profilerRuleConfigurationsIndex < profilerRuleConfigurationsJsonList.GetLength(); ++profilerRuleConfigurationsIndex)
   {
     profilerRuleConfigurationsJsonList[profilerRuleConfigurationsIndex].AsObject(m_profilerRuleConfigurations[profilerRuleConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ProfilerRuleConfigurations", std::move(profilerRuleConfigurationsJsonList));

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

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("RetryStrategy", m_retryStrategy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrainingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateTrainingJob"));
  return headers;

}




