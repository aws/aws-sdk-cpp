/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SemanticTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SemanticTable::SemanticTable(JsonView jsonValue) { *this = jsonValue; }

SemanticTable& SemanticTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationTableId")) {
    m_destinationTableId = jsonValue.GetString("DestinationTableId");
    m_destinationTableIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RowLevelPermissionConfiguration")) {
    m_rowLevelPermissionConfiguration = jsonValue.GetObject("RowLevelPermissionConfiguration");
    m_rowLevelPermissionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SemanticTable::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_destinationTableIdHasBeenSet) {
    payload.WithString("DestinationTableId", m_destinationTableId);
  }

  if (m_rowLevelPermissionConfigurationHasBeenSet) {
    payload.WithObject("RowLevelPermissionConfiguration", m_rowLevelPermissionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
