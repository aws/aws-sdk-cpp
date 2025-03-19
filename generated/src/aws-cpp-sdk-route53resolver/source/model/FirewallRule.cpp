/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

FirewallRule::FirewallRule(JsonView jsonValue)
{
  *this = jsonValue;
}

FirewallRule& FirewallRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallRuleGroupId"))
  {
    m_firewallRuleGroupId = jsonValue.GetString("FirewallRuleGroupId");
    m_firewallRuleGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallDomainListId"))
  {
    m_firewallDomainListId = jsonValue.GetString("FirewallDomainListId");
    m_firewallDomainListIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallThreatProtectionId"))
  {
    m_firewallThreatProtectionId = jsonValue.GetString("FirewallThreatProtectionId");
    m_firewallThreatProtectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockResponse"))
  {
    m_blockResponse = BlockResponseMapper::GetBlockResponseForName(jsonValue.GetString("BlockResponse"));
    m_blockResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockOverrideDomain"))
  {
    m_blockOverrideDomain = jsonValue.GetString("BlockOverrideDomain");
    m_blockOverrideDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockOverrideDnsType"))
  {
    m_blockOverrideDnsType = BlockOverrideDnsTypeMapper::GetBlockOverrideDnsTypeForName(jsonValue.GetString("BlockOverrideDnsType"));
    m_blockOverrideDnsTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockOverrideTtl"))
  {
    m_blockOverrideTtl = jsonValue.GetInteger("BlockOverrideTtl");
    m_blockOverrideTtlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");
    m_creatorRequestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetString("ModificationTime");
    m_modificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallDomainRedirectionAction"))
  {
    m_firewallDomainRedirectionAction = FirewallDomainRedirectionActionMapper::GetFirewallDomainRedirectionActionForName(jsonValue.GetString("FirewallDomainRedirectionAction"));
    m_firewallDomainRedirectionActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Qtype"))
  {
    m_qtype = jsonValue.GetString("Qtype");
    m_qtypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsThreatProtection"))
  {
    m_dnsThreatProtection = DnsThreatProtectionMapper::GetDnsThreatProtectionForName(jsonValue.GetString("DnsThreatProtection"));
    m_dnsThreatProtectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfidenceThreshold"))
  {
    m_confidenceThreshold = ConfidenceThresholdMapper::GetConfidenceThresholdForName(jsonValue.GetString("ConfidenceThreshold"));
    m_confidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRule::Jsonize() const
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

  if(m_firewallThreatProtectionIdHasBeenSet)
  {
   payload.WithString("FirewallThreatProtectionId", m_firewallThreatProtectionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_blockResponseHasBeenSet)
  {
   payload.WithString("BlockResponse", BlockResponseMapper::GetNameForBlockResponse(m_blockResponse));
  }

  if(m_blockOverrideDomainHasBeenSet)
  {
   payload.WithString("BlockOverrideDomain", m_blockOverrideDomain);

  }

  if(m_blockOverrideDnsTypeHasBeenSet)
  {
   payload.WithString("BlockOverrideDnsType", BlockOverrideDnsTypeMapper::GetNameForBlockOverrideDnsType(m_blockOverrideDnsType));
  }

  if(m_blockOverrideTtlHasBeenSet)
  {
   payload.WithInteger("BlockOverrideTtl", m_blockOverrideTtl);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  if(m_firewallDomainRedirectionActionHasBeenSet)
  {
   payload.WithString("FirewallDomainRedirectionAction", FirewallDomainRedirectionActionMapper::GetNameForFirewallDomainRedirectionAction(m_firewallDomainRedirectionAction));
  }

  if(m_qtypeHasBeenSet)
  {
   payload.WithString("Qtype", m_qtype);

  }

  if(m_dnsThreatProtectionHasBeenSet)
  {
   payload.WithString("DnsThreatProtection", DnsThreatProtectionMapper::GetNameForDnsThreatProtection(m_dnsThreatProtection));
  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithString("ConfidenceThreshold", ConfidenceThresholdMapper::GetNameForConfidenceThreshold(m_confidenceThreshold));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
