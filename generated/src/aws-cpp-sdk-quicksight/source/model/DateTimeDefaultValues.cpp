/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimeDefaultValues.h>
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

DateTimeDefaultValues::DateTimeDefaultValues() : 
    m_dynamicValueHasBeenSet(false),
    m_staticValuesHasBeenSet(false),
    m_rollingDateHasBeenSet(false)
{
}

DateTimeDefaultValues::DateTimeDefaultValues(JsonView jsonValue) : 
    m_dynamicValueHasBeenSet(false),
    m_staticValuesHasBeenSet(false),
    m_rollingDateHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeDefaultValues& DateTimeDefaultValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicValue"))
  {
    m_dynamicValue = jsonValue.GetObject("DynamicValue");

    m_dynamicValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StaticValues"))
  {
    Aws::Utils::Array<JsonView> staticValuesJsonList = jsonValue.GetArray("StaticValues");
    for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
    {
      m_staticValues.push_back(staticValuesJsonList[staticValuesIndex].AsDouble());
    }
    m_staticValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RollingDate"))
  {
    m_rollingDate = jsonValue.GetObject("RollingDate");

    m_rollingDateHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeDefaultValues::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicValueHasBeenSet)
  {
   payload.WithObject("DynamicValue", m_dynamicValue.Jsonize());

  }

  if(m_staticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> staticValuesJsonList(m_staticValues.size());
   for(unsigned staticValuesIndex = 0; staticValuesIndex < staticValuesJsonList.GetLength(); ++staticValuesIndex)
   {
     staticValuesJsonList[staticValuesIndex].AsDouble(m_staticValues[staticValuesIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("StaticValues", std::move(staticValuesJsonList));

  }

  if(m_rollingDateHasBeenSet)
  {
   payload.WithObject("RollingDate", m_rollingDate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
