/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeProcessingJobResult.h>
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

DescribeProcessingJobResult::DescribeProcessingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProcessingJobResult& DescribeProcessingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessingInputs"))
  {
    Aws::Utils::Array<JsonView> processingInputsJsonList = jsonValue.GetArray("ProcessingInputs");
    for(unsigned processingInputsIndex = 0; processingInputsIndex < processingInputsJsonList.GetLength(); ++processingInputsIndex)
    {
      m_processingInputs.push_back(processingInputsJsonList[processingInputsIndex].AsObject());
    }
    m_processingInputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingOutputConfig"))
  {
    m_processingOutputConfig = jsonValue.GetObject("ProcessingOutputConfig");
    m_processingOutputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingJobName"))
  {
    m_processingJobName = jsonValue.GetString("ProcessingJobName");
    m_processingJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingResources"))
  {
    m_processingResources = jsonValue.GetObject("ProcessingResources");
    m_processingResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");
    m_stoppingConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppSpecification"))
  {
    m_appSpecification = jsonValue.GetObject("AppSpecification");
    m_appSpecificationHasBeenSet = true;
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
  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");
    m_networkConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");
    m_experimentConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");
    m_processingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingJobStatus"))
  {
    m_processingJobStatus = ProcessingJobStatusMapper::GetProcessingJobStatusForName(jsonValue.GetString("ProcessingJobStatus"));
    m_processingJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExitMessage"))
  {
    m_exitMessage = jsonValue.GetString("ExitMessage");
    m_exitMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingEndTime"))
  {
    m_processingEndTime = jsonValue.GetDouble("ProcessingEndTime");
    m_processingEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingStartTime"))
  {
    m_processingStartTime = jsonValue.GetDouble("ProcessingStartTime");
    m_processingStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");
    m_monitoringScheduleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");
    m_autoMLJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");
    m_trainingJobArnHasBeenSet = true;
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
