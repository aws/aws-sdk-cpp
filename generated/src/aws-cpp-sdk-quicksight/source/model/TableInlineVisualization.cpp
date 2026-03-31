/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TableInlineVisualization.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TableInlineVisualization::TableInlineVisualization(JsonView jsonValue) { *this = jsonValue; }

TableInlineVisualization& TableInlineVisualization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataBars")) {
    m_dataBars = jsonValue.GetObject("DataBars");
    m_dataBarsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sparklines")) {
    m_sparklines = jsonValue.GetObject("Sparklines");
    m_sparklinesHasBeenSet = true;
  }
  return *this;
}

JsonValue TableInlineVisualization::Jsonize() const {
  JsonValue payload;

  if (m_dataBarsHasBeenSet) {
    payload.WithObject("DataBars", m_dataBars.Jsonize());
  }

  if (m_sparklinesHasBeenSet) {
    payload.WithObject("Sparklines", m_sparklines.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
