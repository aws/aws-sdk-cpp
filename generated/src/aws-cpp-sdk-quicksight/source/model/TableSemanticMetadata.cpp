/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TableSemanticMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TableSemanticMetadata::TableSemanticMetadata(JsonView jsonValue) { *this = jsonValue; }

TableSemanticMetadata& TableSemanticMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ColumnMetadata")) {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("ColumnMetadata");
    for (unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex) {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
    m_columnMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue TableSemanticMetadata::Jsonize() const {
  JsonValue payload;

  if (m_columnMetadataHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnMetadataJsonList(m_columnMetadata.size());
    for (unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex) {
      columnMetadataJsonList[columnMetadataIndex].AsObject(m_columnMetadata[columnMetadataIndex].Jsonize());
    }
    payload.WithArray("ColumnMetadata", std::move(columnMetadataJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
