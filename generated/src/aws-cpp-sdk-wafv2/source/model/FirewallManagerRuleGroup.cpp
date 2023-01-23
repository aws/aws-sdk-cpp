/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FirewallManagerRuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

FirewallManagerRuleGroup::FirewallManagerRuleGroup() : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_firewallManagerStatementHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
}

FirewallManagerRuleGroup::FirewallManagerRuleGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_firewallManagerStatementHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallManagerRuleGroup& FirewallManagerRuleGroup::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("FirewallManagerStatement"))
  {
    m_firewallManagerStatement = jsonValue.GetObject("FirewallManagerStatement");

    m_firewallManagerStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverrideAction"))
  {
    m_overrideAction = jsonValue.GetObject("OverrideAction");

    m_overrideActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallManagerRuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_firewallManagerStatementHasBeenSet)
  {
   payload.WithObject("FirewallManagerStatement", m_firewallManagerStatement.Jsonize());

  }

  if(m_overrideActionHasBeenSet)
  {
   payload.WithObject("OverrideAction", m_overrideAction.Jsonize());

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
