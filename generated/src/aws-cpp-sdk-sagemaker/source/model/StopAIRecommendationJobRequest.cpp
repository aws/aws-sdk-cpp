/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/StopAIRecommendationJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopAIRecommendationJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIRecommendationJobNameHasBeenSet) {
    payload.WithString("AIRecommendationJobName", m_aIRecommendationJobName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopAIRecommendationJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopAIRecommendationJob"));
  return headers;
}
