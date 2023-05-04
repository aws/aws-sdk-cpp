/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SemanticType.h>
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

SemanticType::SemanticType() : 
    m_typeNameHasBeenSet(false),
    m_subTypeNameHasBeenSet(false),
    m_typeParametersHasBeenSet(false),
    m_truthyCellValueHasBeenSet(false),
    m_truthyCellValueSynonymsHasBeenSet(false),
    m_falseyCellValueHasBeenSet(false),
    m_falseyCellValueSynonymsHasBeenSet(false)
{
}

SemanticType::SemanticType(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_subTypeNameHasBeenSet(false),
    m_typeParametersHasBeenSet(false),
    m_truthyCellValueHasBeenSet(false),
    m_truthyCellValueSynonymsHasBeenSet(false),
    m_falseyCellValueHasBeenSet(false),
    m_falseyCellValueSynonymsHasBeenSet(false)
{
  *this = jsonValue;
}

SemanticType& SemanticType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubTypeName"))
  {
    m_subTypeName = jsonValue.GetString("SubTypeName");

    m_subTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypeParameters"))
  {
    Aws::Map<Aws::String, JsonView> typeParametersJsonMap = jsonValue.GetObject("TypeParameters").GetAllObjects();
    for(auto& typeParametersItem : typeParametersJsonMap)
    {
      m_typeParameters[typeParametersItem.first] = typeParametersItem.second.AsString();
    }
    m_typeParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TruthyCellValue"))
  {
    m_truthyCellValue = jsonValue.GetString("TruthyCellValue");

    m_truthyCellValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TruthyCellValueSynonyms"))
  {
    Aws::Utils::Array<JsonView> truthyCellValueSynonymsJsonList = jsonValue.GetArray("TruthyCellValueSynonyms");
    for(unsigned truthyCellValueSynonymsIndex = 0; truthyCellValueSynonymsIndex < truthyCellValueSynonymsJsonList.GetLength(); ++truthyCellValueSynonymsIndex)
    {
      m_truthyCellValueSynonyms.push_back(truthyCellValueSynonymsJsonList[truthyCellValueSynonymsIndex].AsString());
    }
    m_truthyCellValueSynonymsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FalseyCellValue"))
  {
    m_falseyCellValue = jsonValue.GetString("FalseyCellValue");

    m_falseyCellValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FalseyCellValueSynonyms"))
  {
    Aws::Utils::Array<JsonView> falseyCellValueSynonymsJsonList = jsonValue.GetArray("FalseyCellValueSynonyms");
    for(unsigned falseyCellValueSynonymsIndex = 0; falseyCellValueSynonymsIndex < falseyCellValueSynonymsJsonList.GetLength(); ++falseyCellValueSynonymsIndex)
    {
      m_falseyCellValueSynonyms.push_back(falseyCellValueSynonymsJsonList[falseyCellValueSynonymsIndex].AsString());
    }
    m_falseyCellValueSynonymsHasBeenSet = true;
  }

  return *this;
}

JsonValue SemanticType::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_subTypeNameHasBeenSet)
  {
   payload.WithString("SubTypeName", m_subTypeName);

  }

  if(m_typeParametersHasBeenSet)
  {
   JsonValue typeParametersJsonMap;
   for(auto& typeParametersItem : m_typeParameters)
   {
     typeParametersJsonMap.WithString(typeParametersItem.first, typeParametersItem.second);
   }
   payload.WithObject("TypeParameters", std::move(typeParametersJsonMap));

  }

  if(m_truthyCellValueHasBeenSet)
  {
   payload.WithString("TruthyCellValue", m_truthyCellValue);

  }

  if(m_truthyCellValueSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truthyCellValueSynonymsJsonList(m_truthyCellValueSynonyms.size());
   for(unsigned truthyCellValueSynonymsIndex = 0; truthyCellValueSynonymsIndex < truthyCellValueSynonymsJsonList.GetLength(); ++truthyCellValueSynonymsIndex)
   {
     truthyCellValueSynonymsJsonList[truthyCellValueSynonymsIndex].AsString(m_truthyCellValueSynonyms[truthyCellValueSynonymsIndex]);
   }
   payload.WithArray("TruthyCellValueSynonyms", std::move(truthyCellValueSynonymsJsonList));

  }

  if(m_falseyCellValueHasBeenSet)
  {
   payload.WithString("FalseyCellValue", m_falseyCellValue);

  }

  if(m_falseyCellValueSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> falseyCellValueSynonymsJsonList(m_falseyCellValueSynonyms.size());
   for(unsigned falseyCellValueSynonymsIndex = 0; falseyCellValueSynonymsIndex < falseyCellValueSynonymsJsonList.GetLength(); ++falseyCellValueSynonymsIndex)
   {
     falseyCellValueSynonymsJsonList[falseyCellValueSynonymsIndex].AsString(m_falseyCellValueSynonyms[falseyCellValueSynonymsIndex]);
   }
   payload.WithArray("FalseyCellValueSynonyms", std::move(falseyCellValueSynonymsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
