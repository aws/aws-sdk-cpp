/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/HierarchyFilterDropDownControlDisplayOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

HierarchyFilterDropDownControlDisplayOptions::HierarchyFilterDropDownControlDisplayOptions(JsonView jsonValue) { *this = jsonValue; }

HierarchyFilterDropDownControlDisplayOptions& HierarchyFilterDropDownControlDisplayOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TitleOptions")) {
    m_titleOptions = jsonValue.GetObject("TitleOptions");
    m_titleOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InfoIconLabelOptions")) {
    m_infoIconLabelOptions = jsonValue.GetObject("InfoIconLabelOptions");
    m_infoIconLabelOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyFilterDropDownControlDisplayOptions::Jsonize() const {
  JsonValue payload;

  if (m_titleOptionsHasBeenSet) {
    payload.WithObject("TitleOptions", m_titleOptions.Jsonize());
  }

  if (m_infoIconLabelOptionsHasBeenSet) {
    payload.WithObject("InfoIconLabelOptions", m_infoIconLabelOptions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
