/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/SuppressionConditionThreshold.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

SuppressionConditionThreshold::SuppressionConditionThreshold(JsonView jsonValue) { *this = jsonValue; }

SuppressionConditionThreshold& SuppressionConditionThreshold::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConditionThresholdEnabled")) {
    m_conditionThresholdEnabled = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("ConditionThresholdEnabled"));
    m_conditionThresholdEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OverallConfidenceThreshold")) {
    m_overallConfidenceThreshold = jsonValue.GetObject("OverallConfidenceThreshold");
    m_overallConfidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue SuppressionConditionThreshold::Jsonize() const {
  JsonValue payload;

  if (m_conditionThresholdEnabledHasBeenSet) {
    payload.WithString("ConditionThresholdEnabled", FeatureStatusMapper::GetNameForFeatureStatus(m_conditionThresholdEnabled));
  }

  if (m_overallConfidenceThresholdHasBeenSet) {
    payload.WithObject("OverallConfidenceThreshold", m_overallConfidenceThreshold.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
