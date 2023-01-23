/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRulesAndCustomActionsDetails.h>
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

RuleGroupSourceStatelessRulesAndCustomActionsDetails::RuleGroupSourceStatelessRulesAndCustomActionsDetails() : 
    m_customActionsHasBeenSet(false),
    m_statelessRulesHasBeenSet(false)
{
}

RuleGroupSourceStatelessRulesAndCustomActionsDetails::RuleGroupSourceStatelessRulesAndCustomActionsDetails(JsonView jsonValue) : 
    m_customActionsHasBeenSet(false),
    m_statelessRulesHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRulesAndCustomActionsDetails& RuleGroupSourceStatelessRulesAndCustomActionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomActions"))
  {
    Aws::Utils::Array<JsonView> customActionsJsonList = jsonValue.GetArray("CustomActions");
    for(unsigned customActionsIndex = 0; customActionsIndex < customActionsJsonList.GetLength(); ++customActionsIndex)
    {
      m_customActions.push_back(customActionsJsonList[customActionsIndex].AsObject());
    }
    m_customActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessRules"))
  {
    Aws::Utils::Array<JsonView> statelessRulesJsonList = jsonValue.GetArray("StatelessRules");
    for(unsigned statelessRulesIndex = 0; statelessRulesIndex < statelessRulesJsonList.GetLength(); ++statelessRulesIndex)
    {
      m_statelessRules.push_back(statelessRulesJsonList[statelessRulesIndex].AsObject());
    }
    m_statelessRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRulesAndCustomActionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_customActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customActionsJsonList(m_customActions.size());
   for(unsigned customActionsIndex = 0; customActionsIndex < customActionsJsonList.GetLength(); ++customActionsIndex)
   {
     customActionsJsonList[customActionsIndex].AsObject(m_customActions[customActionsIndex].Jsonize());
   }
   payload.WithArray("CustomActions", std::move(customActionsJsonList));

  }

  if(m_statelessRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessRulesJsonList(m_statelessRules.size());
   for(unsigned statelessRulesIndex = 0; statelessRulesIndex < statelessRulesJsonList.GetLength(); ++statelessRulesIndex)
   {
     statelessRulesJsonList[statelessRulesIndex].AsObject(m_statelessRules[statelessRulesIndex].Jsonize());
   }
   payload.WithArray("StatelessRules", std::move(statelessRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
