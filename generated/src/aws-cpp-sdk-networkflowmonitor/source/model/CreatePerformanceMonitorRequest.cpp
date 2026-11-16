/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/CreatePerformanceMonitorRequest.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePerformanceMonitorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_monitorNameHasBeenSet) {
    payload.WithString("monitorName", m_monitorName);
  }

  if (m_scopeArnHasBeenSet) {
    payload.WithString("scopeArn", m_scopeArn);
  }

  if (m_targetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
    for (unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex) {
      targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
    }
    payload.WithArray("targets", std::move(targetsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
