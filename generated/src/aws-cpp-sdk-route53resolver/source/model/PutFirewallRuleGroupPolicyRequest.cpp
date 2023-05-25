/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/PutFirewallRuleGroupPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFirewallRuleGroupPolicyRequest::PutFirewallRuleGroupPolicyRequest() : 
    m_arnHasBeenSet(false),
    m_firewallRuleGroupPolicyHasBeenSet(false)
{
}

Aws::String PutFirewallRuleGroupPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_firewallRuleGroupPolicyHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupPolicy", m_firewallRuleGroupPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutFirewallRuleGroupPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.PutFirewallRuleGroupPolicy"));
  return headers;

}




