﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesMetadata.h>
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

AutomationRulesMetadata::AutomationRulesMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationRulesMetadata& AutomationRulesMetadata::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsTerminal"))
  {
    m_isTerminal = jsonValue.GetBool("IsTerminal");
    m_isTerminalHasBeenSet = true;
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
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesMetadata::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
