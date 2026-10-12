/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/OperationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

OperationConfig::OperationConfig(JsonView jsonValue) { *this = jsonValue; }

OperationConfig& OperationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("forward")) {
    m_forward = jsonValue.GetObject("forward");
    m_forwardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forwardBackward")) {
    m_forwardBackward = jsonValue.GetObject("forwardBackward");
    m_forwardBackwardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("optimizerStep")) {
    m_optimizerStep = jsonValue.GetObject("optimizerStep");
    m_optimizerStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("saveWeights")) {
    m_saveWeights = jsonValue.GetObject("saveWeights");
    m_saveWeightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("saveState")) {
    m_saveState = jsonValue.GetObject("saveState");
    m_saveStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadState")) {
    m_loadState = jsonValue.GetObject("loadState");
    m_loadStateHasBeenSet = true;
  }
  return *this;
}

JsonValue OperationConfig::Jsonize() const {
  JsonValue payload;

  if (m_forwardHasBeenSet) {
    payload.WithObject("forward", m_forward.Jsonize());
  }

  if (m_forwardBackwardHasBeenSet) {
    payload.WithObject("forwardBackward", m_forwardBackward.Jsonize());
  }

  if (m_optimizerStepHasBeenSet) {
    payload.WithObject("optimizerStep", m_optimizerStep.Jsonize());
  }

  if (m_saveWeightsHasBeenSet) {
    payload.WithObject("saveWeights", m_saveWeights.Jsonize());
  }

  if (m_saveStateHasBeenSet) {
    payload.WithObject("saveState", m_saveState.Jsonize());
  }

  if (m_loadStateHasBeenSet) {
    payload.WithObject("loadState", m_loadState.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
