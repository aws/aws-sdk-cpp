/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRuleCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRuleCondition::ProxyRuleCondition(JsonView jsonValue) { *this = jsonValue; }

ProxyRuleCondition& ProxyRuleCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConditionOperator")) {
    m_conditionOperator = jsonValue.GetString("ConditionOperator");
    m_conditionOperatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConditionKey")) {
    m_conditionKey = jsonValue.GetString("ConditionKey");
    m_conditionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConditionValues")) {
    Aws::Utils::Array<JsonView> conditionValuesJsonList = jsonValue.GetArray("ConditionValues");
    for (unsigned conditionValuesIndex = 0; conditionValuesIndex < conditionValuesJsonList.GetLength(); ++conditionValuesIndex) {
      m_conditionValues.push_back(conditionValuesJsonList[conditionValuesIndex].AsString());
    }
    m_conditionValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyRuleCondition::Jsonize() const {
  JsonValue payload;

  if (m_conditionOperatorHasBeenSet) {
    payload.WithString("ConditionOperator", m_conditionOperator);
  }

  if (m_conditionKeyHasBeenSet) {
    payload.WithString("ConditionKey", m_conditionKey);
  }

  if (m_conditionValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> conditionValuesJsonList(m_conditionValues.size());
    for (unsigned conditionValuesIndex = 0; conditionValuesIndex < conditionValuesJsonList.GetLength(); ++conditionValuesIndex) {
      conditionValuesJsonList[conditionValuesIndex].AsString(m_conditionValues[conditionValuesIndex]);
    }
    payload.WithArray("ConditionValues", std::move(conditionValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
