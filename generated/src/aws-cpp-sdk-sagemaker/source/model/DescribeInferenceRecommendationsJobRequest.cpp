/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInferenceRecommendationsJobRequest::DescribeInferenceRecommendationsJobRequest() : 
    m_jobNameHasBeenSet(false)
{
}

Aws::String DescribeInferenceRecommendationsJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInferenceRecommendationsJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeInferenceRecommendationsJob"));
  return headers;

}




