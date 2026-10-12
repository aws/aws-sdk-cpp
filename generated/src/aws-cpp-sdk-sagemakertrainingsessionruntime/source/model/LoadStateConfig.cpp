/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadStateConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

LoadStateConfig::LoadStateConfig(JsonView jsonValue) { *this = jsonValue; }

LoadStateConfig& LoadStateConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadOptimizer")) {
    m_loadOptimizer = jsonValue.GetBool("loadOptimizer");
    m_loadOptimizerHasBeenSet = true;
  }
  return *this;
}

JsonValue LoadStateConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  if (m_loadOptimizerHasBeenSet) {
    payload.WithBool("loadOptimizer", m_loadOptimizer);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
