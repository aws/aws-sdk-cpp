/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Agent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Agent::Agent(JsonView jsonValue) { *this = jsonValue; }

Agent& Agent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Spaces")) {
    Aws::Utils::Array<JsonView> spacesJsonList = jsonValue.GetArray("Spaces");
    for (unsigned spacesIndex = 0; spacesIndex < spacesJsonList.GetLength(); ++spacesIndex) {
      m_spaces.push_back(spacesJsonList[spacesIndex].AsString());
    }
    m_spacesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActionConnectors")) {
    Aws::Utils::Array<JsonView> actionConnectorsJsonList = jsonValue.GetArray("ActionConnectors");
    for (unsigned actionConnectorsIndex = 0; actionConnectorsIndex < actionConnectorsJsonList.GetLength(); ++actionConnectorsIndex) {
      m_actionConnectors.push_back(actionConnectorsJsonList[actionConnectorsIndex].AsString());
    }
    m_actionConnectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IconId")) {
    m_iconId = jsonValue.GetString("IconId");
    m_iconIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StarterPrompts")) {
    Aws::Utils::Array<JsonView> starterPromptsJsonList = jsonValue.GetArray("StarterPrompts");
    for (unsigned starterPromptsIndex = 0; starterPromptsIndex < starterPromptsJsonList.GetLength(); ++starterPromptsIndex) {
      m_starterPrompts.push_back(starterPromptsJsonList[starterPromptsIndex].AsString());
    }
    m_starterPromptsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WelcomeMessage")) {
    m_welcomeMessage = jsonValue.GetString("WelcomeMessage");
    m_welcomeMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentId")) {
    m_agentId = jsonValue.GetString("AgentId");
    m_agentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentLifecycle")) {
    m_agentLifecycle = AgentLifecycleMapper::GetAgentLifecycleForName(jsonValue.GetString("AgentLifecycle"));
    m_agentLifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentStatus")) {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("AgentStatus"));
    m_agentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Creator")) {
    m_creator = jsonValue.GetString("Creator");
    m_creatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomPromptInterface")) {
    m_customPromptInterface = jsonValue.GetObject("CustomPromptInterface");
    m_customPromptInterfaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Agent::Jsonize() const {
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

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_iconIdHasBeenSet) {
    payload.WithString("IconId", m_iconId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
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

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_agentIdHasBeenSet) {
    payload.WithString("AgentId", m_agentId);
  }

  if (m_agentLifecycleHasBeenSet) {
    payload.WithString("AgentLifecycle", AgentLifecycleMapper::GetNameForAgentLifecycle(m_agentLifecycle));
  }

  if (m_agentStatusHasBeenSet) {
    payload.WithString("AgentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_creatorHasBeenSet) {
    payload.WithString("Creator", m_creator);
  }

  if (m_customPromptInterfaceHasBeenSet) {
    payload.WithObject("CustomPromptInterface", m_customPromptInterface.Jsonize());
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
