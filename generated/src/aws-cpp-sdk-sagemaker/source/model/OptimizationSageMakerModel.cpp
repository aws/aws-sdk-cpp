/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/OptimizationSageMakerModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

OptimizationSageMakerModel::OptimizationSageMakerModel(JsonView jsonValue) { *this = jsonValue; }

OptimizationSageMakerModel& OptimizationSageMakerModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelName")) {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationSageMakerModel::Jsonize() const {
  JsonValue payload;

  if (m_modelNameHasBeenSet) {
    payload.WithString("ModelName", m_modelName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
