/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleGroupStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/Statement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleGroupStatement::ManagedRuleGroupStatement() : 
    m_vendorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_excludedRulesHasBeenSet(false),
    m_scopeDownStatementHasBeenSet(false),
    m_managedRuleGroupConfigsHasBeenSet(false),
    m_ruleActionOverridesHasBeenSet(false)
{
}

ManagedRuleGroupStatement::ManagedRuleGroupStatement(JsonView jsonValue) : 
    m_vendorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_excludedRulesHasBeenSet(false),
    m_scopeDownStatementHasBeenSet(false),
    m_managedRuleGroupConfigsHasBeenSet(false),
    m_ruleActionOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

const Statement& ManagedRuleGroupStatement::GetScopeDownStatement() const{ return *m_scopeDownStatement; }
bool ManagedRuleGroupStatement::ScopeDownStatementHasBeenSet() const { return m_scopeDownStatementHasBeenSet; }
void ManagedRuleGroupStatement::SetScopeDownStatement(const Statement& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement = Aws::MakeShared<Statement>("ManagedRuleGroupStatement", value); }
void ManagedRuleGroupStatement::SetScopeDownStatement(Statement&& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement = Aws::MakeShared<Statement>("ManagedRuleGroupStatement", std::move(value)); }
ManagedRuleGroupStatement& ManagedRuleGroupStatement::WithScopeDownStatement(const Statement& value) { SetScopeDownStatement(value); return *this;}
ManagedRuleGroupStatement& ManagedRuleGroupStatement::WithScopeDownStatement(Statement&& value) { SetScopeDownStatement(std::move(value)); return *this;}

ManagedRuleGroupStatement& ManagedRuleGroupStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VendorName"))
  {
    m_vendorName = jsonValue.GetString("VendorName");

    m_vendorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedRules"))
  {
    Aws::Utils::Array<JsonView> excludedRulesJsonList = jsonValue.GetArray("ExcludedRules");
    for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
    {
      m_excludedRules.push_back(excludedRulesJsonList[excludedRulesIndex].AsObject());
    }
    m_excludedRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScopeDownStatement"))
  {
    m_scopeDownStatement = Aws::MakeShared<Statement>("ManagedRuleGroupStatement", jsonValue.GetObject("ScopeDownStatement"));

    m_scopeDownStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedRuleGroupConfigs"))
  {
    Aws::Utils::Array<JsonView> managedRuleGroupConfigsJsonList = jsonValue.GetArray("ManagedRuleGroupConfigs");
    for(unsigned managedRuleGroupConfigsIndex = 0; managedRuleGroupConfigsIndex < managedRuleGroupConfigsJsonList.GetLength(); ++managedRuleGroupConfigsIndex)
    {
      m_managedRuleGroupConfigs.push_back(managedRuleGroupConfigsJsonList[managedRuleGroupConfigsIndex].AsObject());
    }
    m_managedRuleGroupConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleActionOverrides"))
  {
    Aws::Utils::Array<JsonView> ruleActionOverridesJsonList = jsonValue.GetArray("RuleActionOverrides");
    for(unsigned ruleActionOverridesIndex = 0; ruleActionOverridesIndex < ruleActionOverridesJsonList.GetLength(); ++ruleActionOverridesIndex)
    {
      m_ruleActionOverrides.push_back(ruleActionOverridesJsonList[ruleActionOverridesIndex].AsObject());
    }
    m_ruleActionOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleGroupStatement::Jsonize() const
{
  JsonValue payload;

  if(m_vendorNameHasBeenSet)
  {
   payload.WithString("VendorName", m_vendorName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_excludedRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedRulesJsonList(m_excludedRules.size());
   for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
   {
     excludedRulesJsonList[excludedRulesIndex].AsObject(m_excludedRules[excludedRulesIndex].Jsonize());
   }
   payload.WithArray("ExcludedRules", std::move(excludedRulesJsonList));

  }

  if(m_scopeDownStatementHasBeenSet)
  {
   payload.WithObject("ScopeDownStatement", m_scopeDownStatement->Jsonize());

  }

  if(m_managedRuleGroupConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedRuleGroupConfigsJsonList(m_managedRuleGroupConfigs.size());
   for(unsigned managedRuleGroupConfigsIndex = 0; managedRuleGroupConfigsIndex < managedRuleGroupConfigsJsonList.GetLength(); ++managedRuleGroupConfigsIndex)
   {
     managedRuleGroupConfigsJsonList[managedRuleGroupConfigsIndex].AsObject(m_managedRuleGroupConfigs[managedRuleGroupConfigsIndex].Jsonize());
   }
   payload.WithArray("ManagedRuleGroupConfigs", std::move(managedRuleGroupConfigsJsonList));

  }

  if(m_ruleActionOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleActionOverridesJsonList(m_ruleActionOverrides.size());
   for(unsigned ruleActionOverridesIndex = 0; ruleActionOverridesIndex < ruleActionOverridesJsonList.GetLength(); ++ruleActionOverridesIndex)
   {
     ruleActionOverridesJsonList[ruleActionOverridesIndex].AsObject(m_ruleActionOverrides[ruleActionOverridesIndex].Jsonize());
   }
   payload.WithArray("RuleActionOverrides", std::move(ruleActionOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
