/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/UpdateLinkModuleFlowRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLinkModuleFlowRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_modulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> modulesJsonList(m_modules.size());
    for (unsigned modulesIndex = 0; modulesIndex < modulesJsonList.GetLength(); ++modulesIndex) {
      modulesJsonList[modulesIndex].AsObject(m_modules[modulesIndex].Jsonize());
    }
    payload.WithArray("modules", std::move(modulesJsonList));
  }

  return payload.View().WriteReadable();
}
