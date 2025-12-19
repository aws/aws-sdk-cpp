/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataFieldComboSeriesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataFieldComboSeriesItem::DataFieldComboSeriesItem(JsonView jsonValue) { *this = jsonValue; }

DataFieldComboSeriesItem& DataFieldComboSeriesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldId")) {
    m_fieldId = jsonValue.GetString("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldValue")) {
    m_fieldValue = jsonValue.GetString("FieldValue");
    m_fieldValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Settings")) {
    m_settings = jsonValue.GetObject("Settings");
    m_settingsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataFieldComboSeriesItem::Jsonize() const {
  JsonValue payload;

  if (m_fieldIdHasBeenSet) {
    payload.WithString("FieldId", m_fieldId);
  }

  if (m_fieldValueHasBeenSet) {
    payload.WithString("FieldValue", m_fieldValue);
  }

  if (m_settingsHasBeenSet) {
    payload.WithObject("Settings", m_settings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
