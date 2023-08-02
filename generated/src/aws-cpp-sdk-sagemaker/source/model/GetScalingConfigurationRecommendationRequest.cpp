/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetScalingConfigurationRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetScalingConfigurationRecommendationRequest::GetScalingConfigurationRecommendationRequest() : 
    m_inferenceRecommendationsJobNameHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_targetCpuUtilizationPerCore(0),
    m_targetCpuUtilizationPerCoreHasBeenSet(false),
    m_scalingPolicyObjectiveHasBeenSet(false)
{
}

Aws::String GetScalingConfigurationRecommendationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceRecommendationsJobNameHasBeenSet)
  {
   payload.WithString("InferenceRecommendationsJobName", m_inferenceRecommendationsJobName);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_targetCpuUtilizationPerCoreHasBeenSet)
  {
   payload.WithInteger("TargetCpuUtilizationPerCore", m_targetCpuUtilizationPerCore);

  }

  if(m_scalingPolicyObjectiveHasBeenSet)
  {
   payload.WithObject("ScalingPolicyObjective", m_scalingPolicyObjective.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetScalingConfigurationRecommendationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.GetScalingConfigurationRecommendation"));
  return headers;

}




