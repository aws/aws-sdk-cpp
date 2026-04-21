/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DeleteAIBenchmarkJobRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAIBenchmarkJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIBenchmarkJobNameHasBeenSet) {
    payload.WithString("AIBenchmarkJobName", m_aIBenchmarkJobName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAIBenchmarkJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteAIBenchmarkJob"));
  return headers;
}
