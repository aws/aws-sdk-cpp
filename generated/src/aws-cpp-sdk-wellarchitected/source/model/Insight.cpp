/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/Insight.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

Insight::Insight(JsonView jsonValue) { *this = jsonValue; }

Insight& Insight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("usagePattern")) {
    m_usagePattern = jsonValue.GetString("usagePattern");
    m_usagePatternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signalsDetected")) {
    m_signalsDetected = jsonValue.GetString("signalsDetected");
    m_signalsDetectedHasBeenSet = true;
  }
  return *this;
}

JsonValue Insight::Jsonize() const {
  JsonValue payload;

  if (m_usagePatternHasBeenSet) {
    payload.WithString("usagePattern", m_usagePattern);
  }

  if (m_signalsDetectedHasBeenSet) {
    payload.WithString("signalsDetected", m_signalsDetected);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
