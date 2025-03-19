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

GetScalingConfigurationRecommendationResult::GetScalingConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetScalingConfigurationRecommendationResult& GetScalingConfigurationRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceRecommendationsJobName"))
  {
    m_inferenceRecommendationsJobName = jsonValue.GetString("InferenceRecommendationsJobName");
    m_inferenceRecommendationsJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");
    m_recommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");
    m_endpointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetCpuUtilizationPerCore"))
  {
    m_targetCpuUtilizationPerCore = jsonValue.GetInteger("TargetCpuUtilizationPerCore");
    m_targetCpuUtilizationPerCoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScalingPolicyObjective"))
  {
    m_scalingPolicyObjective = jsonValue.GetObject("ScalingPolicyObjective");
    m_scalingPolicyObjectiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetObject("Metric");
    m_metricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicScalingConfiguration"))
  {
    m_dynamicScalingConfiguration = jsonValue.GetObject("DynamicScalingConfiguration");
    m_dynamicScalingConfigurationHasBeenSet = true;
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
