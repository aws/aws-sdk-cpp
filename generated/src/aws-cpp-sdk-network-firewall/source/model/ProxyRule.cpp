/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRule::ProxyRule(JsonView jsonValue) { *this = jsonValue; }

ProxyRule& ProxyRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleName")) {
    m_proxyRuleName = jsonValue.GetString("ProxyRuleName");
    m_proxyRuleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Conditions")) {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyRule::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleNameHasBeenSet) {
    payload.WithString("ProxyRuleName", m_proxyRuleName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_action));
  }

  if (m_conditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
    }
    payload.WithArray("Conditions", std::move(conditionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
