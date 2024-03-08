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

FirewallRule::FirewallRule() : 
    m_firewallRuleGroupIdHasBeenSet(false),
    m_firewallDomainListIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_blockResponse(BlockResponse::NOT_SET),
    m_blockResponseHasBeenSet(false),
    m_blockOverrideDomainHasBeenSet(false),
    m_blockOverrideDnsType(BlockOverrideDnsType::NOT_SET),
    m_blockOverrideDnsTypeHasBeenSet(false),
    m_blockOverrideTtl(0),
    m_blockOverrideTtlHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_qtypeHasBeenSet(false)
{
}

FirewallRule::FirewallRule(JsonView jsonValue) : 
    m_firewallRuleGroupIdHasBeenSet(false),
    m_firewallDomainListIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_blockResponse(BlockResponse::NOT_SET),
    m_blockResponseHasBeenSet(false),
    m_blockOverrideDomainHasBeenSet(false),
    m_blockOverrideDnsType(BlockOverrideDnsType::NOT_SET),
    m_blockOverrideDnsTypeHasBeenSet(false),
    m_blockOverrideTtl(0),
    m_blockOverrideTtlHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_qtypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("Qtype"))
  {
    m_qtype = jsonValue.GetString("Qtype");

    m_qtypeHasBeenSet = true;
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

  if(m_qtypeHasBeenSet)
  {
   payload.WithString("Qtype", m_qtype);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
