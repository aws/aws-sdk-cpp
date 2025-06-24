/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesMetadataV2.h>
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

AutomationRulesMetadataV2::AutomationRulesMetadataV2(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationRulesMetadataV2& AutomationRulesMetadataV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");
    m_ruleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");
    m_ruleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = jsonValue.GetDouble("RuleOrder");
    m_ruleOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleStatus"))
  {
    m_ruleStatus = RuleStatusV2Mapper::GetRuleStatusV2ForName(jsonValue.GetString("RuleStatus"));
    m_ruleStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesMetadataV2::Jsonize() const
{
  JsonValue payload;

  if(m_ruleArnHasBeenSet)
  {
   payload.WithString("RuleArn", m_ruleArn);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithDouble("RuleOrder", m_ruleOrder);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_ruleStatusHasBeenSet)
  {
   payload.WithString("RuleStatus", RuleStatusV2Mapper::GetNameForRuleStatusV2(m_ruleStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
