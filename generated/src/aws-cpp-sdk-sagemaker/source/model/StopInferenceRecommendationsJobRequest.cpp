/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopInferenceRecommendationsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopInferenceRecommendationsJobRequest::StopInferenceRecommendationsJobRequest() : 
    m_jobNameHasBeenSet(false)
{
}

Aws::String StopInferenceRecommendationsJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopInferenceRecommendationsJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopInferenceRecommendationsJob"));
  return headers;

}




