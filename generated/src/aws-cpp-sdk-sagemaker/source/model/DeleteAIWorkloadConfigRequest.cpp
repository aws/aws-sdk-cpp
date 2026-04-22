/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DeleteAIWorkloadConfigRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAIWorkloadConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aIWorkloadConfigNameHasBeenSet) {
    payload.WithString("AIWorkloadConfigName", m_aIWorkloadConfigName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAIWorkloadConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteAIWorkloadConfig"));
  return headers;
}
