/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DeleteTrainingJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteTrainingJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trainingJobNameHasBeenSet) {
    payload.WithString("TrainingJobName", m_trainingJobName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTrainingJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteTrainingJob"));
  return headers;
}
