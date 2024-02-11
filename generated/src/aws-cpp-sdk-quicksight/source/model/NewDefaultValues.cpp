/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NewDefaultValues.h>
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

NewDefaultValues::NewDefaultValues() : 
    m_stringStaticValuesHasBeenSet(false),
    m_decimalStaticValuesHasBeenSet(false),
    m_dateTimeStaticValuesHasBeenSet(false),
    m_integerStaticValuesHasBeenSet(false)
{
}

NewDefaultValues::NewDefaultValues(JsonView jsonValue) : 
    m_stringStaticValuesHasBeenSet(false),
    m_decimalStaticValuesHasBeenSet(false),
    m_dateTimeStaticValuesHasBeenSet(false),
    m_integerStaticValuesHasBeenSet(false)
{
  *this = jsonValue;
}

NewDefaultValues& NewDefaultValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringStaticValues"))
  {
    Aws::Utils::Array<JsonView> stringStaticValuesJsonList = jsonValue.GetArray("StringStaticValues");
    for(unsigned stringStaticValuesIndex = 0; stringStaticValuesIndex < stringStaticValuesJsonList.GetLength(); ++stringStaticValuesIndex)
    {
      m_stringStaticValues.push_back(stringStaticValuesJsonList[stringStaticValuesIndex].AsString());
    }
    m_stringStaticValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalStaticValues"))
  {
    Aws::Utils::Array<JsonView> decimalStaticValuesJsonList = jsonValue.GetArray("DecimalStaticValues");
    for(unsigned decimalStaticValuesIndex = 0; decimalStaticValuesIndex < decimalStaticValuesJsonList.GetLength(); ++decimalStaticValuesIndex)
    {
      m_decimalStaticValues.push_back(decimalStaticValuesJsonList[decimalStaticValuesIndex].AsDouble());
    }
    m_decimalStaticValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeStaticValues"))
  {
    Aws::Utils::Array<JsonView> dateTimeStaticValuesJsonList = jsonValue.GetArray("DateTimeStaticValues");
    for(unsigned dateTimeStaticValuesIndex = 0; dateTimeStaticValuesIndex < dateTimeStaticValuesJsonList.GetLength(); ++dateTimeStaticValuesIndex)
    {
      m_dateTimeStaticValues.push_back(dateTimeStaticValuesJsonList[dateTimeStaticValuesIndex].AsDouble());
    }
    m_dateTimeStaticValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerStaticValues"))
  {
    Aws::Utils::Array<JsonView> integerStaticValuesJsonList = jsonValue.GetArray("IntegerStaticValues");
    for(unsigned integerStaticValuesIndex = 0; integerStaticValuesIndex < integerStaticValuesJsonList.GetLength(); ++integerStaticValuesIndex)
    {
      m_integerStaticValues.push_back(integerStaticValuesJsonList[integerStaticValuesIndex].AsInt64());
    }
    m_integerStaticValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue NewDefaultValues::Jsonize() const
{
  JsonValue payload;

  if(m_stringStaticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringStaticValuesJsonList(m_stringStaticValues.size());
   for(unsigned stringStaticValuesIndex = 0; stringStaticValuesIndex < stringStaticValuesJsonList.GetLength(); ++stringStaticValuesIndex)
   {
     stringStaticValuesJsonList[stringStaticValuesIndex].AsString(m_stringStaticValues[stringStaticValuesIndex]);
   }
   payload.WithArray("StringStaticValues", std::move(stringStaticValuesJsonList));

  }

  if(m_decimalStaticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> decimalStaticValuesJsonList(m_decimalStaticValues.size());
   for(unsigned decimalStaticValuesIndex = 0; decimalStaticValuesIndex < decimalStaticValuesJsonList.GetLength(); ++decimalStaticValuesIndex)
   {
     decimalStaticValuesJsonList[decimalStaticValuesIndex].AsDouble(m_decimalStaticValues[decimalStaticValuesIndex]);
   }
   payload.WithArray("DecimalStaticValues", std::move(decimalStaticValuesJsonList));

  }

  if(m_dateTimeStaticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dateTimeStaticValuesJsonList(m_dateTimeStaticValues.size());
   for(unsigned dateTimeStaticValuesIndex = 0; dateTimeStaticValuesIndex < dateTimeStaticValuesJsonList.GetLength(); ++dateTimeStaticValuesIndex)
   {
     dateTimeStaticValuesJsonList[dateTimeStaticValuesIndex].AsDouble(m_dateTimeStaticValues[dateTimeStaticValuesIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("DateTimeStaticValues", std::move(dateTimeStaticValuesJsonList));

  }

  if(m_integerStaticValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerStaticValuesJsonList(m_integerStaticValues.size());
   for(unsigned integerStaticValuesIndex = 0; integerStaticValuesIndex < integerStaticValuesJsonList.GetLength(); ++integerStaticValuesIndex)
   {
     integerStaticValuesJsonList[integerStaticValuesIndex].AsInt64(m_integerStaticValues[integerStaticValuesIndex]);
   }
   payload.WithArray("IntegerStaticValues", std::move(integerStaticValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
