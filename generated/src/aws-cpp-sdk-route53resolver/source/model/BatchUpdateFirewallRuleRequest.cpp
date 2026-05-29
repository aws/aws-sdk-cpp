/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/BatchUpdateFirewallRuleRequest.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateFirewallRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_updateFirewallRuleEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> updateFirewallRuleEntriesJsonList(m_updateFirewallRuleEntries.size());
    for (unsigned updateFirewallRuleEntriesIndex = 0; updateFirewallRuleEntriesIndex < updateFirewallRuleEntriesJsonList.GetLength();
         ++updateFirewallRuleEntriesIndex) {
      updateFirewallRuleEntriesJsonList[updateFirewallRuleEntriesIndex].AsObject(
          m_updateFirewallRuleEntries[updateFirewallRuleEntriesIndex].Jsonize());
    }
    payload.WithArray("UpdateFirewallRuleEntries", std::move(updateFirewallRuleEntriesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchUpdateFirewallRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.BatchUpdateFirewallRule"));
  return headers;
}
