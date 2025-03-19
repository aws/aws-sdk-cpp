/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobResult.h>
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

DescribeInferenceRecommendationsJobResult::DescribeInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInferenceRecommendationsJobResult& DescribeInferenceRecommendationsJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobDescription"))
  {
    m_jobDescription = jsonValue.GetString("JobDescription");
    m_jobDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = RecommendationJobTypeMapper::GetRecommendationJobTypeForName(jsonValue.GetString("JobType"));
    m_jobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobArn"))
  {
    m_jobArn = jsonValue.GetString("JobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecommendationJobStatusMapper::GetRecommendationJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");
    m_inputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppingConditions"))
  {
    m_stoppingConditions = jsonValue.GetObject("StoppingConditions");
    m_stoppingConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceRecommendations"))
  {
    Aws::Utils::Array<JsonView> inferenceRecommendationsJsonList = jsonValue.GetArray("InferenceRecommendations");
    for(unsigned inferenceRecommendationsIndex = 0; inferenceRecommendationsIndex < inferenceRecommendationsJsonList.GetLength(); ++inferenceRecommendationsIndex)
    {
      m_inferenceRecommendations.push_back(inferenceRecommendationsJsonList[inferenceRecommendationsIndex].AsObject());
    }
    m_inferenceRecommendationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointPerformances"))
  {
    Aws::Utils::Array<JsonView> endpointPerformancesJsonList = jsonValue.GetArray("EndpointPerformances");
    for(unsigned endpointPerformancesIndex = 0; endpointPerformancesIndex < endpointPerformancesJsonList.GetLength(); ++endpointPerformancesIndex)
    {
      m_endpointPerformances.push_back(endpointPerformancesJsonList[endpointPerformancesIndex].AsObject());
    }
    m_endpointPerformancesHasBeenSet = true;
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
