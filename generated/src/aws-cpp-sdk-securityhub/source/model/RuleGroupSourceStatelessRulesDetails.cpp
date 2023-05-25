/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRulesDetails.h>
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

RuleGroupSourceStatelessRulesDetails::RuleGroupSourceStatelessRulesDetails() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleDefinitionHasBeenSet(false)
{
}

RuleGroupSourceStatelessRulesDetails::RuleGroupSourceStatelessRulesDetails(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRulesDetails& RuleGroupSourceStatelessRulesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleDefinition"))
  {
    m_ruleDefinition = jsonValue.GetObject("RuleDefinition");

    m_ruleDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRulesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_ruleDefinitionHasBeenSet)
  {
   payload.WithObject("RuleDefinition", m_ruleDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
