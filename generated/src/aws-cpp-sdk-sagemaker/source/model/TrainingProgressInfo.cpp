/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingProgressInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingProgressInfo::TrainingProgressInfo(JsonView jsonValue) { *this = jsonValue; }

TrainingProgressInfo& TrainingProgressInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalStepCountPerEpoch")) {
    m_totalStepCountPerEpoch = jsonValue.GetInt64("TotalStepCountPerEpoch");
    m_totalStepCountPerEpochHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentStep")) {
    m_currentStep = jsonValue.GetInt64("CurrentStep");
    m_currentStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentEpoch")) {
    m_currentEpoch = jsonValue.GetInt64("CurrentEpoch");
    m_currentEpochHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxEpoch")) {
    m_maxEpoch = jsonValue.GetInt64("MaxEpoch");
    m_maxEpochHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingProgressInfo::Jsonize() const {
  JsonValue payload;

  if (m_totalStepCountPerEpochHasBeenSet) {
    payload.WithInt64("TotalStepCountPerEpoch", m_totalStepCountPerEpoch);
  }

  if (m_currentStepHasBeenSet) {
    payload.WithInt64("CurrentStep", m_currentStep);
  }

  if (m_currentEpochHasBeenSet) {
    payload.WithInt64("CurrentEpoch", m_currentEpoch);
  }

  if (m_maxEpochHasBeenSet) {
    payload.WithInt64("MaxEpoch", m_maxEpoch);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
