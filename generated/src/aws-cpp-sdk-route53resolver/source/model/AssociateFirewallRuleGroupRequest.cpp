/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/AssociateFirewallRuleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateFirewallRuleGroupRequest::AssociateFirewallRuleGroupRequest() : 
    m_creatorRequestId(Aws::Utils::UUID::RandomUUID()),
    m_creatorRequestIdHasBeenSet(true),
    m_firewallRuleGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mutationProtection(MutationProtectionStatus::NOT_SET),
    m_mutationProtectionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String AssociateFirewallRuleGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mutationProtectionHasBeenSet)
  {
   payload.WithString("MutationProtection", MutationProtectionStatusMapper::GetNameForMutationProtectionStatus(m_mutationProtection));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateFirewallRuleGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.AssociateFirewallRuleGroup"));
  return headers;

}




