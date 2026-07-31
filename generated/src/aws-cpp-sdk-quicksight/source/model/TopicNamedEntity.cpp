/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicNamedEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicNamedEntity::TopicNamedEntity(JsonView jsonValue) { *this = jsonValue; }

TopicNamedEntity& TopicNamedEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityName")) {
    m_entityName = jsonValue.GetString("EntityName");
    m_entityNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityDescription")) {
    m_entityDescription = jsonValue.GetString("EntityDescription");
    m_entityDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntitySynonyms")) {
    Aws::Utils::Array<JsonView> entitySynonymsJsonList = jsonValue.GetArray("EntitySynonyms");
    for (unsigned entitySynonymsIndex = 0; entitySynonymsIndex < entitySynonymsJsonList.GetLength(); ++entitySynonymsIndex) {
      m_entitySynonyms.push_back(entitySynonymsJsonList[entitySynonymsIndex].AsString());
    }
    m_entitySynonymsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SemanticEntityType")) {
    m_semanticEntityType = jsonValue.GetObject("SemanticEntityType");
    m_semanticEntityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Definition")) {
    Aws::Utils::Array<JsonView> definitionJsonList = jsonValue.GetArray("Definition");
    for (unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex) {
      m_definition.push_back(definitionJsonList[definitionIndex].AsObject());
    }
    m_definitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sort")) {
    Aws::Utils::Array<JsonView> sortJsonList = jsonValue.GetArray("Sort");
    for (unsigned sortIndex = 0; sortIndex < sortJsonList.GetLength(); ++sortIndex) {
      m_sort.push_back(sortJsonList[sortIndex].AsObject());
    }
    m_sortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RankOrder")) {
    m_rankOrder = jsonValue.GetInteger("RankOrder");
    m_rankOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PresentationOrder")) {
    m_presentationOrder = jsonValue.GetInteger("PresentationOrder");
    m_presentationOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicNamedEntity::Jsonize() const {
  JsonValue payload;

  if (m_entityNameHasBeenSet) {
    payload.WithString("EntityName", m_entityName);
  }

  if (m_entityDescriptionHasBeenSet) {
    payload.WithString("EntityDescription", m_entityDescription);
  }

  if (m_entitySynonymsHasBeenSet) {
    Aws::Utils::Array<JsonValue> entitySynonymsJsonList(m_entitySynonyms.size());
    for (unsigned entitySynonymsIndex = 0; entitySynonymsIndex < entitySynonymsJsonList.GetLength(); ++entitySynonymsIndex) {
      entitySynonymsJsonList[entitySynonymsIndex].AsString(m_entitySynonyms[entitySynonymsIndex]);
    }
    payload.WithArray("EntitySynonyms", std::move(entitySynonymsJsonList));
  }

  if (m_semanticEntityTypeHasBeenSet) {
    payload.WithObject("SemanticEntityType", m_semanticEntityType.Jsonize());
  }

  if (m_definitionHasBeenSet) {
    Aws::Utils::Array<JsonValue> definitionJsonList(m_definition.size());
    for (unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex) {
      definitionJsonList[definitionIndex].AsObject(m_definition[definitionIndex].Jsonize());
    }
    payload.WithArray("Definition", std::move(definitionJsonList));
  }

  if (m_sortHasBeenSet) {
    Aws::Utils::Array<JsonValue> sortJsonList(m_sort.size());
    for (unsigned sortIndex = 0; sortIndex < sortJsonList.GetLength(); ++sortIndex) {
      sortJsonList[sortIndex].AsObject(m_sort[sortIndex].Jsonize());
    }
    payload.WithArray("Sort", std::move(sortJsonList));
  }

  if (m_rankOrderHasBeenSet) {
    payload.WithInteger("RankOrder", m_rankOrder);
  }

  if (m_presentationOrderHasBeenSet) {
    payload.WithInteger("PresentationOrder", m_presentationOrder);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
