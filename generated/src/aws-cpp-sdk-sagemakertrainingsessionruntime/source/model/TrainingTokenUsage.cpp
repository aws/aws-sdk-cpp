/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/TrainingTokenUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

TrainingTokenUsage::TrainingTokenUsage(JsonView jsonValue) { *this = jsonValue; }

TrainingTokenUsage& TrainingTokenUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("trainingTokens")) {
    m_trainingTokens = jsonValue.GetInteger("trainingTokens");
    m_trainingTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingTokenUsage::Jsonize() const {
  JsonValue payload;

  if (m_trainingTokensHasBeenSet) {
    payload.WithInteger("trainingTokens", m_trainingTokens);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
