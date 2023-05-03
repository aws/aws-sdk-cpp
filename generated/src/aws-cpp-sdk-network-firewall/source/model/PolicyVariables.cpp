/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/PolicyVariables.h>
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

PolicyVariables::PolicyVariables() : 
    m_ruleVariablesHasBeenSet(false)
{
}

PolicyVariables::PolicyVariables(JsonView jsonValue) : 
    m_ruleVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyVariables& PolicyVariables::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleVariables"))
  {
    Aws::Map<Aws::String, JsonView> ruleVariablesJsonMap = jsonValue.GetObject("RuleVariables").GetAllObjects();
    for(auto& ruleVariablesItem : ruleVariablesJsonMap)
    {
      m_ruleVariables[ruleVariablesItem.first] = ruleVariablesItem.second.AsObject();
    }
    m_ruleVariablesHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyVariables::Jsonize() const
{
  JsonValue payload;

  if(m_ruleVariablesHasBeenSet)
  {
   JsonValue ruleVariablesJsonMap;
   for(auto& ruleVariablesItem : m_ruleVariables)
   {
     ruleVariablesJsonMap.WithObject(ruleVariablesItem.first, ruleVariablesItem.second.Jsonize());
   }
   payload.WithObject("RuleVariables", std::move(ruleVariablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
