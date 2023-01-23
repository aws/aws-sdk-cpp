/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/WafExcludedRule.h>
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

WafExcludedRule::WafExcludedRule() : 
    m_ruleIdHasBeenSet(false)
{
}

WafExcludedRule::WafExcludedRule(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false)
{
  *this = jsonValue;
}

WafExcludedRule& WafExcludedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WafExcludedRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
