/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateAIRecommendationJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAIRecommendationJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIRecommendationJobNameHasBeenSet) {
    payload.WithString("AIRecommendationJobName", m_aIRecommendationJobName);
  }

  if (m_modelSourceHasBeenSet) {
    payload.WithObject("ModelSource", m_modelSource.Jsonize());
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("OutputConfig", m_outputConfig.Jsonize());
  }

  if (m_aIWorkloadConfigIdentifierHasBeenSet) {
    payload.WithString("AIWorkloadConfigIdentifier", m_aIWorkloadConfigIdentifier);
  }

  if (m_performanceTargetHasBeenSet) {
    payload.WithObject("PerformanceTarget", m_performanceTarget.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_inferenceSpecificationHasBeenSet) {
    payload.WithObject("InferenceSpecification", m_inferenceSpecification.Jsonize());
  }

  if (m_optimizeModelHasBeenSet) {
    payload.WithBool("OptimizeModel", m_optimizeModel);
  }

  if (m_computeSpecHasBeenSet) {
    payload.WithObject("ComputeSpec", m_computeSpec.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAIRecommendationJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAIRecommendationJob"));
  return headers;
}
