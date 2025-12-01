/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/UpdateAssistantAIAgentRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssistantAIAgentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aiAgentTypeHasBeenSet) {
    payload.WithString("aiAgentType", AIAgentTypeMapper::GetNameForAIAgentType(m_aiAgentType));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_orchestratorConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> orchestratorConfigurationListJsonList(m_orchestratorConfigurationList.size());
    for (unsigned orchestratorConfigurationListIndex = 0;
         orchestratorConfigurationListIndex < orchestratorConfigurationListJsonList.GetLength(); ++orchestratorConfigurationListIndex) {
      orchestratorConfigurationListJsonList[orchestratorConfigurationListIndex].AsObject(
          m_orchestratorConfigurationList[orchestratorConfigurationListIndex].Jsonize());
    }
    payload.WithArray("orchestratorConfigurationList", std::move(orchestratorConfigurationListJsonList));
  }

  return payload.View().WriteReadable();
}
