/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleBooleanExpression.h>
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

RuleBooleanExpression::RuleBooleanExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleBooleanExpression& RuleBooleanExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Evaluate"))
  {
    m_evaluate = jsonValue.GetObject("Evaluate");
    m_evaluateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = RuleBooleanOperatorMapper::GetRuleBooleanOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleBooleanExpression::Jsonize() const
{
  JsonValue payload;

  if(m_evaluateHasBeenSet)
  {
   payload.WithObject("Evaluate", m_evaluate.Jsonize());

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", RuleBooleanOperatorMapper::GetNameForRuleBooleanOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
