/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/UpdatePerformanceMonitorRequest.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePerformanceMonitorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetsToAddHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsToAddJsonList(m_targetsToAdd.size());
    for (unsigned targetsToAddIndex = 0; targetsToAddIndex < targetsToAddJsonList.GetLength(); ++targetsToAddIndex) {
      targetsToAddJsonList[targetsToAddIndex].AsObject(m_targetsToAdd[targetsToAddIndex].Jsonize());
    }
    payload.WithArray("targetsToAdd", std::move(targetsToAddJsonList));
  }

  if (m_targetsToRemoveHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsToRemoveJsonList(m_targetsToRemove.size());
    for (unsigned targetsToRemoveIndex = 0; targetsToRemoveIndex < targetsToRemoveJsonList.GetLength(); ++targetsToRemoveIndex) {
      targetsToRemoveJsonList[targetsToRemoveIndex].AsObject(m_targetsToRemove[targetsToRemoveIndex].Jsonize());
    }
    payload.WithArray("targetsToRemove", std::move(targetsToRemoveJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
