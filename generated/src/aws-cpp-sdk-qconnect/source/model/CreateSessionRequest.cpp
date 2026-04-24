/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/CreateSessionRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_tagFilterHasBeenSet) {
    payload.WithObject("tagFilter", m_tagFilter.Jsonize());
  }

  if (m_aiAgentConfigurationHasBeenSet) {
    JsonValue aiAgentConfigurationJsonMap;
    for (auto& aiAgentConfigurationItem : m_aiAgentConfiguration) {
      aiAgentConfigurationJsonMap.WithObject(AIAgentTypeMapper::GetNameForAIAgentType(aiAgentConfigurationItem.first),
                                             aiAgentConfigurationItem.second.Jsonize());
    }
    payload.WithObject("aiAgentConfiguration", std::move(aiAgentConfigurationJsonMap));
  }

  if (m_contactArnHasBeenSet) {
    payload.WithString("contactArn", m_contactArn);
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

  if (m_removeOrchestratorConfigurationListHasBeenSet) {
    payload.WithBool("removeOrchestratorConfigurationList", m_removeOrchestratorConfigurationList);
  }

  return payload.View().WriteReadable();
}
