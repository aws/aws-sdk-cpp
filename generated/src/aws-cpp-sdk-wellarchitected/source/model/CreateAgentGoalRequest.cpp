/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/CreateAgentGoalRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgentGoalRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(PillarMapper::GetNameForPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload.View().WriteReadable();
}
