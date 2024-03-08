/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ParameterValue::ParameterValue() : 
    m_integer(0),
    m_integerHasBeenSet(false),
    m_integerListHasBeenSet(false),
    m_double(0.0),
    m_doubleHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_stringListHasBeenSet(false),
    m_boolean(false),
    m_booleanHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_enumListHasBeenSet(false)
{
}

ParameterValue::ParameterValue(JsonView jsonValue) : 
    m_integer(0),
    m_integerHasBeenSet(false),
    m_integerListHasBeenSet(false),
    m_double(0.0),
    m_doubleHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_stringListHasBeenSet(false),
    m_boolean(false),
    m_booleanHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_enumListHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterValue& ParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Integer"))
  {
    m_integer = jsonValue.GetInteger("Integer");

    m_integerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerList"))
  {
    Aws::Utils::Array<JsonView> integerListJsonList = jsonValue.GetArray("IntegerList");
    for(unsigned integerListIndex = 0; integerListIndex < integerListJsonList.GetLength(); ++integerListIndex)
    {
      m_integerList.push_back(integerListJsonList[integerListIndex].AsInteger());
    }
    m_integerListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Double"))
  {
    m_double = jsonValue.GetDouble("Double");

    m_doubleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("String"))
  {
    m_string = jsonValue.GetString("String");

    m_stringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringList"))
  {
    Aws::Utils::Array<JsonView> stringListJsonList = jsonValue.GetArray("StringList");
    for(unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex)
    {
      m_stringList.push_back(stringListJsonList[stringListIndex].AsString());
    }
    m_stringListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Boolean"))
  {
    m_boolean = jsonValue.GetBool("Boolean");

    m_booleanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enum"))
  {
    m_enum = jsonValue.GetString("Enum");

    m_enumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnumList"))
  {
    Aws::Utils::Array<JsonView> enumListJsonList = jsonValue.GetArray("EnumList");
    for(unsigned enumListIndex = 0; enumListIndex < enumListJsonList.GetLength(); ++enumListIndex)
    {
      m_enumList.push_back(enumListJsonList[enumListIndex].AsString());
    }
    m_enumListHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_integerHasBeenSet)
  {
   payload.WithInteger("Integer", m_integer);

  }

  if(m_integerListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerListJsonList(m_integerList.size());
   for(unsigned integerListIndex = 0; integerListIndex < integerListJsonList.GetLength(); ++integerListIndex)
   {
     integerListJsonList[integerListIndex].AsInteger(m_integerList[integerListIndex]);
   }
   payload.WithArray("IntegerList", std::move(integerListJsonList));

  }

  if(m_doubleHasBeenSet)
  {
   payload.WithDouble("Double", m_double);

  }

  if(m_stringHasBeenSet)
  {
   payload.WithString("String", m_string);

  }

  if(m_stringListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListJsonList(m_stringList.size());
   for(unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex)
   {
     stringListJsonList[stringListIndex].AsString(m_stringList[stringListIndex]);
   }
   payload.WithArray("StringList", std::move(stringListJsonList));

  }

  if(m_booleanHasBeenSet)
  {
   payload.WithBool("Boolean", m_boolean);

  }

  if(m_enumHasBeenSet)
  {
   payload.WithString("Enum", m_enum);

  }

  if(m_enumListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enumListJsonList(m_enumList.size());
   for(unsigned enumListIndex = 0; enumListIndex < enumListJsonList.GetLength(); ++enumListIndex)
   {
     enumListJsonList[enumListIndex].AsString(m_enumList[enumListIndex]);
   }
   payload.WithArray("EnumList", std::move(enumListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
