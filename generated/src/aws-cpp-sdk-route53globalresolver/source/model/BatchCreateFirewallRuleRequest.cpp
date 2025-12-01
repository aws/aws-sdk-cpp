/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/BatchCreateFirewallRuleRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateFirewallRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_firewallRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> firewallRulesJsonList(m_firewallRules.size());
    for (unsigned firewallRulesIndex = 0; firewallRulesIndex < firewallRulesJsonList.GetLength(); ++firewallRulesIndex) {
      firewallRulesJsonList[firewallRulesIndex].AsObject(m_firewallRules[firewallRulesIndex].Jsonize());
    }
    payload.WithArray("firewallRules", std::move(firewallRulesJsonList));
  }

  return payload.View().WriteReadable();
}
