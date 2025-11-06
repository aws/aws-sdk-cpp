/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/RenameColumnsOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

RenameColumnsOperation::RenameColumnsOperation(JsonView jsonValue) { *this = jsonValue; }

RenameColumnsOperation& RenameColumnsOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RenameColumnOperations")) {
    Aws::Utils::Array<JsonView> renameColumnOperationsJsonList = jsonValue.GetArray("RenameColumnOperations");
    for (unsigned renameColumnOperationsIndex = 0; renameColumnOperationsIndex < renameColumnOperationsJsonList.GetLength();
         ++renameColumnOperationsIndex) {
      m_renameColumnOperations.push_back(renameColumnOperationsJsonList[renameColumnOperationsIndex].AsObject());
    }
    m_renameColumnOperationsHasBeenSet = true;
  }
  return *this;
}

JsonValue RenameColumnsOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_renameColumnOperationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> renameColumnOperationsJsonList(m_renameColumnOperations.size());
    for (unsigned renameColumnOperationsIndex = 0; renameColumnOperationsIndex < renameColumnOperationsJsonList.GetLength();
         ++renameColumnOperationsIndex) {
      renameColumnOperationsJsonList[renameColumnOperationsIndex].AsObject(m_renameColumnOperations[renameColumnOperationsIndex].Jsonize());
    }
    payload.WithArray("RenameColumnOperations", std::move(renameColumnOperationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
