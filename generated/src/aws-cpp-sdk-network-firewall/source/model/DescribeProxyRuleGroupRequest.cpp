/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeProxyRuleGroupRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeProxyRuleGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProxyRuleGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeProxyRuleGroup"));
  return headers;
}
