/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleBooleanToEvaluate.h>
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

RuleBooleanToEvaluate::RuleBooleanToEvaluate() : 
    m_attribute(RuleBooleanEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

RuleBooleanToEvaluate::RuleBooleanToEvaluate(JsonView jsonValue)
  : RuleBooleanToEvaluate()
{
  *this = jsonValue;
}

RuleBooleanToEvaluate& RuleBooleanToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleBooleanEmailAttributeMapper::GetRuleBooleanEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleBooleanToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleBooleanEmailAttributeMapper::GetNameForRuleBooleanEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
