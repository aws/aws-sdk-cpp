/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/LoadWeightsForSamplingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

LoadWeightsForSamplingConfig::LoadWeightsForSamplingConfig(JsonView jsonValue) { *this = jsonValue; }

LoadWeightsForSamplingConfig& LoadWeightsForSamplingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LoadWeightsForSamplingConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
