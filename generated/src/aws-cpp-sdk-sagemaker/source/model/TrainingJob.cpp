/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrainingJob::TrainingJob() : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_tuningJobArnHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_modelArtifactsHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false),
    m_secondaryStatus(SecondaryStatus::NOT_SET),
    m_secondaryStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_algorithmSpecificationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_secondaryStatusTransitionsHasBeenSet(false),
    m_finalMetricDataListHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false),
    m_enableManagedSpotTraining(false),
    m_enableManagedSpotTrainingHasBeenSet(false),
    m_checkpointConfigHasBeenSet(false),
    m_trainingTimeInSeconds(0),
    m_trainingTimeInSecondsHasBeenSet(false),
    m_billableTimeInSeconds(0),
    m_billableTimeInSecondsHasBeenSet(false),
    m_debugHookConfigHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_debugRuleConfigurationsHasBeenSet(false),
    m_tensorBoardOutputConfigHasBeenSet(false),
    m_debugRuleEvaluationStatusesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TrainingJob::TrainingJob(JsonView jsonValue) : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_tuningJobArnHasBeenSet(false),
    m_labelingJobArnHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_modelArtifactsHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false),
    m_secondaryStatus(SecondaryStatus::NOT_SET),
    m_secondaryStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_algorithmSpecificationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_secondaryStatusTransitionsHasBeenSet(false),
    m_finalMetricDataListHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false),
    m_enableManagedSpotTraining(false),
    m_enableManagedSpotTrainingHasBeenSet(false),
    m_checkpointConfigHasBeenSet(false),
    m_trainingTimeInSeconds(0),
    m_trainingTimeInSecondsHasBeenSet(false),
    m_billableTimeInSeconds(0),
    m_billableTimeInSecondsHasBeenSet(false),
    m_debugHookConfigHasBeenSet(false),
    m_experimentConfigHasBeenSet(false),
    m_debugRuleConfigurationsHasBeenSet(false),
    m_tensorBoardOutputConfigHasBeenSet(false),
    m_debugRuleEvaluationStatusesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingJob& TrainingJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJobName"))
  {
    m_trainingJobName = jsonValue.GetString("TrainingJobName");

    m_trainingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");

    m_trainingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TuningJobArn"))
  {
    m_tuningJobArn = jsonValue.GetString("TuningJobArn");

    m_tuningJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");

    m_labelingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

    m_autoMLJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelArtifacts"))
  {
    m_modelArtifacts = jsonValue.GetObject("ModelArtifacts");

    m_modelArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobStatus"))
  {
    m_trainingJobStatus = TrainingJobStatusMapper::GetTrainingJobStatusForName(jsonValue.GetString("TrainingJobStatus"));

    m_trainingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryStatus"))
  {
    m_secondaryStatus = SecondaryStatusMapper::GetSecondaryStatusForName(jsonValue.GetString("SecondaryStatus"));

    m_secondaryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("HyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
    m_hyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmSpecification"))
  {
    m_algorithmSpecification = jsonValue.GetObject("AlgorithmSpecification");

    m_algorithmSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    Aws::Utils::Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("InputDataConfig");
    for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
    {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("ResourceConfig");

    m_resourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

    m_stoppingConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingStartTime"))
  {
    m_trainingStartTime = jsonValue.GetDouble("TrainingStartTime");

    m_trainingStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");

    m_trainingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryStatusTransitions"))
  {
    Aws::Utils::Array<JsonView> secondaryStatusTransitionsJsonList = jsonValue.GetArray("SecondaryStatusTransitions");
    for(unsigned secondaryStatusTransitionsIndex = 0; secondaryStatusTransitionsIndex < secondaryStatusTransitionsJsonList.GetLength(); ++secondaryStatusTransitionsIndex)
    {
      m_secondaryStatusTransitions.push_back(secondaryStatusTransitionsJsonList[secondaryStatusTransitionsIndex].AsObject());
    }
    m_secondaryStatusTransitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalMetricDataList"))
  {
    Aws::Utils::Array<JsonView> finalMetricDataListJsonList = jsonValue.GetArray("FinalMetricDataList");
    for(unsigned finalMetricDataListIndex = 0; finalMetricDataListIndex < finalMetricDataListJsonList.GetLength(); ++finalMetricDataListIndex)
    {
      m_finalMetricDataList.push_back(finalMetricDataListJsonList[finalMetricDataListIndex].AsObject());
    }
    m_finalMetricDataListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

    m_enableNetworkIsolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableInterContainerTrafficEncryption"))
  {
    m_enableInterContainerTrafficEncryption = jsonValue.GetBool("EnableInterContainerTrafficEncryption");

    m_enableInterContainerTrafficEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableManagedSpotTraining"))
  {
    m_enableManagedSpotTraining = jsonValue.GetBool("EnableManagedSpotTraining");

    m_enableManagedSpotTrainingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckpointConfig"))
  {
    m_checkpointConfig = jsonValue.GetObject("CheckpointConfig");

    m_checkpointConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingTimeInSeconds"))
  {
    m_trainingTimeInSeconds = jsonValue.GetInteger("TrainingTimeInSeconds");

    m_trainingTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillableTimeInSeconds"))
  {
    m_billableTimeInSeconds = jsonValue.GetInteger("BillableTimeInSeconds");

    m_billableTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DebugHookConfig"))
  {
    m_debugHookConfig = jsonValue.GetObject("DebugHookConfig");

    m_debugHookConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");

    m_experimentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DebugRuleConfigurations"))
  {
    Aws::Utils::Array<JsonView> debugRuleConfigurationsJsonList = jsonValue.GetArray("DebugRuleConfigurations");
    for(unsigned debugRuleConfigurationsIndex = 0; debugRuleConfigurationsIndex < debugRuleConfigurationsJsonList.GetLength(); ++debugRuleConfigurationsIndex)
    {
      m_debugRuleConfigurations.push_back(debugRuleConfigurationsJsonList[debugRuleConfigurationsIndex].AsObject());
    }
    m_debugRuleConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TensorBoardOutputConfig"))
  {
    m_tensorBoardOutputConfig = jsonValue.GetObject("TensorBoardOutputConfig");

    m_tensorBoardOutputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DebugRuleEvaluationStatuses"))
  {
    Aws::Utils::Array<JsonView> debugRuleEvaluationStatusesJsonList = jsonValue.GetArray("DebugRuleEvaluationStatuses");
    for(unsigned debugRuleEvaluationStatusesIndex = 0; debugRuleEvaluationStatusesIndex < debugRuleEvaluationStatusesJsonList.GetLength(); ++debugRuleEvaluationStatusesIndex)
    {
      m_debugRuleEvaluationStatuses.push_back(debugRuleEvaluationStatusesJsonList[debugRuleEvaluationStatusesIndex].AsObject());
    }
    m_debugRuleEvaluationStatusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("RetryStrategy");

    m_retryStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingJob::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("TrainingJobName", m_trainingJobName);

  }

  if(m_trainingJobArnHasBeenSet)
  {
   payload.WithString("TrainingJobArn", m_trainingJobArn);

  }

  if(m_tuningJobArnHasBeenSet)
  {
   payload.WithString("TuningJobArn", m_tuningJobArn);

  }

  if(m_labelingJobArnHasBeenSet)
  {
   payload.WithString("LabelingJobArn", m_labelingJobArn);

  }

  if(m_autoMLJobArnHasBeenSet)
  {
   payload.WithString("AutoMLJobArn", m_autoMLJobArn);

  }

  if(m_modelArtifactsHasBeenSet)
  {
   payload.WithObject("ModelArtifacts", m_modelArtifacts.Jsonize());

  }

  if(m_trainingJobStatusHasBeenSet)
  {
   payload.WithString("TrainingJobStatus", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_trainingJobStatus));
  }

  if(m_secondaryStatusHasBeenSet)
  {
   payload.WithString("SecondaryStatus", SecondaryStatusMapper::GetNameForSecondaryStatus(m_secondaryStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

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

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_trainingStartTimeHasBeenSet)
  {
   payload.WithDouble("TrainingStartTime", m_trainingStartTime.SecondsWithMSPrecision());
  }

  if(m_trainingEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingEndTime", m_trainingEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_secondaryStatusTransitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryStatusTransitionsJsonList(m_secondaryStatusTransitions.size());
   for(unsigned secondaryStatusTransitionsIndex = 0; secondaryStatusTransitionsIndex < secondaryStatusTransitionsJsonList.GetLength(); ++secondaryStatusTransitionsIndex)
   {
     secondaryStatusTransitionsJsonList[secondaryStatusTransitionsIndex].AsObject(m_secondaryStatusTransitions[secondaryStatusTransitionsIndex].Jsonize());
   }
   payload.WithArray("SecondaryStatusTransitions", std::move(secondaryStatusTransitionsJsonList));

  }

  if(m_finalMetricDataListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> finalMetricDataListJsonList(m_finalMetricDataList.size());
   for(unsigned finalMetricDataListIndex = 0; finalMetricDataListIndex < finalMetricDataListJsonList.GetLength(); ++finalMetricDataListIndex)
   {
     finalMetricDataListJsonList[finalMetricDataListIndex].AsObject(m_finalMetricDataList[finalMetricDataListIndex].Jsonize());
   }
   payload.WithArray("FinalMetricDataList", std::move(finalMetricDataListJsonList));

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

  if(m_trainingTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("TrainingTimeInSeconds", m_trainingTimeInSeconds);

  }

  if(m_billableTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("BillableTimeInSeconds", m_billableTimeInSeconds);

  }

  if(m_debugHookConfigHasBeenSet)
  {
   payload.WithObject("DebugHookConfig", m_debugHookConfig.Jsonize());

  }

  if(m_experimentConfigHasBeenSet)
  {
   payload.WithObject("ExperimentConfig", m_experimentConfig.Jsonize());

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

  if(m_debugRuleEvaluationStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> debugRuleEvaluationStatusesJsonList(m_debugRuleEvaluationStatuses.size());
   for(unsigned debugRuleEvaluationStatusesIndex = 0; debugRuleEvaluationStatusesIndex < debugRuleEvaluationStatusesJsonList.GetLength(); ++debugRuleEvaluationStatusesIndex)
   {
     debugRuleEvaluationStatusesJsonList[debugRuleEvaluationStatusesIndex].AsObject(m_debugRuleEvaluationStatuses[debugRuleEvaluationStatusesIndex].Jsonize());
   }
   payload.WithArray("DebugRuleEvaluationStatuses", std::move(debugRuleEvaluationStatusesJsonList));

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
