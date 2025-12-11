/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ComboSeriesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ComboSeriesItem::ComboSeriesItem(JsonView jsonValue) { *this = jsonValue; }

ComboSeriesItem& ComboSeriesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldComboSeriesItem")) {
    m_fieldComboSeriesItem = jsonValue.GetObject("FieldComboSeriesItem");
    m_fieldComboSeriesItemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataFieldComboSeriesItem")) {
    m_dataFieldComboSeriesItem = jsonValue.GetObject("DataFieldComboSeriesItem");
    m_dataFieldComboSeriesItemHasBeenSet = true;
  }
  return *this;
}

JsonValue ComboSeriesItem::Jsonize() const {
  JsonValue payload;

  if (m_fieldComboSeriesItemHasBeenSet) {
    payload.WithObject("FieldComboSeriesItem", m_fieldComboSeriesItem.Jsonize());
  }

  if (m_dataFieldComboSeriesItemHasBeenSet) {
    payload.WithObject("DataFieldComboSeriesItem", m_dataFieldComboSeriesItem.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
