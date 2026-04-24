/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateProxyRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

CreateProxyRule::CreateProxyRule(JsonView jsonValue) { *this = jsonValue; }

CreateProxyRule& CreateProxyRule::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("InsertPosition")) {
    m_insertPosition = jsonValue.GetInteger("InsertPosition");
    m_insertPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateProxyRule::Jsonize() const {
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

  if (m_insertPositionHasBeenSet) {
    payload.WithInteger("InsertPosition", m_insertPosition);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
