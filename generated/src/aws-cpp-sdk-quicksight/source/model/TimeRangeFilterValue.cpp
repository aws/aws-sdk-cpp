/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeRangeFilterValue.h>
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

TimeRangeFilterValue::TimeRangeFilterValue() : 
    m_staticValueHasBeenSet(false),
    m_rollingDateHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
}

TimeRangeFilterValue::TimeRangeFilterValue(JsonView jsonValue) : 
    m_staticValueHasBeenSet(false),
    m_rollingDateHasBeenSet(false),
    m_parameterHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRangeFilterValue& TimeRangeFilterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticValue"))
  {
    m_staticValue = jsonValue.GetDouble("StaticValue");

    m_staticValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RollingDate"))
  {
    m_rollingDate = jsonValue.GetObject("RollingDate");

    m_rollingDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameter"))
  {
    m_parameter = jsonValue.GetString("Parameter");

    m_parameterHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRangeFilterValue::Jsonize() const
{
  JsonValue payload;

  if(m_staticValueHasBeenSet)
  {
   payload.WithDouble("StaticValue", m_staticValue.SecondsWithMSPrecision());
  }

  if(m_rollingDateHasBeenSet)
  {
   payload.WithObject("RollingDate", m_rollingDate.Jsonize());

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
