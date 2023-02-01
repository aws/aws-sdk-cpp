/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallRuleGroupAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFirewallRuleGroupAssociationRequest::GetFirewallRuleGroupAssociationRequest() : 
    m_firewallRuleGroupAssociationIdHasBeenSet(false)
{
}

Aws::String GetFirewallRuleGroupAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallRuleGroupAssociationIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupAssociationId", m_firewallRuleGroupAssociationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFirewallRuleGroupAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetFirewallRuleGroupAssociation"));
  return headers;

}




