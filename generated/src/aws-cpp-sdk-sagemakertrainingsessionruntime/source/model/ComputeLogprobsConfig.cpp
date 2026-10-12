/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ComputeLogprobsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

ComputeLogprobsConfig::ComputeLogprobsConfig(JsonView jsonValue) { *this = jsonValue; }

ComputeLogprobsConfig& ComputeLogprobsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prompt")) {
    m_prompt = jsonValue.GetObject("prompt");
    m_promptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeLogprobsConfig::Jsonize() const {
  JsonValue payload;

  if (m_promptHasBeenSet) {
    payload.WithObject("prompt", m_prompt.Jsonize());
  }

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
