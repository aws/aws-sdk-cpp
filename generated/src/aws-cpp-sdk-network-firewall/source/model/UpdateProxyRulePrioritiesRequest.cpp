/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/UpdateProxyRulePrioritiesRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProxyRulePrioritiesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  if (m_ruleGroupRequestPhaseHasBeenSet) {
    payload.WithString("RuleGroupRequestPhase", RuleGroupRequestPhaseMapper::GetNameForRuleGroupRequestPhase(m_ruleGroupRequestPhase));
  }

  if (m_rulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
    }
    payload.WithArray("Rules", std::move(rulesJsonList));
  }

  if (m_updateTokenHasBeenSet) {
    payload.WithString("UpdateToken", m_updateToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProxyRulePrioritiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.UpdateProxyRulePriorities"));
  return headers;
}
