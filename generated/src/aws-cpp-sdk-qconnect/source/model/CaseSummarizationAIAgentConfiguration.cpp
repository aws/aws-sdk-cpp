/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/CaseSummarizationAIAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

CaseSummarizationAIAgentConfiguration::CaseSummarizationAIAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

CaseSummarizationAIAgentConfiguration& CaseSummarizationAIAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseSummarizationAIPromptId")) {
    m_caseSummarizationAIPromptId = jsonValue.GetString("caseSummarizationAIPromptId");
    m_caseSummarizationAIPromptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseSummarizationAIGuardrailId")) {
    m_caseSummarizationAIGuardrailId = jsonValue.GetString("caseSummarizationAIGuardrailId");
    m_caseSummarizationAIGuardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locale")) {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseSummarizationAIAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_caseSummarizationAIPromptIdHasBeenSet) {
    payload.WithString("caseSummarizationAIPromptId", m_caseSummarizationAIPromptId);
  }

  if (m_caseSummarizationAIGuardrailIdHasBeenSet) {
    payload.WithString("caseSummarizationAIGuardrailId", m_caseSummarizationAIGuardrailId);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
