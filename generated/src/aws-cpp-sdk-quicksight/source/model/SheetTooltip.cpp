/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SheetTooltip.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SheetTooltip::SheetTooltip(JsonView jsonValue) { *this = jsonValue; }

SheetTooltip& SheetTooltip::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SheetId")) {
    m_sheetId = jsonValue.GetString("SheetId");
    m_sheetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetTooltip::Jsonize() const {
  JsonValue payload;

  if (m_sheetIdHasBeenSet) {
    payload.WithString("SheetId", m_sheetId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
