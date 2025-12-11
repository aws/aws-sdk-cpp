/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FieldComboSeriesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FieldComboSeriesItem::FieldComboSeriesItem(JsonView jsonValue) { *this = jsonValue; }

FieldComboSeriesItem& FieldComboSeriesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldId")) {
    m_fieldId = jsonValue.GetString("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Settings")) {
    m_settings = jsonValue.GetObject("Settings");
    m_settingsHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldComboSeriesItem::Jsonize() const {
  JsonValue payload;

  if (m_fieldIdHasBeenSet) {
    payload.WithString("FieldId", m_fieldId);
  }

  if (m_settingsHasBeenSet) {
    payload.WithObject("Settings", m_settings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
