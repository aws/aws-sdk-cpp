/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SaveWeightsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SaveWeightsConfig::SaveWeightsConfig(JsonView jsonValue) { *this = jsonValue; }

SaveWeightsConfig& SaveWeightsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mergeWeights")) {
    m_mergeWeights = jsonValue.GetBool("mergeWeights");
    m_mergeWeightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SaveWeightsConfig::Jsonize() const {
  JsonValue payload;

  if (m_mergeWeightsHasBeenSet) {
    payload.WithBool("mergeWeights", m_mergeWeights);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
