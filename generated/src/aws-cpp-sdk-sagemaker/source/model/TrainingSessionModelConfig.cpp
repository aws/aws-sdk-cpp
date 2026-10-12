/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingSessionModelConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingSessionModelConfig::TrainingSessionModelConfig(JsonView jsonValue) { *this = jsonValue; }

TrainingSessionModelConfig& TrainingSessionModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseModelArn")) {
    m_baseModelArn = jsonValue.GetString("BaseModelArn");
    m_baseModelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcceptEula")) {
    m_acceptEula = jsonValue.GetBool("AcceptEula");
    m_acceptEulaHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingSessionModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_baseModelArnHasBeenSet) {
    payload.WithString("BaseModelArn", m_baseModelArn);
  }

  if (m_acceptEulaHasBeenSet) {
    payload.WithBool("AcceptEula", m_acceptEula);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
