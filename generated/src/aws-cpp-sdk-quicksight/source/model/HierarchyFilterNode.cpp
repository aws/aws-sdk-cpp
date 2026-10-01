/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/HierarchyFilterNode.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

HierarchyFilterNode::HierarchyFilterNode(JsonView jsonValue) { *this = jsonValue; }

HierarchyFilterNode& HierarchyFilterNode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Column")) {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ParentValue")) {
    m_parentValue = jsonValue.GetString("ParentValue");
    m_parentValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyValues")) {
    Aws::Utils::Array<JsonView> hierarchyValuesJsonList = jsonValue.GetArray("HierarchyValues");
    for (unsigned hierarchyValuesIndex = 0; hierarchyValuesIndex < hierarchyValuesJsonList.GetLength(); ++hierarchyValuesIndex) {
      m_hierarchyValues.push_back(hierarchyValuesJsonList[hierarchyValuesIndex].AsString());
    }
    m_hierarchyValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Children")) {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("Children");
    for (unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex) {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyFilterNode::Jsonize() const {
  JsonValue payload;

  if (m_columnHasBeenSet) {
    payload.WithObject("Column", m_column.Jsonize());
  }

  if (m_parentValueHasBeenSet) {
    payload.WithString("ParentValue", m_parentValue);
  }

  if (m_hierarchyValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> hierarchyValuesJsonList(m_hierarchyValues.size());
    for (unsigned hierarchyValuesIndex = 0; hierarchyValuesIndex < hierarchyValuesJsonList.GetLength(); ++hierarchyValuesIndex) {
      hierarchyValuesJsonList[hierarchyValuesIndex].AsString(m_hierarchyValues[hierarchyValuesIndex]);
    }
    payload.WithArray("HierarchyValues", std::move(hierarchyValuesJsonList));
  }

  if (m_childrenHasBeenSet) {
    Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
    for (unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex) {
      childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
    }
    payload.WithArray("Children", std::move(childrenJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
