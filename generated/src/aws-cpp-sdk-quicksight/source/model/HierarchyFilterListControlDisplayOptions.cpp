/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/HierarchyFilterListControlDisplayOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

HierarchyFilterListControlDisplayOptions::HierarchyFilterListControlDisplayOptions(JsonView jsonValue) { *this = jsonValue; }

HierarchyFilterListControlDisplayOptions& HierarchyFilterListControlDisplayOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TitleOptions")) {
    m_titleOptions = jsonValue.GetObject("TitleOptions");
    m_titleOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InfoIconLabelOptions")) {
    m_infoIconLabelOptions = jsonValue.GetObject("InfoIconLabelOptions");
    m_infoIconLabelOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchOptions")) {
    m_searchOptions = jsonValue.GetObject("SearchOptions");
    m_searchOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyFilterListControlDisplayOptions::Jsonize() const {
  JsonValue payload;

  if (m_titleOptionsHasBeenSet) {
    payload.WithObject("TitleOptions", m_titleOptions.Jsonize());
  }

  if (m_infoIconLabelOptionsHasBeenSet) {
    payload.WithObject("InfoIconLabelOptions", m_infoIconLabelOptions.Jsonize());
  }

  if (m_searchOptionsHasBeenSet) {
    payload.WithObject("SearchOptions", m_searchOptions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
