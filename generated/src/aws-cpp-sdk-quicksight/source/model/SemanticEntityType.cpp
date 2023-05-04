/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SemanticEntityType.h>
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

SemanticEntityType::SemanticEntityType() : 
    m_typeNameHasBeenSet(false),
    m_subTypeNameHasBeenSet(false),
    m_typeParametersHasBeenSet(false)
{
}

SemanticEntityType::SemanticEntityType(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_subTypeNameHasBeenSet(false),
    m_typeParametersHasBeenSet(false)
{
  *this = jsonValue;
}

SemanticEntityType& SemanticEntityType::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SemanticEntityType::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
