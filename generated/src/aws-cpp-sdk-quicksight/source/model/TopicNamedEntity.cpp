/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicNamedEntity.h>
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

TopicNamedEntity::TopicNamedEntity() : 
    m_entityNameHasBeenSet(false),
    m_entityDescriptionHasBeenSet(false),
    m_entitySynonymsHasBeenSet(false),
    m_semanticEntityTypeHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

TopicNamedEntity::TopicNamedEntity(JsonView jsonValue) : 
    m_entityNameHasBeenSet(false),
    m_entityDescriptionHasBeenSet(false),
    m_entitySynonymsHasBeenSet(false),
    m_semanticEntityTypeHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
  *this = jsonValue;
}

TopicNamedEntity& TopicNamedEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityName"))
  {
    m_entityName = jsonValue.GetString("EntityName");

    m_entityNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityDescription"))
  {
    m_entityDescription = jsonValue.GetString("EntityDescription");

    m_entityDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntitySynonyms"))
  {
    Aws::Utils::Array<JsonView> entitySynonymsJsonList = jsonValue.GetArray("EntitySynonyms");
    for(unsigned entitySynonymsIndex = 0; entitySynonymsIndex < entitySynonymsJsonList.GetLength(); ++entitySynonymsIndex)
    {
      m_entitySynonyms.push_back(entitySynonymsJsonList[entitySynonymsIndex].AsString());
    }
    m_entitySynonymsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SemanticEntityType"))
  {
    m_semanticEntityType = jsonValue.GetObject("SemanticEntityType");

    m_semanticEntityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    Aws::Utils::Array<JsonView> definitionJsonList = jsonValue.GetArray("Definition");
    for(unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex)
    {
      m_definition.push_back(definitionJsonList[definitionIndex].AsObject());
    }
    m_definitionHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicNamedEntity::Jsonize() const
{
  JsonValue payload;

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("EntityName", m_entityName);

  }

  if(m_entityDescriptionHasBeenSet)
  {
   payload.WithString("EntityDescription", m_entityDescription);

  }

  if(m_entitySynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitySynonymsJsonList(m_entitySynonyms.size());
   for(unsigned entitySynonymsIndex = 0; entitySynonymsIndex < entitySynonymsJsonList.GetLength(); ++entitySynonymsIndex)
   {
     entitySynonymsJsonList[entitySynonymsIndex].AsString(m_entitySynonyms[entitySynonymsIndex]);
   }
   payload.WithArray("EntitySynonyms", std::move(entitySynonymsJsonList));

  }

  if(m_semanticEntityTypeHasBeenSet)
  {
   payload.WithObject("SemanticEntityType", m_semanticEntityType.Jsonize());

  }

  if(m_definitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> definitionJsonList(m_definition.size());
   for(unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex)
   {
     definitionJsonList[definitionIndex].AsObject(m_definition[definitionIndex].Jsonize());
   }
   payload.WithArray("Definition", std::move(definitionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
