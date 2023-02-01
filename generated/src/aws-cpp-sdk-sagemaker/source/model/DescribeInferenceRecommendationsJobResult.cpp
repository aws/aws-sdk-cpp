/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInferenceRecommendationsJobResult::DescribeInferenceRecommendationsJobResult() : 
    m_jobType(RecommendationJobType::NOT_SET),
    m_status(RecommendationJobStatus::NOT_SET)
{
}

DescribeInferenceRecommendationsJobResult::DescribeInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobType(RecommendationJobType::NOT_SET),
    m_status(RecommendationJobStatus::NOT_SET)
{
  *this = result;
}

DescribeInferenceRecommendationsJobResult& DescribeInferenceRecommendationsJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

  }

  if(jsonValue.ValueExists("JobDescription"))
  {
    m_jobDescription = jsonValue.GetString("JobDescription");

  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = RecommendationJobTypeMapper::GetRecommendationJobTypeForName(jsonValue.GetString("JobType"));

  }

  if(jsonValue.ValueExists("JobArn"))
  {
    m_jobArn = jsonValue.GetString("JobArn");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecommendationJobStatusMapper::GetRecommendationJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

  }

  if(jsonValue.ValueExists("StoppingConditions"))
  {
    m_stoppingConditions = jsonValue.GetObject("StoppingConditions");

  }

  if(jsonValue.ValueExists("InferenceRecommendations"))
  {
    Aws::Utils::Array<JsonView> inferenceRecommendationsJsonList = jsonValue.GetArray("InferenceRecommendations");
    for(unsigned inferenceRecommendationsIndex = 0; inferenceRecommendationsIndex < inferenceRecommendationsJsonList.GetLength(); ++inferenceRecommendationsIndex)
    {
      m_inferenceRecommendations.push_back(inferenceRecommendationsJsonList[inferenceRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("EndpointPerformances"))
  {
    Aws::Utils::Array<JsonView> endpointPerformancesJsonList = jsonValue.GetArray("EndpointPerformances");
    for(unsigned endpointPerformancesIndex = 0; endpointPerformancesIndex < endpointPerformancesJsonList.GetLength(); ++endpointPerformancesIndex)
    {
      m_endpointPerformances.push_back(endpointPerformancesJsonList[endpointPerformancesIndex].AsObject());
    }
  }



  return *this;
}
