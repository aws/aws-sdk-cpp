/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateProxyRulesRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProxyRulesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_rulesHasBeenSet) {
    payload.WithObject("Rules", m_rules.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProxyRulesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateProxyRules"));
  return headers;
}
