/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SampleConfig::SampleConfig(JsonView jsonValue) { *this = jsonValue; }

SampleConfig& SampleConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prompt")) {
    m_prompt = jsonValue.GetObject("prompt");
    m_promptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numSamples")) {
    m_numSamples = jsonValue.GetInteger("numSamples");
    m_numSamplesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("samplingParams")) {
    m_samplingParams = jsonValue.GetObject("samplingParams");
    m_samplingParamsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includePromptLogprobs")) {
    m_includePromptLogprobs = jsonValue.GetBool("includePromptLogprobs");
    m_includePromptLogprobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topkPromptLogprobs")) {
    m_topkPromptLogprobs = jsonValue.GetInteger("topkPromptLogprobs");
    m_topkPromptLogprobsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleConfig::Jsonize() const {
  JsonValue payload;

  if (m_promptHasBeenSet) {
    payload.WithObject("prompt", m_prompt.Jsonize());
  }

  if (m_numSamplesHasBeenSet) {
    payload.WithInteger("numSamples", m_numSamples);
  }

  if (m_samplingParamsHasBeenSet) {
    payload.WithObject("samplingParams", m_samplingParams.Jsonize());
  }

  if (m_includePromptLogprobsHasBeenSet) {
    payload.WithBool("includePromptLogprobs", m_includePromptLogprobs);
  }

  if (m_topkPromptLogprobsHasBeenSet) {
    payload.WithInteger("topkPromptLogprobs", m_topkPromptLogprobs);
  }

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
