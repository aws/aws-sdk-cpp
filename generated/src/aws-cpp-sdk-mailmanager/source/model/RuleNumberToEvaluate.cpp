/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleNumberToEvaluate.h>
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

RuleNumberToEvaluate::RuleNumberToEvaluate(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleNumberToEvaluate& RuleNumberToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleNumberEmailAttributeMapper::GetRuleNumberEmailAttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleNumberToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleNumberEmailAttributeMapper::GetNameForRuleNumberEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
