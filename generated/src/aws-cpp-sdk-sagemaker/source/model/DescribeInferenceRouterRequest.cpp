/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DescribeInferenceRouterRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeInferenceRouterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inferenceRouterNameHasBeenSet) {
    payload.WithString("InferenceRouterName", m_inferenceRouterName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInferenceRouterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeInferenceRouter"));
  return headers;
}
