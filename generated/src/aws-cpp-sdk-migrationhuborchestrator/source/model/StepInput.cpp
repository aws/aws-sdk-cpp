/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

StepInput::StepInput() : 
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listOfStringsValueHasBeenSet(false),
    m_mapOfStringValueHasBeenSet(false)
{
}

StepInput::StepInput(JsonView jsonValue) : 
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listOfStringsValueHasBeenSet(false),
    m_mapOfStringValueHasBeenSet(false)
{
  *this = jsonValue;
}

StepInput& StepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listOfStringsValue"))
  {
    Aws::Utils::Array<JsonView> listOfStringsValueJsonList = jsonValue.GetArray("listOfStringsValue");
    for(unsigned listOfStringsValueIndex = 0; listOfStringsValueIndex < listOfStringsValueJsonList.GetLength(); ++listOfStringsValueIndex)
    {
      m_listOfStringsValue.push_back(listOfStringsValueJsonList[listOfStringsValueIndex].AsString());
    }
    m_listOfStringsValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapOfStringValue"))
  {
    Aws::Map<Aws::String, JsonView> mapOfStringValueJsonMap = jsonValue.GetObject("mapOfStringValue").GetAllObjects();
    for(auto& mapOfStringValueItem : mapOfStringValueJsonMap)
    {
      m_mapOfStringValue[mapOfStringValueItem.first] = mapOfStringValueItem.second.AsString();
    }
    m_mapOfStringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue StepInput::Jsonize() const
{
  JsonValue payload;

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_listOfStringsValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listOfStringsValueJsonList(m_listOfStringsValue.size());
   for(unsigned listOfStringsValueIndex = 0; listOfStringsValueIndex < listOfStringsValueJsonList.GetLength(); ++listOfStringsValueIndex)
   {
     listOfStringsValueJsonList[listOfStringsValueIndex].AsString(m_listOfStringsValue[listOfStringsValueIndex]);
   }
   payload.WithArray("listOfStringsValue", std::move(listOfStringsValueJsonList));

  }

  if(m_mapOfStringValueHasBeenSet)
  {
   JsonValue mapOfStringValueJsonMap;
   for(auto& mapOfStringValueItem : m_mapOfStringValue)
   {
     mapOfStringValueJsonMap.WithString(mapOfStringValueItem.first, mapOfStringValueItem.second);
   }
   payload.WithObject("mapOfStringValue", std::move(mapOfStringValueJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
