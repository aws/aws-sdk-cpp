/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/HierarchyFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

HierarchyFilter::HierarchyFilter(JsonView jsonValue) { *this = jsonValue; }

HierarchyFilter& HierarchyFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FilterId")) {
    m_filterId = jsonValue.GetString("FilterId");
    m_filterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Column")) {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyLevels")) {
    Aws::Utils::Array<JsonView> hierarchyLevelsJsonList = jsonValue.GetArray("HierarchyLevels");
    for (unsigned hierarchyLevelsIndex = 0; hierarchyLevelsIndex < hierarchyLevelsJsonList.GetLength(); ++hierarchyLevelsIndex) {
      m_hierarchyLevels.push_back(hierarchyLevelsJsonList[hierarchyLevelsIndex].AsObject());
    }
    m_hierarchyLevelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyTree")) {
    m_hierarchyTree = jsonValue.GetObject("HierarchyTree");
    m_hierarchyTreeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NullOption")) {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));
    m_nullOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MatchOperator")) {
    m_matchOperator = HierarchyFilterMatchOperatorMapper::GetHierarchyFilterMatchOperatorForName(jsonValue.GetString("MatchOperator"));
    m_matchOperatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultFilterControlConfiguration")) {
    m_defaultFilterControlConfiguration = jsonValue.GetObject("DefaultFilterControlConfiguration");
    m_defaultFilterControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyFilter::Jsonize() const {
  JsonValue payload;

  if (m_filterIdHasBeenSet) {
    payload.WithString("FilterId", m_filterId);
  }

  if (m_columnHasBeenSet) {
    payload.WithObject("Column", m_column.Jsonize());
  }

  if (m_hierarchyLevelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> hierarchyLevelsJsonList(m_hierarchyLevels.size());
    for (unsigned hierarchyLevelsIndex = 0; hierarchyLevelsIndex < hierarchyLevelsJsonList.GetLength(); ++hierarchyLevelsIndex) {
      hierarchyLevelsJsonList[hierarchyLevelsIndex].AsObject(m_hierarchyLevels[hierarchyLevelsIndex].Jsonize());
    }
    payload.WithArray("HierarchyLevels", std::move(hierarchyLevelsJsonList));
  }

  if (m_hierarchyTreeHasBeenSet) {
    payload.WithObject("HierarchyTree", m_hierarchyTree.Jsonize());
  }

  if (m_nullOptionHasBeenSet) {
    payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  if (m_matchOperatorHasBeenSet) {
    payload.WithString("MatchOperator", HierarchyFilterMatchOperatorMapper::GetNameForHierarchyFilterMatchOperator(m_matchOperator));
  }

  if (m_defaultFilterControlConfigurationHasBeenSet) {
    payload.WithObject("DefaultFilterControlConfiguration", m_defaultFilterControlConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
