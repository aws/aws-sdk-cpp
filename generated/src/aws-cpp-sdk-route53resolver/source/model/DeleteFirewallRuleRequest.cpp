/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DeleteFirewallRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFirewallRuleRequest::DeleteFirewallRuleRequest() : 
    m_firewallRuleGroupIdHasBeenSet(false),
    m_firewallDomainListIdHasBeenSet(false),
    m_qtypeHasBeenSet(false)
{
}

Aws::String DeleteFirewallRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  if(m_qtypeHasBeenSet)
  {
   payload.WithString("Qtype", m_qtype);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFirewallRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DeleteFirewallRule"));
  return headers;

}




