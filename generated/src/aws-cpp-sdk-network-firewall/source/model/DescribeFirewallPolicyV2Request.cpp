/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyV2Request.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeFirewallPolicyV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_firewallPolicyV2ArnHasBeenSet) {
    payload.WithString("FirewallPolicyV2Arn", m_firewallPolicyV2Arn);
  }

  if (m_firewallPolicyV2NameHasBeenSet) {
    payload.WithString("FirewallPolicyV2Name", m_firewallPolicyV2Name);
  }

  if (m_ruleOutputFormatHasBeenSet) {
    payload.WithString("RuleOutputFormat", RuleOutputFormatMapper::GetNameForRuleOutputFormat(m_ruleOutputFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFirewallPolicyV2Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeFirewallPolicyV2"));
  return headers;
}
