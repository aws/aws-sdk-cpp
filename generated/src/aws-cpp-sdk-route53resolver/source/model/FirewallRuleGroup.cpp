/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRuleGroup.h>
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

FirewallRuleGroup::FirewallRuleGroup() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleCount(0),
    m_ruleCountHasBeenSet(false),
    m_status(FirewallRuleGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

FirewallRuleGroup::FirewallRuleGroup(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleCount(0),
    m_ruleCountHasBeenSet(false),
    m_status(FirewallRuleGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallRuleGroup& FirewallRuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleCount"))
  {
    m_ruleCount = jsonValue.GetInteger("RuleCount");

    m_ruleCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FirewallRuleGroupStatusMapper::GetFirewallRuleGroupStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
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

  return *this;
}

JsonValue FirewallRuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleCountHasBeenSet)
  {
   payload.WithInteger("RuleCount", m_ruleCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FirewallRuleGroupStatusMapper::GetNameForFirewallRuleGroupStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
