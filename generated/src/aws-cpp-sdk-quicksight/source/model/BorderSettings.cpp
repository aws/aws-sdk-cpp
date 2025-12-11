/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BorderSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BorderSettings::BorderSettings(JsonView jsonValue) { *this = jsonValue; }

BorderSettings& BorderSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BorderVisibility")) {
    m_borderVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("BorderVisibility"));
    m_borderVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderWidth")) {
    m_borderWidth = jsonValue.GetString("BorderWidth");
    m_borderWidthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderColor")) {
    m_borderColor = jsonValue.GetString("BorderColor");
    m_borderColorHasBeenSet = true;
  }
  return *this;
}

JsonValue BorderSettings::Jsonize() const {
  JsonValue payload;

  if (m_borderVisibilityHasBeenSet) {
    payload.WithString("BorderVisibility", VisibilityMapper::GetNameForVisibility(m_borderVisibility));
  }

  if (m_borderWidthHasBeenSet) {
    payload.WithString("BorderWidth", m_borderWidth);
  }

  if (m_borderColorHasBeenSet) {
    payload.WithString("BorderColor", m_borderColor);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
