/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/ListFirewallRuleDomainsRequest.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListFirewallRuleDomainsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_firewallRuleGroupIdHasBeenSet) {
    payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);
  }

  if (m_firewallThreatProtectionIdHasBeenSet) {
    payload.WithString("FirewallThreatProtectionId", m_firewallThreatProtectionId);
  }

  if (m_firewallDomainListIdHasBeenSet) {
    payload.WithString("FirewallDomainListId", m_firewallDomainListId);
  }

  if (m_queryOptionsHasBeenSet) {
    payload.WithObject("QueryOptions", m_queryOptions.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFirewallRuleDomainsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.ListFirewallRuleDomains"));
  return headers;
}
