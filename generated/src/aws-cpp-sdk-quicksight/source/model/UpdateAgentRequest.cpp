/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateAgentRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentRequest::SerializePayload() const {
  JsonValue payload;

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

  if (m_customPromptInputHasBeenSet) {
    payload.WithObject("CustomPromptInput", m_customPromptInput.Jsonize());
  }

  if (m_spacesToAddHasBeenSet) {
    Aws::Utils::Array<JsonValue> spacesToAddJsonList(m_spacesToAdd.size());
    for (unsigned spacesToAddIndex = 0; spacesToAddIndex < spacesToAddJsonList.GetLength(); ++spacesToAddIndex) {
      spacesToAddJsonList[spacesToAddIndex].AsString(m_spacesToAdd[spacesToAddIndex]);
    }
    payload.WithArray("SpacesToAdd", std::move(spacesToAddJsonList));
  }

  if (m_spacesToRemoveHasBeenSet) {
    Aws::Utils::Array<JsonValue> spacesToRemoveJsonList(m_spacesToRemove.size());
    for (unsigned spacesToRemoveIndex = 0; spacesToRemoveIndex < spacesToRemoveJsonList.GetLength(); ++spacesToRemoveIndex) {
      spacesToRemoveJsonList[spacesToRemoveIndex].AsString(m_spacesToRemove[spacesToRemoveIndex]);
    }
    payload.WithArray("SpacesToRemove", std::move(spacesToRemoveJsonList));
  }

  if (m_actionConnectorsToAddHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionConnectorsToAddJsonList(m_actionConnectorsToAdd.size());
    for (unsigned actionConnectorsToAddIndex = 0; actionConnectorsToAddIndex < actionConnectorsToAddJsonList.GetLength();
         ++actionConnectorsToAddIndex) {
      actionConnectorsToAddJsonList[actionConnectorsToAddIndex].AsString(m_actionConnectorsToAdd[actionConnectorsToAddIndex]);
    }
    payload.WithArray("ActionConnectorsToAdd", std::move(actionConnectorsToAddJsonList));
  }

  if (m_actionConnectorsToRemoveHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionConnectorsToRemoveJsonList(m_actionConnectorsToRemove.size());
    for (unsigned actionConnectorsToRemoveIndex = 0; actionConnectorsToRemoveIndex < actionConnectorsToRemoveJsonList.GetLength();
         ++actionConnectorsToRemoveIndex) {
      actionConnectorsToRemoveJsonList[actionConnectorsToRemoveIndex].AsString(m_actionConnectorsToRemove[actionConnectorsToRemoveIndex]);
    }
    payload.WithArray("ActionConnectorsToRemove", std::move(actionConnectorsToRemoveJsonList));
  }

  return payload.View().WriteReadable();
}
