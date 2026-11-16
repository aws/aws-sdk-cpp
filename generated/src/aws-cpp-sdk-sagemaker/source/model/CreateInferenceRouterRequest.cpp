/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateInferenceRouterRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateInferenceRouterRequest::SerializePayload() const {
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

Aws::Http::HeaderValueCollection CreateInferenceRouterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateInferenceRouter"));
  return headers;
}
