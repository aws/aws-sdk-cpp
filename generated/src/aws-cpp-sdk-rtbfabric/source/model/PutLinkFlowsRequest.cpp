/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/PutLinkFlowsRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutLinkFlowsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_lockTokenHasBeenSet) {
    payload.WithString("lockToken", m_lockToken);
  }

  if (m_flowsHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowsJsonList(m_flows.size());
    for (unsigned flowsIndex = 0; flowsIndex < flowsJsonList.GetLength(); ++flowsIndex) {
      flowsJsonList[flowsIndex].AsObject(m_flows[flowsIndex].Jsonize());
    }
    payload.WithArray("flows", std::move(flowsJsonList));
  }

  return payload.View().WriteReadable();
}
