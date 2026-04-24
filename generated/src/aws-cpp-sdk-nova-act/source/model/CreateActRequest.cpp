/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/CreateActRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateActRequest::SerializePayload() const {
  JsonValue payload;

  if (m_taskHasBeenSet) {
    payload.WithString("task", m_task);
  }

  if (m_toolSpecsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolSpecsJsonList(m_toolSpecs.size());
    for (unsigned toolSpecsIndex = 0; toolSpecsIndex < toolSpecsJsonList.GetLength(); ++toolSpecsIndex) {
      toolSpecsJsonList[toolSpecsIndex].AsObject(m_toolSpecs[toolSpecsIndex].Jsonize());
    }
    payload.WithArray("toolSpecs", std::move(toolSpecsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
