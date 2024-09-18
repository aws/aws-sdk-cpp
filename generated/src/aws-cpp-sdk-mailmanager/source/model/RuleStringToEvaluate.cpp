/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleStringToEvaluate.h>
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

RuleStringToEvaluate::RuleStringToEvaluate() : 
    m_attribute(RuleStringEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_mimeHeaderAttributeHasBeenSet(false)
{
}

RuleStringToEvaluate::RuleStringToEvaluate(JsonView jsonValue)
  : RuleStringToEvaluate()
{
  *this = jsonValue;
}

RuleStringToEvaluate& RuleStringToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleStringEmailAttributeMapper::GetRuleStringEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MimeHeaderAttribute"))
  {
    m_mimeHeaderAttribute = jsonValue.GetString("MimeHeaderAttribute");

    m_mimeHeaderAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleStringToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleStringEmailAttributeMapper::GetNameForRuleStringEmailAttribute(m_attribute));
  }

  if(m_mimeHeaderAttributeHasBeenSet)
  {
   payload.WithString("MimeHeaderAttribute", m_mimeHeaderAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
