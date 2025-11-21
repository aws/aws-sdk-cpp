/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TileStyle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TileStyle::TileStyle(JsonView jsonValue) { *this = jsonValue; }

TileStyle& TileStyle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BackgroundColor")) {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");
    m_backgroundColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Border")) {
    m_border = jsonValue.GetObject("Border");
    m_borderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderRadius")) {
    m_borderRadius = jsonValue.GetString("BorderRadius");
    m_borderRadiusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Padding")) {
    m_padding = jsonValue.GetString("Padding");
    m_paddingHasBeenSet = true;
  }
  return *this;
}

JsonValue TileStyle::Jsonize() const {
  JsonValue payload;

  if (m_backgroundColorHasBeenSet) {
    payload.WithString("BackgroundColor", m_backgroundColor);
  }

  if (m_borderHasBeenSet) {
    payload.WithObject("Border", m_border.Jsonize());
  }

  if (m_borderRadiusHasBeenSet) {
    payload.WithString("BorderRadius", m_borderRadius);
  }

  if (m_paddingHasBeenSet) {
    payload.WithString("Padding", m_padding);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
