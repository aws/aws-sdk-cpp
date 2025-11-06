/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SourceTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SourceTable::SourceTable(JsonView jsonValue) { *this = jsonValue; }

SourceTable& SourceTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PhysicalTableId")) {
    m_physicalTableId = jsonValue.GetString("PhysicalTableId");
    m_physicalTableIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSet")) {
    m_dataSet = jsonValue.GetObject("DataSet");
    m_dataSetHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceTable::Jsonize() const {
  JsonValue payload;

  if (m_physicalTableIdHasBeenSet) {
    payload.WithString("PhysicalTableId", m_physicalTableId);
  }

  if (m_dataSetHasBeenSet) {
    payload.WithObject("DataSet", m_dataSet.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
