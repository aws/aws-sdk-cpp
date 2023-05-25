/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRuleDefinition.h>
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

RuleGroupSourceStatelessRuleDefinition::RuleGroupSourceStatelessRuleDefinition() : 
    m_actionsHasBeenSet(false),
    m_matchAttributesHasBeenSet(false)
{
}

RuleGroupSourceStatelessRuleDefinition::RuleGroupSourceStatelessRuleDefinition(JsonView jsonValue) : 
    m_actionsHasBeenSet(false),
    m_matchAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRuleDefinition& RuleGroupSourceStatelessRuleDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchAttributes"))
  {
    m_matchAttributes = jsonValue.GetObject("MatchAttributes");

    m_matchAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRuleDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_matchAttributesHasBeenSet)
  {
   payload.WithObject("MatchAttributes", m_matchAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
