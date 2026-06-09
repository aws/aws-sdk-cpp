/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SharedColumnSemanticMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SharedColumnSemanticMetadata::SharedColumnSemanticMetadata(JsonView jsonValue) { *this = jsonValue; }

SharedColumnSemanticMetadata& SharedColumnSemanticMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnNames")) {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("ColumnNames");
    for (unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex) {
      m_columnNames.push_back(columnNamesJsonList[columnNamesIndex].AsString());
    }
    m_columnNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnProperties")) {
    Aws::Utils::Array<JsonView> columnPropertiesJsonList = jsonValue.GetArray("ColumnProperties");
    for (unsigned columnPropertiesIndex = 0; columnPropertiesIndex < columnPropertiesJsonList.GetLength(); ++columnPropertiesIndex) {
      m_columnProperties.push_back(columnPropertiesJsonList[columnPropertiesIndex].AsObject());
    }
    m_columnPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue SharedColumnSemanticMetadata::Jsonize() const {
  JsonValue payload;

  if (m_columnNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
    for (unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex) {
      columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
    }
    payload.WithArray("ColumnNames", std::move(columnNamesJsonList));
  }

  if (m_columnPropertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnPropertiesJsonList(m_columnProperties.size());
    for (unsigned columnPropertiesIndex = 0; columnPropertiesIndex < columnPropertiesJsonList.GetLength(); ++columnPropertiesIndex) {
      columnPropertiesJsonList[columnPropertiesIndex].AsObject(m_columnProperties[columnPropertiesIndex].Jsonize());
    }
    payload.WithArray("ColumnProperties", std::move(columnPropertiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
