/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/OptimizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

OptimizationConfig::OptimizationConfig(JsonView jsonValue) { *this = jsonValue; }

OptimizationConfig& OptimizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelQuantizationConfig")) {
    m_modelQuantizationConfig = jsonValue.GetObject("ModelQuantizationConfig");
    m_modelQuantizationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelCompilationConfig")) {
    m_modelCompilationConfig = jsonValue.GetObject("ModelCompilationConfig");
    m_modelCompilationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelShardingConfig")) {
    m_modelShardingConfig = jsonValue.GetObject("ModelShardingConfig");
    m_modelShardingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelSpeculativeDecodingConfig")) {
    m_modelSpeculativeDecodingConfig = jsonValue.GetObject("ModelSpeculativeDecodingConfig");
    m_modelSpeculativeDecodingConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelQuantizationConfigHasBeenSet) {
    payload.WithObject("ModelQuantizationConfig", m_modelQuantizationConfig.Jsonize());
  }

  if (m_modelCompilationConfigHasBeenSet) {
    payload.WithObject("ModelCompilationConfig", m_modelCompilationConfig.Jsonize());
  }

  if (m_modelShardingConfigHasBeenSet) {
    payload.WithObject("ModelShardingConfig", m_modelShardingConfig.Jsonize());
  }

  if (m_modelSpeculativeDecodingConfigHasBeenSet) {
    payload.WithObject("ModelSpeculativeDecodingConfig", m_modelSpeculativeDecodingConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
