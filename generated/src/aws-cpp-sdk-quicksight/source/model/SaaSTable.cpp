/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SaaSTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SaaSTable::SaaSTable(JsonView jsonValue) { *this = jsonValue; }

SaaSTable& SaaSTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataSourceArn")) {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");
    m_dataSourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TablePath")) {
    Aws::Utils::Array<JsonView> tablePathJsonList = jsonValue.GetArray("TablePath");
    for (unsigned tablePathIndex = 0; tablePathIndex < tablePathJsonList.GetLength(); ++tablePathIndex) {
      m_tablePath.push_back(tablePathJsonList[tablePathIndex].AsObject());
    }
    m_tablePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputColumns")) {
    Aws::Utils::Array<JsonView> inputColumnsJsonList = jsonValue.GetArray("InputColumns");
    for (unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex) {
      m_inputColumns.push_back(inputColumnsJsonList[inputColumnsIndex].AsObject());
    }
    m_inputColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue SaaSTable::Jsonize() const {
  JsonValue payload;

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("DataSourceArn", m_dataSourceArn);
  }

  if (m_tablePathHasBeenSet) {
    Aws::Utils::Array<JsonValue> tablePathJsonList(m_tablePath.size());
    for (unsigned tablePathIndex = 0; tablePathIndex < tablePathJsonList.GetLength(); ++tablePathIndex) {
      tablePathJsonList[tablePathIndex].AsObject(m_tablePath[tablePathIndex].Jsonize());
    }
    payload.WithArray("TablePath", std::move(tablePathJsonList));
  }

  if (m_inputColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputColumnsJsonList(m_inputColumns.size());
    for (unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex) {
      inputColumnsJsonList[inputColumnsIndex].AsObject(m_inputColumns[inputColumnsIndex].Jsonize());
    }
    payload.WithArray("InputColumns", std::move(inputColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
