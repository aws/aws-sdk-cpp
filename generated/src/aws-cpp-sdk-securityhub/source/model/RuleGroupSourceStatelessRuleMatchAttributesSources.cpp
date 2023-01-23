/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesSources.h>
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

RuleGroupSourceStatelessRuleMatchAttributesSources::RuleGroupSourceStatelessRuleMatchAttributesSources() : 
    m_addressDefinitionHasBeenSet(false)
{
}

RuleGroupSourceStatelessRuleMatchAttributesSources::RuleGroupSourceStatelessRuleMatchAttributesSources(JsonView jsonValue) : 
    m_addressDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRuleMatchAttributesSources& RuleGroupSourceStatelessRuleMatchAttributesSources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressDefinition"))
  {
    m_addressDefinition = jsonValue.GetString("AddressDefinition");

    m_addressDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRuleMatchAttributesSources::Jsonize() const
{
  JsonValue payload;

  if(m_addressDefinitionHasBeenSet)
  {
   payload.WithString("AddressDefinition", m_addressDefinition);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
