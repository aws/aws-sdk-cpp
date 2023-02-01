/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInferenceRecommendationsJobStepsRequest::ListInferenceRecommendationsJobStepsRequest() : 
    m_jobNameHasBeenSet(false),
    m_status(RecommendationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_stepType(RecommendationStepType::NOT_SET),
    m_stepTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListInferenceRecommendationsJobStepsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecommendationJobStatusMapper::GetNameForRecommendationJobStatus(m_status));
  }

  if(m_stepTypeHasBeenSet)
  {
   payload.WithString("StepType", RecommendationStepTypeMapper::GetNameForRecommendationStepType(m_stepType));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInferenceRecommendationsJobStepsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListInferenceRecommendationsJobSteps"));
  return headers;

}




