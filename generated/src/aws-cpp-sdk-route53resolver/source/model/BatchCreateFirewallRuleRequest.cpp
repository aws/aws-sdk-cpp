/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/BatchCreateFirewallRuleRequest.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateFirewallRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_createFirewallRuleEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> createFirewallRuleEntriesJsonList(m_createFirewallRuleEntries.size());
    for (unsigned createFirewallRuleEntriesIndex = 0; createFirewallRuleEntriesIndex < createFirewallRuleEntriesJsonList.GetLength();
         ++createFirewallRuleEntriesIndex) {
      createFirewallRuleEntriesJsonList[createFirewallRuleEntriesIndex].AsObject(
          m_createFirewallRuleEntries[createFirewallRuleEntriesIndex].Jsonize());
    }
    payload.WithArray("CreateFirewallRuleEntries", std::move(createFirewallRuleEntriesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateFirewallRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.BatchCreateFirewallRule"));
  return headers;
}
