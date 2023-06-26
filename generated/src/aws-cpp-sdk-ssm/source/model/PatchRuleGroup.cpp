/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchRuleGroup::PatchRuleGroup() : 
    m_patchRulesHasBeenSet(false)
{
}

PatchRuleGroup::PatchRuleGroup(JsonView jsonValue) : 
    m_patchRulesHasBeenSet(false)
{
  *this = jsonValue;
}

PatchRuleGroup& PatchRuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatchRules"))
  {
    Aws::Utils::Array<JsonView> patchRulesJsonList = jsonValue.GetArray("PatchRules");
    for(unsigned patchRulesIndex = 0; patchRulesIndex < patchRulesJsonList.GetLength(); ++patchRulesIndex)
    {
      m_patchRules.push_back(patchRulesJsonList[patchRulesIndex].AsObject());
    }
    m_patchRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchRuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_patchRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> patchRulesJsonList(m_patchRules.size());
   for(unsigned patchRulesIndex = 0; patchRulesIndex < patchRulesJsonList.GetLength(); ++patchRulesIndex)
   {
     patchRulesJsonList[patchRulesIndex].AsObject(m_patchRules[patchRulesIndex].Jsonize());
   }
   payload.WithArray("PatchRules", std::move(patchRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
