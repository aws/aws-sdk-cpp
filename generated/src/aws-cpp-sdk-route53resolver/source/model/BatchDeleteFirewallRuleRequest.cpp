/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/BatchDeleteFirewallRuleRequest.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteFirewallRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_deleteFirewallRuleEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> deleteFirewallRuleEntriesJsonList(m_deleteFirewallRuleEntries.size());
    for (unsigned deleteFirewallRuleEntriesIndex = 0; deleteFirewallRuleEntriesIndex < deleteFirewallRuleEntriesJsonList.GetLength();
         ++deleteFirewallRuleEntriesIndex) {
      deleteFirewallRuleEntriesJsonList[deleteFirewallRuleEntriesIndex].AsObject(
          m_deleteFirewallRuleEntries[deleteFirewallRuleEntriesIndex].Jsonize());
    }
    payload.WithArray("DeleteFirewallRuleEntries", std::move(deleteFirewallRuleEntriesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteFirewallRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.BatchDeleteFirewallRule"));
  return headers;
}
