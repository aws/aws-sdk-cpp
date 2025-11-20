/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BorderStyle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BorderStyle::BorderStyle(JsonView jsonValue) { *this = jsonValue; }

BorderStyle& BorderStyle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Color")) {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Show")) {
    m_show = jsonValue.GetBool("Show");
    m_showHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Width")) {
    m_width = jsonValue.GetString("Width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue BorderStyle::Jsonize() const {
  JsonValue payload;

  if (m_colorHasBeenSet) {
    payload.WithString("Color", m_color);
  }

  if (m_showHasBeenSet) {
    payload.WithBool("Show", m_show);
  }

  if (m_widthHasBeenSet) {
    payload.WithString("Width", m_width);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
