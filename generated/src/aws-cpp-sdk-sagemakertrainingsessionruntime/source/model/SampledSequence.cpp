/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SampledSequence.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SampledSequence::SampledSequence(JsonView jsonValue) { *this = jsonValue; }

SampledSequence& SampledSequence::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stopReason")) {
    m_stopReason = StopReasonMapper::GetStopReasonForName(jsonValue.GetString("stopReason"));
    m_stopReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokens")) {
    Aws::Utils::Array<JsonView> tokensJsonList = jsonValue.GetArray("tokens");
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsInteger());
    }
    m_tokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logprobs")) {
    Aws::Utils::Array<JsonView> logprobsJsonList = jsonValue.GetArray("logprobs");
    for (unsigned logprobsIndex = 0; logprobsIndex < logprobsJsonList.GetLength(); ++logprobsIndex) {
      m_logprobs.push_back(logprobsJsonList[logprobsIndex].AsDouble());
    }
    m_logprobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenUsage")) {
    m_tokenUsage = jsonValue.GetObject("tokenUsage");
    m_tokenUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue SampledSequence::Jsonize() const {
  JsonValue payload;

  if (m_stopReasonHasBeenSet) {
    payload.WithString("stopReason", StopReasonMapper::GetNameForStopReason(m_stopReason));
  }

  if (m_tokensHasBeenSet) {
    Aws::Utils::Array<JsonValue> tokensJsonList(m_tokens.size());
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      tokensJsonList[tokensIndex].AsInteger(m_tokens[tokensIndex]);
    }
    payload.WithArray("tokens", std::move(tokensJsonList));
  }

  if (m_logprobsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logprobsJsonList(m_logprobs.size());
    for (unsigned logprobsIndex = 0; logprobsIndex < logprobsJsonList.GetLength(); ++logprobsIndex) {
      logprobsJsonList[logprobsIndex].AsDouble(m_logprobs[logprobsIndex]);
    }
    payload.WithArray("logprobs", std::move(logprobsJsonList));
  }

  if (m_tokenUsageHasBeenSet) {
    payload.WithObject("tokenUsage", m_tokenUsage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
