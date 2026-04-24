/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/EmailOverviewAIAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

EmailOverviewAIAgentConfiguration::EmailOverviewAIAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

EmailOverviewAIAgentConfiguration& EmailOverviewAIAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("emailOverviewAIPromptId")) {
    m_emailOverviewAIPromptId = jsonValue.GetString("emailOverviewAIPromptId");
    m_emailOverviewAIPromptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locale")) {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailOverviewAIAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_emailOverviewAIPromptIdHasBeenSet) {
    payload.WithString("emailOverviewAIPromptId", m_emailOverviewAIPromptId);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
