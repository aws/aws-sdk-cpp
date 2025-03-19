/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHyperParameterTuningJobResult.h>
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

DescribeHyperParameterTuningJobResult::DescribeHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHyperParameterTuningJobResult& DescribeHyperParameterTuningJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HyperParameterTuningJobName"))
  {
    m_hyperParameterTuningJobName = jsonValue.GetString("HyperParameterTuningJobName");
    m_hyperParameterTuningJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HyperParameterTuningJobArn"))
  {
    m_hyperParameterTuningJobArn = jsonValue.GetString("HyperParameterTuningJobArn");
    m_hyperParameterTuningJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HyperParameterTuningJobConfig"))
  {
    m_hyperParameterTuningJobConfig = jsonValue.GetObject("HyperParameterTuningJobConfig");
    m_hyperParameterTuningJobConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobDefinition"))
  {
    m_trainingJobDefinition = jsonValue.GetObject("TrainingJobDefinition");
    m_trainingJobDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobDefinitions"))
  {
    Aws::Utils::Array<JsonView> trainingJobDefinitionsJsonList = jsonValue.GetArray("TrainingJobDefinitions");
    for(unsigned trainingJobDefinitionsIndex = 0; trainingJobDefinitionsIndex < trainingJobDefinitionsJsonList.GetLength(); ++trainingJobDefinitionsIndex)
    {
      m_trainingJobDefinitions.push_back(trainingJobDefinitionsJsonList[trainingJobDefinitionsIndex].AsObject());
    }
    m_trainingJobDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HyperParameterTuningJobStatus"))
  {
    m_hyperParameterTuningJobStatus = HyperParameterTuningJobStatusMapper::GetHyperParameterTuningJobStatusForName(jsonValue.GetString("HyperParameterTuningJobStatus"));
    m_hyperParameterTuningJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HyperParameterTuningEndTime"))
  {
    m_hyperParameterTuningEndTime = jsonValue.GetDouble("HyperParameterTuningEndTime");
    m_hyperParameterTuningEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobStatusCounters"))
  {
    m_trainingJobStatusCounters = jsonValue.GetObject("TrainingJobStatusCounters");
    m_trainingJobStatusCountersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectiveStatusCounters"))
  {
    m_objectiveStatusCounters = jsonValue.GetObject("ObjectiveStatusCounters");
    m_objectiveStatusCountersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BestTrainingJob"))
  {
    m_bestTrainingJob = jsonValue.GetObject("BestTrainingJob");
    m_bestTrainingJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverallBestTrainingJob"))
  {
    m_overallBestTrainingJob = jsonValue.GetObject("OverallBestTrainingJob");
    m_overallBestTrainingJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmStartConfig"))
  {
    m_warmStartConfig = jsonValue.GetObject("WarmStartConfig");
    m_warmStartConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Autotune"))
  {
    m_autotune = jsonValue.GetObject("Autotune");
    m_autotuneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TuningJobCompletionDetails"))
  {
    m_tuningJobCompletionDetails = jsonValue.GetObject("TuningJobCompletionDetails");
    m_tuningJobCompletionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumedResources"))
  {
    m_consumedResources = jsonValue.GetObject("ConsumedResources");
    m_consumedResourcesHasBeenSet = true;
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
