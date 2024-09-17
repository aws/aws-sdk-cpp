/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleIpToEvaluate.h>
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

RuleIpToEvaluate::RuleIpToEvaluate() : 
    m_attribute(RuleIpEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

RuleIpToEvaluate::RuleIpToEvaluate(JsonView jsonValue)
  : RuleIpToEvaluate()
{
  *this = jsonValue;
}

RuleIpToEvaluate& RuleIpToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleIpEmailAttributeMapper::GetRuleIpEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleIpToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleIpEmailAttributeMapper::GetNameForRuleIpEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
