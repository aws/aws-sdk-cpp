/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FreeFormLayoutConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FreeFormLayoutConfiguration::FreeFormLayoutConfiguration(JsonView jsonValue) { *this = jsonValue; }

FreeFormLayoutConfiguration& FreeFormLayoutConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Elements")) {
    Aws::Utils::Array<JsonView> elementsJsonList = jsonValue.GetArray("Elements");
    for (unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex) {
      m_elements.push_back(elementsJsonList[elementsIndex].AsObject());
    }
    m_elementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanvasSizeOptions")) {
    m_canvasSizeOptions = jsonValue.GetObject("CanvasSizeOptions");
    m_canvasSizeOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Groups")) {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for (unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex) {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }
  return *this;
}

JsonValue FreeFormLayoutConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_elementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
    for (unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex) {
      elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
    }
    payload.WithArray("Elements", std::move(elementsJsonList));
  }

  if (m_canvasSizeOptionsHasBeenSet) {
    payload.WithObject("CanvasSizeOptions", m_canvasSizeOptions.Jsonize());
  }

  if (m_groupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
    for (unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex) {
      groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
    }
    payload.WithArray("Groups", std::move(groupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
