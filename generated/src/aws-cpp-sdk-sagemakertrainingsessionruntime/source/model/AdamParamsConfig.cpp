/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/AdamParamsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

AdamParamsConfig::AdamParamsConfig(JsonView jsonValue) { *this = jsonValue; }

AdamParamsConfig& AdamParamsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("learningRate")) {
    m_learningRate = jsonValue.GetDouble("learningRate");
    m_learningRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beta1")) {
    m_beta1 = jsonValue.GetDouble("beta1");
    m_beta1HasBeenSet = true;
  }
  if (jsonValue.ValueExists("beta2")) {
    m_beta2 = jsonValue.GetDouble("beta2");
    m_beta2HasBeenSet = true;
  }
  if (jsonValue.ValueExists("eps")) {
    m_eps = jsonValue.GetDouble("eps");
    m_epsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weightDecay")) {
    m_weightDecay = jsonValue.GetDouble("weightDecay");
    m_weightDecayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gradClipNorm")) {
    m_gradClipNorm = jsonValue.GetDouble("gradClipNorm");
    m_gradClipNormHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loraPlusLrRatio")) {
    m_loraPlusLrRatio = jsonValue.GetDouble("loraPlusLrRatio");
    m_loraPlusLrRatioHasBeenSet = true;
  }
  return *this;
}

JsonValue AdamParamsConfig::Jsonize() const {
  JsonValue payload;

  if (m_learningRateHasBeenSet) {
    payload.WithDouble("learningRate", m_learningRate);
  }

  if (m_beta1HasBeenSet) {
    payload.WithDouble("beta1", m_beta1);
  }

  if (m_beta2HasBeenSet) {
    payload.WithDouble("beta2", m_beta2);
  }

  if (m_epsHasBeenSet) {
    payload.WithDouble("eps", m_eps);
  }

  if (m_weightDecayHasBeenSet) {
    payload.WithDouble("weightDecay", m_weightDecay);
  }

  if (m_gradClipNormHasBeenSet) {
    payload.WithDouble("gradClipNorm", m_gradClipNorm);
  }

  if (m_loraPlusLrRatioHasBeenSet) {
    payload.WithDouble("loraPlusLrRatio", m_loraPlusLrRatio);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
