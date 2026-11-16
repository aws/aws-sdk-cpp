/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/PutEndpointPolicyRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEndpointPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_endpointNameHasBeenSet) {
    payload.WithString("EndpointName", m_endpointName);
  }

  if (m_resourcePolicyHasBeenSet) {
    payload.WithString("ResourcePolicy", m_resourcePolicy);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEndpointPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.PutEndpointPolicy"));
  return headers;
}
