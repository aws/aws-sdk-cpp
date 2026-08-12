/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/RemediationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

RemediationSummary::RemediationSummary(JsonView jsonValue) { *this = jsonValue; }

RemediationSummary& RemediationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendation")) {
    m_recommendation = jsonValue.GetString("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("steps")) {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      m_steps.push_back(stepsJsonList[stepsIndex].AsString());
    }
    m_stepsHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationSummary::Jsonize() const {
  JsonValue payload;

  if (m_recommendationHasBeenSet) {
    payload.WithString("recommendation", m_recommendation);
  }

  if (m_stepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      stepsJsonList[stepsIndex].AsString(m_steps[stepsIndex]);
    }
    payload.WithArray("steps", std::move(stepsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
