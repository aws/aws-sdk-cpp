/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateFirewallRuleGroupAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFirewallRuleGroupAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallRuleGroupAssociationIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupAssociationId", m_firewallRuleGroupAssociationId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_mutationProtectionHasBeenSet)
  {
   payload.WithString("MutationProtection", MutationProtectionStatusMapper::GetNameForMutationProtectionStatus(m_mutationProtection));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFirewallRuleGroupAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateFirewallRuleGroupAssociation"));
  return headers;

}




