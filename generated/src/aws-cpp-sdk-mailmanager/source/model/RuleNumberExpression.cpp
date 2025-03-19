/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleNumberExpression.h>
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

RuleNumberExpression::RuleNumberExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleNumberExpression& RuleNumberExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Evaluate"))
  {
    m_evaluate = jsonValue.GetObject("Evaluate");
    m_evaluateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = RuleNumberOperatorMapper::GetRuleNumberOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleNumberExpression::Jsonize() const
{
  JsonValue payload;

  if(m_evaluateHasBeenSet)
  {
   payload.WithObject("Evaluate", m_evaluate.Jsonize());

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", RuleNumberOperatorMapper::GetNameForRuleNumberOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
