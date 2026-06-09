/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateAgentRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_spacesHasBeenSet) {
    Aws::Utils::Array<JsonValue> spacesJsonList(m_spaces.size());
    for (unsigned spacesIndex = 0; spacesIndex < spacesJsonList.GetLength(); ++spacesIndex) {
      spacesJsonList[spacesIndex].AsString(m_spaces[spacesIndex]);
    }
    payload.WithArray("Spaces", std::move(spacesJsonList));
  }

  if (m_actionConnectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionConnectorsJsonList(m_actionConnectors.size());
    for (unsigned actionConnectorsIndex = 0; actionConnectorsIndex < actionConnectorsJsonList.GetLength(); ++actionConnectorsIndex) {
      actionConnectorsJsonList[actionConnectorsIndex].AsString(m_actionConnectors[actionConnectorsIndex]);
    }
    payload.WithArray("ActionConnectors", std::move(actionConnectorsJsonList));
  }

  if (m_agentIdHasBeenSet) {
    payload.WithString("AgentId", m_agentId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_iconIdHasBeenSet) {
    payload.WithString("IconId", m_iconId);
  }

  if (m_starterPromptsHasBeenSet) {
    Aws::Utils::Array<JsonValue> starterPromptsJsonList(m_starterPrompts.size());
    for (unsigned starterPromptsIndex = 0; starterPromptsIndex < starterPromptsJsonList.GetLength(); ++starterPromptsIndex) {
      starterPromptsJsonList[starterPromptsIndex].AsString(m_starterPrompts[starterPromptsIndex]);
    }
    payload.WithArray("StarterPrompts", std::move(starterPromptsJsonList));
  }

  if (m_welcomeMessageHasBeenSet) {
    payload.WithString("WelcomeMessage", m_welcomeMessage);
  }

  if (m_agentLifecycleHasBeenSet) {
    payload.WithString("AgentLifecycle", AgentLifecycleMapper::GetNameForAgentLifecycle(m_agentLifecycle));
  }

  if (m_customPromptInputHasBeenSet) {
    payload.WithObject("CustomPromptInput", m_customPromptInput.Jsonize());
  }

  return payload.View().WriteReadable();
}
