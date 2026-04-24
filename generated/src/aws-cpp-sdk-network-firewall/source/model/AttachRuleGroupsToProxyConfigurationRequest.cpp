/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/AttachRuleGroupsToProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AttachRuleGroupsToProxyConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  if (m_ruleGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupsJsonList(m_ruleGroups.size());
    for (unsigned ruleGroupsIndex = 0; ruleGroupsIndex < ruleGroupsJsonList.GetLength(); ++ruleGroupsIndex) {
      ruleGroupsJsonList[ruleGroupsIndex].AsObject(m_ruleGroups[ruleGroupsIndex].Jsonize());
    }
    payload.WithArray("RuleGroups", std::move(ruleGroupsJsonList));
  }

  if (m_updateTokenHasBeenSet) {
    payload.WithString("UpdateToken", m_updateToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachRuleGroupsToProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.AttachRuleGroupsToProxyConfiguration"));
  return headers;
}
