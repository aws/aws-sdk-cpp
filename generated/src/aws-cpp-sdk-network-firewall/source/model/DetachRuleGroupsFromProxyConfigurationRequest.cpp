/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DetachRuleGroupsFromProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DetachRuleGroupsFromProxyConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  if (m_ruleGroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupNamesJsonList(m_ruleGroupNames.size());
    for (unsigned ruleGroupNamesIndex = 0; ruleGroupNamesIndex < ruleGroupNamesJsonList.GetLength(); ++ruleGroupNamesIndex) {
      ruleGroupNamesJsonList[ruleGroupNamesIndex].AsString(m_ruleGroupNames[ruleGroupNamesIndex]);
    }
    payload.WithArray("RuleGroupNames", std::move(ruleGroupNamesJsonList));
  }

  if (m_ruleGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupArnsJsonList(m_ruleGroupArns.size());
    for (unsigned ruleGroupArnsIndex = 0; ruleGroupArnsIndex < ruleGroupArnsJsonList.GetLength(); ++ruleGroupArnsIndex) {
      ruleGroupArnsJsonList[ruleGroupArnsIndex].AsString(m_ruleGroupArns[ruleGroupArnsIndex]);
    }
    payload.WithArray("RuleGroupArns", std::move(ruleGroupArnsJsonList));
  }

  if (m_updateTokenHasBeenSet) {
    payload.WithString("UpdateToken", m_updateToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachRuleGroupsFromProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DetachRuleGroupsFromProxyConfiguration"));
  return headers;
}
