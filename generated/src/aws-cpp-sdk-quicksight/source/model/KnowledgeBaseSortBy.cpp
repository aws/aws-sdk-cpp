/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseSortBy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseSortBy::KnowledgeBaseSortBy(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseSortBy& KnowledgeBaseSortBy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sortByField")) {
    m_sortByField = KnowledgeBaseSortByFieldMapper::GetKnowledgeBaseSortByFieldForName(jsonValue.GetString("sortByField"));
    m_sortByFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseSortBy::Jsonize() const {
  JsonValue payload;

  if (m_sortByFieldHasBeenSet) {
    payload.WithString("sortByField", KnowledgeBaseSortByFieldMapper::GetNameForKnowledgeBaseSortByField(m_sortByField));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
