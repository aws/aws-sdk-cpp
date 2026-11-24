/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/UpdateGlobalInferenceGatewayRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGlobalInferenceGatewayRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_routingHasBeenSet) {
    payload.WithObject("Routing", m_routing.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGlobalInferenceGatewayRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateGlobalInferenceGateway"));
  return headers;
}
