/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

RuleDefinition::RuleDefinition() : 
    m_matchAttributesHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

RuleDefinition::RuleDefinition(JsonView jsonValue) : 
    m_matchAttributesHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleDefinition& RuleDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchAttributes"))
  {
    m_matchAttributes = jsonValue.GetObject("MatchAttributes");

    m_matchAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_matchAttributesHasBeenSet)
  {
   payload.WithObject("MatchAttributes", m_matchAttributes.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
