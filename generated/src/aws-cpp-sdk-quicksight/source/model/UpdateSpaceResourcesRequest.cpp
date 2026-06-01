/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateSpaceResourcesRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSpaceResourcesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_addResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> addResourcesJsonList(m_addResources.size());
    for (unsigned addResourcesIndex = 0; addResourcesIndex < addResourcesJsonList.GetLength(); ++addResourcesIndex) {
      addResourcesJsonList[addResourcesIndex].AsObject(m_addResources[addResourcesIndex].Jsonize());
    }
    payload.WithArray("AddResources", std::move(addResourcesJsonList));
  }

  if (m_removeResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeResourcesJsonList(m_removeResources.size());
    for (unsigned removeResourcesIndex = 0; removeResourcesIndex < removeResourcesJsonList.GetLength(); ++removeResourcesIndex) {
      removeResourcesJsonList[removeResourcesIndex].AsObject(m_removeResources[removeResourcesIndex].Jsonize());
    }
    payload.WithArray("RemoveResources", std::move(removeResourcesJsonList));
  }

  return payload.View().WriteReadable();
}
