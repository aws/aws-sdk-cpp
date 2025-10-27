/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AIAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AIAgentConfiguration::AIAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

AIAgentConfiguration& AIAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("manualSearchAIAgentConfiguration")) {
    m_manualSearchAIAgentConfiguration = jsonValue.GetObject("manualSearchAIAgentConfiguration");
    m_manualSearchAIAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("answerRecommendationAIAgentConfiguration")) {
    m_answerRecommendationAIAgentConfiguration = jsonValue.GetObject("answerRecommendationAIAgentConfiguration");
    m_answerRecommendationAIAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("selfServiceAIAgentConfiguration")) {
    m_selfServiceAIAgentConfiguration = jsonValue.GetObject("selfServiceAIAgentConfiguration");
    m_selfServiceAIAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailResponseAIAgentConfiguration")) {
    m_emailResponseAIAgentConfiguration = jsonValue.GetObject("emailResponseAIAgentConfiguration");
    m_emailResponseAIAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailOverviewAIAgentConfiguration")) {
    m_emailOverviewAIAgentConfiguration = jsonValue.GetObject("emailOverviewAIAgentConfiguration");
    m_emailOverviewAIAgentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailGenerativeAnswerAIAgentConfiguration")) {
    m_emailGenerativeAnswerAIAgentConfiguration = jsonValue.GetObject("emailGenerativeAnswerAIAgentConfiguration");
    m_emailGenerativeAnswerAIAgentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_manualSearchAIAgentConfigurationHasBeenSet) {
    payload.WithObject("manualSearchAIAgentConfiguration", m_manualSearchAIAgentConfiguration.Jsonize());
  }

  if (m_answerRecommendationAIAgentConfigurationHasBeenSet) {
    payload.WithObject("answerRecommendationAIAgentConfiguration", m_answerRecommendationAIAgentConfiguration.Jsonize());
  }

  if (m_selfServiceAIAgentConfigurationHasBeenSet) {
    payload.WithObject("selfServiceAIAgentConfiguration", m_selfServiceAIAgentConfiguration.Jsonize());
  }

  if (m_emailResponseAIAgentConfigurationHasBeenSet) {
    payload.WithObject("emailResponseAIAgentConfiguration", m_emailResponseAIAgentConfiguration.Jsonize());
  }

  if (m_emailOverviewAIAgentConfigurationHasBeenSet) {
    payload.WithObject("emailOverviewAIAgentConfiguration", m_emailOverviewAIAgentConfiguration.Jsonize());
  }

  if (m_emailGenerativeAnswerAIAgentConfigurationHasBeenSet) {
    payload.WithObject("emailGenerativeAnswerAIAgentConfiguration", m_emailGenerativeAnswerAIAgentConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
