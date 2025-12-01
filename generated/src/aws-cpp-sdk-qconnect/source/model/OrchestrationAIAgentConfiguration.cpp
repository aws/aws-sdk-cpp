/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/OrchestrationAIAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

OrchestrationAIAgentConfiguration::OrchestrationAIAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

OrchestrationAIAgentConfiguration& OrchestrationAIAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("orchestrationAIPromptId")) {
    m_orchestrationAIPromptId = jsonValue.GetString("orchestrationAIPromptId");
    m_orchestrationAIPromptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("orchestrationAIGuardrailId")) {
    m_orchestrationAIGuardrailId = jsonValue.GetString("orchestrationAIGuardrailId");
    m_orchestrationAIGuardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolConfigurations")) {
    Aws::Utils::Array<JsonView> toolConfigurationsJsonList = jsonValue.GetArray("toolConfigurations");
    for (unsigned toolConfigurationsIndex = 0; toolConfigurationsIndex < toolConfigurationsJsonList.GetLength();
         ++toolConfigurationsIndex) {
      m_toolConfigurations.push_back(toolConfigurationsJsonList[toolConfigurationsIndex].AsObject());
    }
    m_toolConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectInstanceArn")) {
    m_connectInstanceArn = jsonValue.GetString("connectInstanceArn");
    m_connectInstanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locale")) {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestrationAIAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_orchestrationAIPromptIdHasBeenSet) {
    payload.WithString("orchestrationAIPromptId", m_orchestrationAIPromptId);
  }

  if (m_orchestrationAIGuardrailIdHasBeenSet) {
    payload.WithString("orchestrationAIGuardrailId", m_orchestrationAIGuardrailId);
  }

  if (m_toolConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolConfigurationsJsonList(m_toolConfigurations.size());
    for (unsigned toolConfigurationsIndex = 0; toolConfigurationsIndex < toolConfigurationsJsonList.GetLength();
         ++toolConfigurationsIndex) {
      toolConfigurationsJsonList[toolConfigurationsIndex].AsObject(m_toolConfigurations[toolConfigurationsIndex].Jsonize());
    }
    payload.WithArray("toolConfigurations", std::move(toolConfigurationsJsonList));
  }

  if (m_connectInstanceArnHasBeenSet) {
    payload.WithString("connectInstanceArn", m_connectInstanceArn);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
