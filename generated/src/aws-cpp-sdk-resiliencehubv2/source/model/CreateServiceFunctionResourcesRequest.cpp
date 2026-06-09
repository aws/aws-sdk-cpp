/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/CreateServiceFunctionResourcesRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateServiceFunctionResourcesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_serviceFunctionIdHasBeenSet) {
    payload.WithString("serviceFunctionId", m_serviceFunctionId);
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  return payload.View().WriteReadable();
}
