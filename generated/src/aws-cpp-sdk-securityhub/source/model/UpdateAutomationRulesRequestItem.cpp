/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateAutomationRulesRequestItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

UpdateAutomationRulesRequestItem::UpdateAutomationRulesRequestItem() : 
    m_ruleArnHasBeenSet(false),
    m_ruleStatus(RuleStatus::NOT_SET),
    m_ruleStatusHasBeenSet(false),
    m_ruleOrder(0),
    m_ruleOrderHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_isTerminal(false),
    m_isTerminalHasBeenSet(false),
    m_criteriaHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

UpdateAutomationRulesRequestItem::UpdateAutomationRulesRequestItem(JsonView jsonValue) : 
    m_ruleArnHasBeenSet(false),
    m_ruleStatus(RuleStatus::NOT_SET),
    m_ruleStatusHasBeenSet(false),
    m_ruleOrder(0),
    m_ruleOrderHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_isTerminal(false),
    m_isTerminalHasBeenSet(false),
    m_criteriaHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAutomationRulesRequestItem& UpdateAutomationRulesRequestItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");

    m_ruleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleStatus"))
  {
    m_ruleStatus = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("RuleStatus"));

    m_ruleStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = jsonValue.GetInteger("RuleOrder");

    m_ruleOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsTerminal"))
  {
    m_isTerminal = jsonValue.GetBool("IsTerminal");

    m_isTerminalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Criteria"))
  {
    m_criteria = jsonValue.GetObject("Criteria");

    m_criteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAutomationRulesRequestItem::Jsonize() const
{
  JsonValue payload;

  if(m_ruleArnHasBeenSet)
  {
   payload.WithString("RuleArn", m_ruleArn);

  }

  if(m_ruleStatusHasBeenSet)
  {
   payload.WithString("RuleStatus", RuleStatusMapper::GetNameForRuleStatus(m_ruleStatus));
  }

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithInteger("RuleOrder", m_ruleOrder);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_isTerminalHasBeenSet)
  {
   payload.WithBool("IsTerminal", m_isTerminal);

  }

  if(m_criteriaHasBeenSet)
  {
   payload.WithObject("Criteria", m_criteria.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
