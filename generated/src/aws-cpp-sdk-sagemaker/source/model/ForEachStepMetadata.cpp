/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ForEachStepMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ForEachStepMetadata::ForEachStepMetadata(JsonView jsonValue) { *this = jsonValue; }

ForEachStepMetadata& ForEachStepMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = ForEachStatusMapper::GetForEachStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputItemCount")) {
    m_inputItemCount = jsonValue.GetInteger("InputItemCount");
    m_inputItemCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalStepCount")) {
    m_totalStepCount = jsonValue.GetInteger("TotalStepCount");
    m_totalStepCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SucceededStepCount")) {
    m_succeededStepCount = jsonValue.GetInteger("SucceededStepCount");
    m_succeededStepCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedStepCount")) {
    m_failedStepCount = jsonValue.GetInteger("FailedStepCount");
    m_failedStepCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StoppedStepCount")) {
    m_stoppedStepCount = jsonValue.GetInteger("StoppedStepCount");
    m_stoppedStepCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Selector")) {
    m_selector = jsonValue.GetObject("Selector");
    m_selectorHasBeenSet = true;
  }
  return *this;
}

JsonValue ForEachStepMetadata::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ForEachStatusMapper::GetNameForForEachStatus(m_status));
  }

  if (m_inputItemCountHasBeenSet) {
    payload.WithInteger("InputItemCount", m_inputItemCount);
  }

  if (m_totalStepCountHasBeenSet) {
    payload.WithInteger("TotalStepCount", m_totalStepCount);
  }

  if (m_succeededStepCountHasBeenSet) {
    payload.WithInteger("SucceededStepCount", m_succeededStepCount);
  }

  if (m_failedStepCountHasBeenSet) {
    payload.WithInteger("FailedStepCount", m_failedStepCount);
  }

  if (m_stoppedStepCountHasBeenSet) {
    payload.WithInteger("StoppedStepCount", m_stoppedStepCount);
  }

  if (m_selectorHasBeenSet) {
    payload.WithObject("Selector", m_selector.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
