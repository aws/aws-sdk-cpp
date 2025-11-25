/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeProxyRuleRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeProxyRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyRuleNameHasBeenSet) {
    payload.WithString("ProxyRuleName", m_proxyRuleName);
  }

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProxyRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeProxyRule"));
  return headers;
}
