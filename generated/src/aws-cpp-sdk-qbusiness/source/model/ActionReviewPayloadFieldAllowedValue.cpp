/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionReviewPayloadFieldAllowedValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionReviewPayloadFieldAllowedValue::ActionReviewPayloadFieldAllowedValue() : 
    m_valueHasBeenSet(false),
    m_displayValueHasBeenSet(false)
{
}

ActionReviewPayloadFieldAllowedValue::ActionReviewPayloadFieldAllowedValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_displayValueHasBeenSet(false)
{
  *this = jsonValue;
}

ActionReviewPayloadFieldAllowedValue& ActionReviewPayloadFieldAllowedValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayValue"))
  {
    m_displayValue = jsonValue.GetObject("displayValue");

    m_displayValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionReviewPayloadFieldAllowedValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  if(m_displayValueHasBeenSet)
  {
    if(!m_displayValue.View().IsNull())
    {
       payload.WithObject("displayValue", JsonValue(m_displayValue.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
