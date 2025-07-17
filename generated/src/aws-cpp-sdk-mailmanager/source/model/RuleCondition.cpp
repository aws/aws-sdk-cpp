/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleCondition.h>
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

RuleCondition::RuleCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleCondition& RuleCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BooleanExpression"))
  {
    m_booleanExpression = jsonValue.GetObject("BooleanExpression");
    m_booleanExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StringExpression"))
  {
    m_stringExpression = jsonValue.GetObject("StringExpression");
    m_stringExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberExpression"))
  {
    m_numberExpression = jsonValue.GetObject("NumberExpression");
    m_numberExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpExpression"))
  {
    m_ipExpression = jsonValue.GetObject("IpExpression");
    m_ipExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VerdictExpression"))
  {
    m_verdictExpression = jsonValue.GetObject("VerdictExpression");
    m_verdictExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DmarcExpression"))
  {
    m_dmarcExpression = jsonValue.GetObject("DmarcExpression");
    m_dmarcExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleCondition::Jsonize() const
{
  JsonValue payload;

  if(m_booleanExpressionHasBeenSet)
  {
   payload.WithObject("BooleanExpression", m_booleanExpression.Jsonize());

  }

  if(m_stringExpressionHasBeenSet)
  {
   payload.WithObject("StringExpression", m_stringExpression.Jsonize());

  }

  if(m_numberExpressionHasBeenSet)
  {
   payload.WithObject("NumberExpression", m_numberExpression.Jsonize());

  }

  if(m_ipExpressionHasBeenSet)
  {
   payload.WithObject("IpExpression", m_ipExpression.Jsonize());

  }

  if(m_verdictExpressionHasBeenSet)
  {
   payload.WithObject("VerdictExpression", m_verdictExpression.Jsonize());

  }

  if(m_dmarcExpressionHasBeenSet)
  {
   payload.WithObject("DmarcExpression", m_dmarcExpression.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
