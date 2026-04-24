/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/NoteTakingAIAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

NoteTakingAIAgentConfiguration::NoteTakingAIAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

NoteTakingAIAgentConfiguration& NoteTakingAIAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("noteTakingAIPromptId")) {
    m_noteTakingAIPromptId = jsonValue.GetString("noteTakingAIPromptId");
    m_noteTakingAIPromptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("noteTakingAIGuardrailId")) {
    m_noteTakingAIGuardrailId = jsonValue.GetString("noteTakingAIGuardrailId");
    m_noteTakingAIGuardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locale")) {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue NoteTakingAIAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_noteTakingAIPromptIdHasBeenSet) {
    payload.WithString("noteTakingAIPromptId", m_noteTakingAIPromptId);
  }

  if (m_noteTakingAIGuardrailIdHasBeenSet) {
    payload.WithString("noteTakingAIGuardrailId", m_noteTakingAIGuardrailId);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
