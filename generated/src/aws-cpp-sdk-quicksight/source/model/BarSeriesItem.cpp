/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BarSeriesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BarSeriesItem::BarSeriesItem(JsonView jsonValue) { *this = jsonValue; }

BarSeriesItem& BarSeriesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldBarSeriesItem")) {
    m_fieldBarSeriesItem = jsonValue.GetObject("FieldBarSeriesItem");
    m_fieldBarSeriesItemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataFieldBarSeriesItem")) {
    m_dataFieldBarSeriesItem = jsonValue.GetObject("DataFieldBarSeriesItem");
    m_dataFieldBarSeriesItemHasBeenSet = true;
  }
  return *this;
}

JsonValue BarSeriesItem::Jsonize() const {
  JsonValue payload;

  if (m_fieldBarSeriesItemHasBeenSet) {
    payload.WithObject("FieldBarSeriesItem", m_fieldBarSeriesItem.Jsonize());
  }

  if (m_dataFieldBarSeriesItemHasBeenSet) {
    payload.WithObject("DataFieldBarSeriesItem", m_dataFieldBarSeriesItem.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
