/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AIPromptInferenceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AIPromptInferenceConfiguration::AIPromptInferenceConfiguration(JsonView jsonValue) { *this = jsonValue; }

AIPromptInferenceConfiguration& AIPromptInferenceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("temperature")) {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topP")) {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topK")) {
    m_topK = jsonValue.GetInteger("topK");
    m_topKHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTokensToSample")) {
    m_maxTokensToSample = jsonValue.GetInteger("maxTokensToSample");
    m_maxTokensToSampleHasBeenSet = true;
  }
  return *this;
}

JsonValue AIPromptInferenceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_temperatureHasBeenSet) {
    payload.WithDouble("temperature", m_temperature);
  }

  if (m_topPHasBeenSet) {
    payload.WithDouble("topP", m_topP);
  }

  if (m_topKHasBeenSet) {
    payload.WithInteger("topK", m_topK);
  }

  if (m_maxTokensToSampleHasBeenSet) {
    payload.WithInteger("maxTokensToSample", m_maxTokensToSample);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
