/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatefulRulesDetails.h>
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

RuleGroupSourceStatefulRulesDetails::RuleGroupSourceStatefulRulesDetails() : 
    m_actionHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false)
{
}

RuleGroupSourceStatefulRulesDetails::RuleGroupSourceStatefulRulesDetails(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatefulRulesDetails& RuleGroupSourceStatefulRulesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetObject("Header");

    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleOptions"))
  {
    Aws::Utils::Array<JsonView> ruleOptionsJsonList = jsonValue.GetArray("RuleOptions");
    for(unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex)
    {
      m_ruleOptions.push_back(ruleOptionsJsonList[ruleOptionsIndex].AsObject());
    }
    m_ruleOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatefulRulesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_headerHasBeenSet)
  {
   payload.WithObject("Header", m_header.Jsonize());

  }

  if(m_ruleOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleOptionsJsonList(m_ruleOptions.size());
   for(unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex)
   {
     ruleOptionsJsonList[ruleOptionsIndex].AsObject(m_ruleOptions[ruleOptionsIndex].Jsonize());
   }
   payload.WithArray("RuleOptions", std::move(ruleOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
