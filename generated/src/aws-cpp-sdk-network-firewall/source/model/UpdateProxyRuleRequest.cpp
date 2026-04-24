/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/UpdateProxyRuleRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProxyRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  if (m_proxyRuleNameHasBeenSet) {
    payload.WithString("ProxyRuleName", m_proxyRuleName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_action));
  }

  if (m_addConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> addConditionsJsonList(m_addConditions.size());
    for (unsigned addConditionsIndex = 0; addConditionsIndex < addConditionsJsonList.GetLength(); ++addConditionsIndex) {
      addConditionsJsonList[addConditionsIndex].AsObject(m_addConditions[addConditionsIndex].Jsonize());
    }
    payload.WithArray("AddConditions", std::move(addConditionsJsonList));
  }

  if (m_removeConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeConditionsJsonList(m_removeConditions.size());
    for (unsigned removeConditionsIndex = 0; removeConditionsIndex < removeConditionsJsonList.GetLength(); ++removeConditionsIndex) {
      removeConditionsJsonList[removeConditionsIndex].AsObject(m_removeConditions[removeConditionsIndex].Jsonize());
    }
    payload.WithArray("RemoveConditions", std::move(removeConditionsJsonList));
  }

  if (m_updateTokenHasBeenSet) {
    payload.WithString("UpdateToken", m_updateToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProxyRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateProxyRule"));
  return headers;
}
