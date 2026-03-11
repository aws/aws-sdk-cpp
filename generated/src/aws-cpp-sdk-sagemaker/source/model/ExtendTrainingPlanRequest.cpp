/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtendTrainingPlanRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExtendTrainingPlanRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trainingPlanExtensionOfferingIdHasBeenSet) {
    payload.WithString("TrainingPlanExtensionOfferingId", m_trainingPlanExtensionOfferingId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExtendTrainingPlanRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ExtendTrainingPlan"));
  return headers;
}
