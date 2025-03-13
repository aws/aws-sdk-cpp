/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrainingJobResult::DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrainingJobResult& DescribeTrainingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("WarmPoolStatus"))
  {
    m_warmPoolStatus = jsonValue.GetObject("WarmPoolStatus");
    m_warmPoolStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("ProfilerConfig"))
  {
    m_profilerConfig = jsonValue.GetObject("ProfilerConfig");
    m_profilerConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfilerRuleConfigurations"))
  {
    Aws::Utils::Array<JsonView> profilerRuleConfigurationsJsonList = jsonValue.GetArray("ProfilerRuleConfigurations");
    for(unsigned profilerRuleConfigurationsIndex = 0; profilerRuleConfigurationsIndex < profilerRuleConfigurationsJsonList.GetLength(); ++profilerRuleConfigurationsIndex)
    {
      m_profilerRuleConfigurations.push_back(profilerRuleConfigurationsJsonList[profilerRuleConfigurationsIndex].AsObject());
    }
    m_profilerRuleConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfilerRuleEvaluationStatuses"))
  {
    Aws::Utils::Array<JsonView> profilerRuleEvaluationStatusesJsonList = jsonValue.GetArray("ProfilerRuleEvaluationStatuses");
    for(unsigned profilerRuleEvaluationStatusesIndex = 0; profilerRuleEvaluationStatusesIndex < profilerRuleEvaluationStatusesJsonList.GetLength(); ++profilerRuleEvaluationStatusesIndex)
    {
      m_profilerRuleEvaluationStatuses.push_back(profilerRuleEvaluationStatusesJsonList[profilerRuleEvaluationStatusesIndex].AsObject());
    }
    m_profilerRuleEvaluationStatusesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfilingStatus"))
  {
    m_profilingStatus = ProfilingStatusMapper::GetProfilingStatusForName(jsonValue.GetString("ProfilingStatus"));
    m_profilingStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("RemoteDebugConfig"))
  {
    m_remoteDebugConfig = jsonValue.GetObject("RemoteDebugConfig");
    m_remoteDebugConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InfraCheckConfig"))
  {
    m_infraCheckConfig = jsonValue.GetObject("InfraCheckConfig");
    m_infraCheckConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
