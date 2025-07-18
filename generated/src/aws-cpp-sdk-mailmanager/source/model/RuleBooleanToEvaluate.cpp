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

RuleBooleanToEvaluate::RuleBooleanToEvaluate(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Analysis"))
  {
    m_analysis = jsonValue.GetObject("Analysis");
    m_analysisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsInAddressList"))
  {
    m_isInAddressList = jsonValue.GetObject("IsInAddressList");
    m_isInAddressListHasBeenSet = true;
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

  if(m_analysisHasBeenSet)
  {
   payload.WithObject("Analysis", m_analysis.Jsonize());

  }

  if(m_isInAddressListHasBeenSet)
  {
   payload.WithObject("IsInAddressList", m_isInAddressList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
