/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAttributeValue.h>
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

DocumentAttributeValue::DocumentAttributeValue() : 
    m_dateValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringListValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

DocumentAttributeValue::DocumentAttributeValue(JsonView jsonValue) : 
    m_dateValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringListValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeValue& DocumentAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateValue"))
  {
    m_dateValue = jsonValue.GetDouble("dateValue");

    m_dateValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringListValue"))
  {
    Aws::Utils::Array<JsonView> stringListValueJsonList = jsonValue.GetArray("stringListValue");
    for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
    {
      m_stringListValue.push_back(stringListValueJsonList[stringListValueIndex].AsString());
    }
    m_stringListValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_dateValueHasBeenSet)
  {
   payload.WithDouble("dateValue", m_dateValue.SecondsWithMSPrecision());
  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_stringListValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListValueJsonList(m_stringListValue.size());
   for(unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex)
   {
     stringListValueJsonList[stringListValueIndex].AsString(m_stringListValue[stringListValueIndex]);
   }
   payload.WithArray("stringListValue", std::move(stringListValueJsonList));

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
