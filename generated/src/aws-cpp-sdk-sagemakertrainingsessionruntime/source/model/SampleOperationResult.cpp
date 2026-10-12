/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleOperationResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SampleOperationResult::SampleOperationResult(JsonView jsonValue) { *this = jsonValue; }

SampleOperationResult& SampleOperationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sample")) {
    m_sample = jsonValue.GetObject("sample");
    m_sampleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeLogprobs")) {
    m_computeLogprobs = jsonValue.GetObject("computeLogprobs");
    m_computeLogprobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadWeightsForSampling")) {
    m_loadWeightsForSampling = jsonValue.GetObject("loadWeightsForSampling");
    m_loadWeightsForSamplingHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleOperationResult::Jsonize() const {
  JsonValue payload;

  if (m_sampleHasBeenSet) {
    payload.WithObject("sample", m_sample.Jsonize());
  }

  if (m_computeLogprobsHasBeenSet) {
    payload.WithObject("computeLogprobs", m_computeLogprobs.Jsonize());
  }

  if (m_loadWeightsForSamplingHasBeenSet) {
    payload.WithObject("loadWeightsForSampling", m_loadWeightsForSampling.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
