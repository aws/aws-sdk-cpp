/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FreeFormLayoutElementBorderStyle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FreeFormLayoutElementBorderStyle::FreeFormLayoutElementBorderStyle(JsonView jsonValue) { *this = jsonValue; }

FreeFormLayoutElementBorderStyle& FreeFormLayoutElementBorderStyle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Visibility")) {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Color")) {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Width")) {
    m_width = jsonValue.GetString("Width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue FreeFormLayoutElementBorderStyle::Jsonize() const {
  JsonValue payload;

  if (m_visibilityHasBeenSet) {
    payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if (m_colorHasBeenSet) {
    payload.WithString("Color", m_color);
  }

  if (m_widthHasBeenSet) {
    payload.WithString("Width", m_width);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
