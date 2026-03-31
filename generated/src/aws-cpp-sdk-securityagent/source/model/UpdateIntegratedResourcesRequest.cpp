/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateIntegratedResourcesRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIntegratedResourcesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_itemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
    }
    payload.WithArray("items", std::move(itemsJsonList));
  }

  return payload.View().WriteReadable();
}
