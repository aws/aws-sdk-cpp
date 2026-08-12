/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/Progress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

Progress::Progress(JsonView jsonValue) { *this = jsonValue; }

Progress& Progress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stepsCompleted")) {
    m_stepsCompleted = jsonValue.GetInteger("stepsCompleted");
    m_stepsCompletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSteps")) {
    m_totalSteps = jsonValue.GetInteger("totalSteps");
    m_totalStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completionPercentage")) {
    m_completionPercentage = jsonValue.GetDouble("completionPercentage");
    m_completionPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue Progress::Jsonize() const {
  JsonValue payload;

  if (m_stepsCompletedHasBeenSet) {
    payload.WithInteger("stepsCompleted", m_stepsCompleted);
  }

  if (m_totalStepsHasBeenSet) {
    payload.WithInteger("totalSteps", m_totalSteps);
  }

  if (m_completionPercentageHasBeenSet) {
    payload.WithDouble("completionPercentage", m_completionPercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
