/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleDmarcExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RuleDmarcExpression::RuleDmarcExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleDmarcExpression& RuleDmarcExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = RuleDmarcOperatorMapper::GetRuleDmarcOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(RuleDmarcPolicyMapper::GetRuleDmarcPolicyForName(valuesJsonList[valuesIndex].AsString()));
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleDmarcExpression::Jsonize() const
{
  JsonValue payload;

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", RuleDmarcOperatorMapper::GetNameForRuleDmarcOperator(m_operator));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(RuleDmarcPolicyMapper::GetNameForRuleDmarcPolicy(m_values[valuesIndex]));
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
