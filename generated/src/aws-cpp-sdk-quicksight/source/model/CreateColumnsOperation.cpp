/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateColumnsOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CreateColumnsOperation::CreateColumnsOperation(JsonView jsonValue) { *this = jsonValue; }

CreateColumnsOperation& CreateColumnsOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Columns")) {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for (unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex) {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateColumnsOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_columnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
    for (unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex) {
      columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
    }
    payload.WithArray("Columns", std::move(columnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
