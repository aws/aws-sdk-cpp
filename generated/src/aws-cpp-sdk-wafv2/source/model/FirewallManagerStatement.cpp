/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FirewallManagerStatement.h>
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

FirewallManagerStatement::FirewallManagerStatement() : 
    m_managedRuleGroupStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false)
{
}

FirewallManagerStatement::FirewallManagerStatement(JsonView jsonValue) : 
    m_managedRuleGroupStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallManagerStatement& FirewallManagerStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManagedRuleGroupStatement"))
  {
    m_managedRuleGroupStatement = jsonValue.GetObject("ManagedRuleGroupStatement");

    m_managedRuleGroupStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupReferenceStatement"))
  {
    m_ruleGroupReferenceStatement = jsonValue.GetObject("RuleGroupReferenceStatement");

    m_ruleGroupReferenceStatementHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallManagerStatement::Jsonize() const
{
  JsonValue payload;

  if(m_managedRuleGroupStatementHasBeenSet)
  {
   payload.WithObject("ManagedRuleGroupStatement", m_managedRuleGroupStatement.Jsonize());

  }

  if(m_ruleGroupReferenceStatementHasBeenSet)
  {
   payload.WithObject("RuleGroupReferenceStatement", m_ruleGroupReferenceStatement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
