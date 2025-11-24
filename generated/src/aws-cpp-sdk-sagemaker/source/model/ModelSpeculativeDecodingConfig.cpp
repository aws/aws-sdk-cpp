/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ModelSpeculativeDecodingConfig::ModelSpeculativeDecodingConfig(JsonView jsonValue) { *this = jsonValue; }

ModelSpeculativeDecodingConfig& ModelSpeculativeDecodingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Technique")) {
    m_technique = ModelSpeculativeDecodingTechniqueMapper::GetModelSpeculativeDecodingTechniqueForName(jsonValue.GetString("Technique"));
    m_techniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingDataSource")) {
    m_trainingDataSource = jsonValue.GetObject("TrainingDataSource");
    m_trainingDataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelSpeculativeDecodingConfig::Jsonize() const {
  JsonValue payload;

  if (m_techniqueHasBeenSet) {
    payload.WithString("Technique", ModelSpeculativeDecodingTechniqueMapper::GetNameForModelSpeculativeDecodingTechnique(m_technique));
  }

  if (m_trainingDataSourceHasBeenSet) {
    payload.WithObject("TrainingDataSource", m_trainingDataSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
