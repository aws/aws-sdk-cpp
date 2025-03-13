/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesDestinations.h>
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

RuleGroupSourceStatelessRuleMatchAttributesDestinations::RuleGroupSourceStatelessRuleMatchAttributesDestinations(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRuleMatchAttributesDestinations& RuleGroupSourceStatelessRuleMatchAttributesDestinations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressDefinition"))
  {
    m_addressDefinition = jsonValue.GetString("AddressDefinition");
    m_addressDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleGroupSourceStatelessRuleMatchAttributesDestinations::Jsonize() const
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
