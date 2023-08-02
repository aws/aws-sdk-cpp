/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetScalingConfigurationRecommendationResult.h>
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

GetScalingConfigurationRecommendationResult::GetScalingConfigurationRecommendationResult() : 
    m_targetCpuUtilizationPerCore(0)
{
}

GetScalingConfigurationRecommendationResult::GetScalingConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_targetCpuUtilizationPerCore(0)
{
  *this = result;
}

GetScalingConfigurationRecommendationResult& GetScalingConfigurationRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceRecommendationsJobName"))
  {
    m_inferenceRecommendationsJobName = jsonValue.GetString("InferenceRecommendationsJobName");

  }

  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

  }

  if(jsonValue.ValueExists("TargetCpuUtilizationPerCore"))
  {
    m_targetCpuUtilizationPerCore = jsonValue.GetInteger("TargetCpuUtilizationPerCore");

  }

  if(jsonValue.ValueExists("ScalingPolicyObjective"))
  {
    m_scalingPolicyObjective = jsonValue.GetObject("ScalingPolicyObjective");

  }

  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetObject("Metric");

  }

  if(jsonValue.ValueExists("DynamicScalingConfiguration"))
  {
    m_dynamicScalingConfiguration = jsonValue.GetObject("DynamicScalingConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
