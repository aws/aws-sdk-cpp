/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SaveWeightsResult::SaveWeightsResult(JsonView jsonValue) { *this = jsonValue; }

SaveWeightsResult& SaveWeightsResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SaveWeightsResult::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
