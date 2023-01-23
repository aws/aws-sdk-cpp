/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatelessRule.h>
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

StatelessRule::StatelessRule() : 
    m_ruleDefinitionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

StatelessRule::StatelessRule(JsonView jsonValue) : 
    m_ruleDefinitionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

StatelessRule& StatelessRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleDefinition"))
  {
    m_ruleDefinition = jsonValue.GetObject("RuleDefinition");

    m_ruleDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  return *this;
}

JsonValue StatelessRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleDefinitionHasBeenSet)
  {
   payload.WithObject("RuleDefinition", m_ruleDefinition.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
