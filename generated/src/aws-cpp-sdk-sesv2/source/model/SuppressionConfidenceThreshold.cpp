/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/SuppressionConfidenceThreshold.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

SuppressionConfidenceThreshold::SuppressionConfidenceThreshold(JsonView jsonValue) { *this = jsonValue; }

SuppressionConfidenceThreshold& SuppressionConfidenceThreshold::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConfidenceVerdictThreshold")) {
    m_confidenceVerdictThreshold = SuppressionConfidenceVerdictThresholdMapper::GetSuppressionConfidenceVerdictThresholdForName(
        jsonValue.GetString("ConfidenceVerdictThreshold"));
    m_confidenceVerdictThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue SuppressionConfidenceThreshold::Jsonize() const {
  JsonValue payload;

  if (m_confidenceVerdictThresholdHasBeenSet) {
    payload.WithString(
        "ConfidenceVerdictThreshold",
        SuppressionConfidenceVerdictThresholdMapper::GetNameForSuppressionConfidenceVerdictThreshold(m_confidenceVerdictThreshold));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
