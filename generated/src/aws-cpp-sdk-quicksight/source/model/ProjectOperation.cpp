/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ProjectOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ProjectOperation::ProjectOperation(JsonView jsonValue) { *this = jsonValue; }

ProjectOperation& ProjectOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectedColumns")) {
    Aws::Utils::Array<JsonView> projectedColumnsJsonList = jsonValue.GetArray("ProjectedColumns");
    for (unsigned projectedColumnsIndex = 0; projectedColumnsIndex < projectedColumnsJsonList.GetLength(); ++projectedColumnsIndex) {
      m_projectedColumns.push_back(projectedColumnsJsonList[projectedColumnsIndex].AsString());
    }
    m_projectedColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_projectedColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> projectedColumnsJsonList(m_projectedColumns.size());
    for (unsigned projectedColumnsIndex = 0; projectedColumnsIndex < projectedColumnsJsonList.GetLength(); ++projectedColumnsIndex) {
      projectedColumnsJsonList[projectedColumnsIndex].AsString(m_projectedColumns[projectedColumnsIndex]);
    }
    payload.WithArray("ProjectedColumns", std::move(projectedColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
