/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

AttributeValue::AttributeValue() : 
    m_boolean(false),
    m_booleanHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_long(0),
    m_longHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_setHasBeenSet(false),
    m_recordHasBeenSet(false)
{
}

AttributeValue::AttributeValue(JsonView jsonValue) : 
    m_boolean(false),
    m_booleanHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_long(0),
    m_longHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_setHasBeenSet(false),
    m_recordHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeValue& AttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boolean"))
  {
    m_boolean = jsonValue.GetBool("boolean");

    m_booleanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityIdentifier"))
  {
    m_entityIdentifier = jsonValue.GetObject("entityIdentifier");

    m_entityIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("long"))
  {
    m_long = jsonValue.GetInt64("long");

    m_longHasBeenSet = true;
  }

  if(jsonValue.ValueExists("string"))
  {
    m_string = jsonValue.GetString("string");

    m_stringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("set"))
  {
    Aws::Utils::Array<JsonView> setJsonList = jsonValue.GetArray("set");
    for(unsigned setIndex = 0; setIndex < setJsonList.GetLength(); ++setIndex)
    {
      m_set.push_back(setJsonList[setIndex].AsObject());
    }
    m_setHasBeenSet = true;
  }

  if(jsonValue.ValueExists("record"))
  {
    Aws::Map<Aws::String, JsonView> recordJsonMap = jsonValue.GetObject("record").GetAllObjects();
    for(auto& recordItem : recordJsonMap)
    {
      m_record[recordItem.first] = recordItem.second.AsObject();
    }
    m_recordHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_booleanHasBeenSet)
  {
   payload.WithBool("boolean", m_boolean);

  }

  if(m_entityIdentifierHasBeenSet)
  {
   payload.WithObject("entityIdentifier", m_entityIdentifier.Jsonize());

  }

  if(m_longHasBeenSet)
  {
   payload.WithInt64("long", m_long);

  }

  if(m_stringHasBeenSet)
  {
   payload.WithString("string", m_string);

  }

  if(m_setHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> setJsonList(m_set.size());
   for(unsigned setIndex = 0; setIndex < setJsonList.GetLength(); ++setIndex)
   {
     setJsonList[setIndex].AsObject(m_set[setIndex].Jsonize());
   }
   payload.WithArray("set", std::move(setJsonList));

  }

  if(m_recordHasBeenSet)
  {
   JsonValue recordJsonMap;
   for(auto& recordItem : m_record)
   {
     recordJsonMap.WithObject(recordItem.first, recordItem.second.Jsonize());
   }
   payload.WithObject("record", std::move(recordJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
