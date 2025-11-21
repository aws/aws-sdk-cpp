/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SheetBackgroundStyle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SheetBackgroundStyle::SheetBackgroundStyle(JsonView jsonValue) { *this = jsonValue; }

SheetBackgroundStyle& SheetBackgroundStyle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Color")) {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Gradient")) {
    m_gradient = jsonValue.GetString("Gradient");
    m_gradientHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetBackgroundStyle::Jsonize() const {
  JsonValue payload;

  if (m_colorHasBeenSet) {
    payload.WithString("Color", m_color);
  }

  if (m_gradientHasBeenSet) {
    payload.WithString("Gradient", m_gradient);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
