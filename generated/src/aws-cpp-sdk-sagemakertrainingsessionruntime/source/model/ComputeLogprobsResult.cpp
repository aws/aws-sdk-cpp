/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

ComputeLogprobsResult::ComputeLogprobsResult(JsonView jsonValue) { *this = jsonValue; }

ComputeLogprobsResult& ComputeLogprobsResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logprobs")) {
    Aws::Utils::Array<JsonView> logprobsJsonList = jsonValue.GetArray("logprobs");
    for (unsigned logprobsIndex = 0; logprobsIndex < logprobsJsonList.GetLength(); ++logprobsIndex) {
      m_logprobs.push_back(logprobsJsonList[logprobsIndex].AsDouble());
    }
    m_logprobsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeLogprobsResult::Jsonize() const {
  JsonValue payload;

  if (m_logprobsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logprobsJsonList(m_logprobs.size());
    for (unsigned logprobsIndex = 0; logprobsIndex < logprobsJsonList.GetLength(); ++logprobsIndex) {
      logprobsJsonList[logprobsIndex].AsDouble(m_logprobs[logprobsIndex]);
    }
    payload.WithArray("logprobs", std::move(logprobsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
