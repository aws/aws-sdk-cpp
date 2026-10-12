/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SamplingParams.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SamplingParams::SamplingParams(JsonView jsonValue) { *this = jsonValue; }

SamplingParams& SamplingParams::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxTokens")) {
    m_maxTokens = jsonValue.GetInteger("maxTokens");
    m_maxTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("temperature")) {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topK")) {
    m_topK = jsonValue.GetInteger("topK");
    m_topKHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topP")) {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("seed")) {
    m_seed = jsonValue.GetInteger("seed");
    m_seedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stop")) {
    Aws::Utils::Array<JsonView> stopJsonList = jsonValue.GetArray("stop");
    for (unsigned stopIndex = 0; stopIndex < stopJsonList.GetLength(); ++stopIndex) {
      m_stop.push_back(stopJsonList[stopIndex].AsString());
    }
    m_stopHasBeenSet = true;
  }
  return *this;
}

JsonValue SamplingParams::Jsonize() const {
  JsonValue payload;

  if (m_maxTokensHasBeenSet) {
    payload.WithInteger("maxTokens", m_maxTokens);
  }

  if (m_temperatureHasBeenSet) {
    payload.WithDouble("temperature", m_temperature);
  }

  if (m_topKHasBeenSet) {
    payload.WithInteger("topK", m_topK);
  }

  if (m_topPHasBeenSet) {
    payload.WithDouble("topP", m_topP);
  }

  if (m_seedHasBeenSet) {
    payload.WithInteger("seed", m_seed);
  }

  if (m_stopHasBeenSet) {
    Aws::Utils::Array<JsonValue> stopJsonList(m_stop.size());
    for (unsigned stopIndex = 0; stopIndex < stopJsonList.GetLength(); ++stopIndex) {
      stopJsonList[stopIndex].AsString(m_stop[stopIndex]);
    }
    payload.WithArray("stop", std::move(stopJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
