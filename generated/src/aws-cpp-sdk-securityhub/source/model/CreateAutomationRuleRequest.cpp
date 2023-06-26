/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CreateAutomationRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAutomationRuleRequest::CreateAutomationRuleRequest() : 
    m_tagsHasBeenSet(false),
    m_ruleStatus(RuleStatus::NOT_SET),
    m_ruleStatusHasBeenSet(false),
    m_ruleOrder(0),
    m_ruleOrderHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isTerminal(false),
    m_isTerminalHasBeenSet(false),
    m_criteriaHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

Aws::String CreateAutomationRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_ruleStatusHasBeenSet)
  {
   payload.WithString("RuleStatus", RuleStatusMapper::GetNameForRuleStatus(m_ruleStatus));
  }

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithInteger("RuleOrder", m_ruleOrder);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  return payload.View().WriteReadable();
}




