/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/OptimizerStepConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

OptimizerStepConfig::OptimizerStepConfig(JsonView jsonValue) { *this = jsonValue; }

OptimizerStepConfig& OptimizerStepConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("adamParamsConfig")) {
    m_adamParamsConfig = jsonValue.GetObject("adamParamsConfig");
    m_adamParamsConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizerStepConfig::Jsonize() const {
  JsonValue payload;

  if (m_adamParamsConfigHasBeenSet) {
    payload.WithObject("adamParamsConfig", m_adamParamsConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
