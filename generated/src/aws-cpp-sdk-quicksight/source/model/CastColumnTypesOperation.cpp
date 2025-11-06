/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CastColumnTypesOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CastColumnTypesOperation::CastColumnTypesOperation(JsonView jsonValue) { *this = jsonValue; }

CastColumnTypesOperation& CastColumnTypesOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CastColumnTypeOperations")) {
    Aws::Utils::Array<JsonView> castColumnTypeOperationsJsonList = jsonValue.GetArray("CastColumnTypeOperations");
    for (unsigned castColumnTypeOperationsIndex = 0; castColumnTypeOperationsIndex < castColumnTypeOperationsJsonList.GetLength();
         ++castColumnTypeOperationsIndex) {
      m_castColumnTypeOperations.push_back(castColumnTypeOperationsJsonList[castColumnTypeOperationsIndex].AsObject());
    }
    m_castColumnTypeOperationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CastColumnTypesOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_castColumnTypeOperationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> castColumnTypeOperationsJsonList(m_castColumnTypeOperations.size());
    for (unsigned castColumnTypeOperationsIndex = 0; castColumnTypeOperationsIndex < castColumnTypeOperationsJsonList.GetLength();
         ++castColumnTypeOperationsIndex) {
      castColumnTypeOperationsJsonList[castColumnTypeOperationsIndex].AsObject(
          m_castColumnTypeOperations[castColumnTypeOperationsIndex].Jsonize());
    }
    payload.WithArray("CastColumnTypeOperations", std::move(castColumnTypeOperationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
