/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AutomationRulesResourceFieldsUpdateV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AutomationRulesResourceFieldsUpdateV2::AutomationRulesResourceFieldsUpdateV2(JsonView jsonValue) { *this = jsonValue; }

AutomationRulesResourceFieldsUpdateV2& AutomationRulesResourceFieldsUpdateV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Criticality")) {
    m_criticality = ResourceCriticalityMapper::GetResourceCriticalityForName(jsonValue.GetString("Criticality"));
    m_criticalityHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesResourceFieldsUpdateV2::Jsonize() const {
  JsonValue payload;

  if (m_criticalityHasBeenSet) {
    payload.WithString("Criticality", ResourceCriticalityMapper::GetNameForResourceCriticality(m_criticality));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
