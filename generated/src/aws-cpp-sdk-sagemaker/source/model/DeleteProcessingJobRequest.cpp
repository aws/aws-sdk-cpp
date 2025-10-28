/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DeleteProcessingJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteProcessingJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_processingJobNameHasBeenSet) {
    payload.WithString("ProcessingJobName", m_processingJobName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProcessingJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteProcessingJob"));
  return headers;
}
