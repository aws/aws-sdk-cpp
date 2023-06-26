/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomParameterValues.h>
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

CustomParameterValues::CustomParameterValues() : 
    m_stringValuesHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_decimalValuesHasBeenSet(false),
    m_dateTimeValuesHasBeenSet(false)
{
}

CustomParameterValues::CustomParameterValues(JsonView jsonValue) : 
    m_stringValuesHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_decimalValuesHasBeenSet(false),
    m_dateTimeValuesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomParameterValues& CustomParameterValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringValues"))
  {
    Aws::Utils::Array<JsonView> stringValuesJsonList = jsonValue.GetArray("StringValues");
    for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
    {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
    m_stringValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerValues"))
  {
    Aws::Utils::Array<JsonView> integerValuesJsonList = jsonValue.GetArray("IntegerValues");
    for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
    {
      m_integerValues.push_back(integerValuesJsonList[integerValuesIndex].AsInt64());
    }
    m_integerValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalValues"))
  {
    Aws::Utils::Array<JsonView> decimalValuesJsonList = jsonValue.GetArray("DecimalValues");
    for(unsigned decimalValuesIndex = 0; decimalValuesIndex < decimalValuesJsonList.GetLength(); ++decimalValuesIndex)
    {
      m_decimalValues.push_back(decimalValuesJsonList[decimalValuesIndex].AsDouble());
    }
    m_decimalValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeValues"))
  {
    Aws::Utils::Array<JsonView> dateTimeValuesJsonList = jsonValue.GetArray("DateTimeValues");
    for(unsigned dateTimeValuesIndex = 0; dateTimeValuesIndex < dateTimeValuesJsonList.GetLength(); ++dateTimeValuesIndex)
    {
      m_dateTimeValues.push_back(dateTimeValuesJsonList[dateTimeValuesIndex].AsDouble());
    }
    m_dateTimeValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomParameterValues::Jsonize() const
{
  JsonValue payload;

  if(m_stringValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringValuesJsonList(m_stringValues.size());
   for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
   {
     stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
   }
   payload.WithArray("StringValues", std::move(stringValuesJsonList));

  }

  if(m_integerValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerValuesJsonList(m_integerValues.size());
   for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
   {
     integerValuesJsonList[integerValuesIndex].AsInt64(m_integerValues[integerValuesIndex]);
   }
   payload.WithArray("IntegerValues", std::move(integerValuesJsonList));

  }

  if(m_decimalValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> decimalValuesJsonList(m_decimalValues.size());
   for(unsigned decimalValuesIndex = 0; decimalValuesIndex < decimalValuesJsonList.GetLength(); ++decimalValuesIndex)
   {
     decimalValuesJsonList[decimalValuesIndex].AsDouble(m_decimalValues[decimalValuesIndex]);
   }
   payload.WithArray("DecimalValues", std::move(decimalValuesJsonList));

  }

  if(m_dateTimeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dateTimeValuesJsonList(m_dateTimeValues.size());
   for(unsigned dateTimeValuesIndex = 0; dateTimeValuesIndex < dateTimeValuesJsonList.GetLength(); ++dateTimeValuesIndex)
   {
     dateTimeValuesJsonList[dateTimeValuesIndex].AsDouble(m_dateTimeValues[dateTimeValuesIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("DateTimeValues", std::move(dateTimeValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
