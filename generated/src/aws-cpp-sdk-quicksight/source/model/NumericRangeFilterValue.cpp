/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericRangeFilterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

NumericRangeFilterValue::NumericRangeFilterValue() : 
    m_staticValue(0.0),
    m_staticValueHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
}

NumericRangeFilterValue::NumericRangeFilterValue(JsonView jsonValue) : 
    m_staticValue(0.0),
    m_staticValueHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
  *this = jsonValue;
}

NumericRangeFilterValue& NumericRangeFilterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticValue"))
  {
    m_staticValue = jsonValue.GetDouble("StaticValue");

    m_staticValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameter"))
  {
    m_parameter = jsonValue.GetString("Parameter");

    m_parameterHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericRangeFilterValue::Jsonize() const
{
  JsonValue payload;

  if(m_staticValueHasBeenSet)
  {
   payload.WithDouble("StaticValue", m_staticValue);

  }

  if(m_parameterHasBeenSet)
  {
   payload.WithString("Parameter", m_parameter);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
