/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/UpdateInferenceRouterRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateInferenceRouterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inferenceRouterNameHasBeenSet) {
    payload.WithString("InferenceRouterName", m_inferenceRouterName);
  }

  if (m_routingTargetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> routingTargetsJsonList(m_routingTargets.size());
    for (unsigned routingTargetsIndex = 0; routingTargetsIndex < routingTargetsJsonList.GetLength(); ++routingTargetsIndex) {
      routingTargetsJsonList[routingTargetsIndex].AsObject(m_routingTargets[routingTargetsIndex].Jsonize());
    }
    payload.WithArray("RoutingTargets", std::move(routingTargetsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInferenceRouterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateInferenceRouter"));
  return headers;
}
