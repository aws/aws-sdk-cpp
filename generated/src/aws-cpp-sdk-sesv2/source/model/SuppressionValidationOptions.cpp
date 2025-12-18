/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/SuppressionValidationOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

SuppressionValidationOptions::SuppressionValidationOptions(JsonView jsonValue) { *this = jsonValue; }

SuppressionValidationOptions& SuppressionValidationOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConditionThreshold")) {
    m_conditionThreshold = jsonValue.GetObject("ConditionThreshold");
    m_conditionThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue SuppressionValidationOptions::Jsonize() const {
  JsonValue payload;

  if (m_conditionThresholdHasBeenSet) {
    payload.WithObject("ConditionThreshold", m_conditionThreshold.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
