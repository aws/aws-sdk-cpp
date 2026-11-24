/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateGlobalInferenceGatewayRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGlobalInferenceGatewayRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_routingHasBeenSet) {
    payload.WithObject("Routing", m_routing.Jsonize());
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("ExecutionRoleArn", m_executionRoleArn);
  }

  if (m_gatewaysHasBeenSet) {
    Aws::Utils::Array<JsonValue> gatewaysJsonList(m_gateways.size());
    for (unsigned gatewaysIndex = 0; gatewaysIndex < gatewaysJsonList.GetLength(); ++gatewaysIndex) {
      gatewaysJsonList[gatewaysIndex].AsObject(m_gateways[gatewaysIndex].Jsonize());
    }
    payload.WithArray("Gateways", std::move(gatewaysJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
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

Aws::Http::HeaderValueCollection CreateGlobalInferenceGatewayRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateGlobalInferenceGateway"));
  return headers;
}
