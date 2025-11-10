/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FiltersOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FiltersOperation::FiltersOperation(JsonView jsonValue) { *this = jsonValue; }

FiltersOperation& FiltersOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterOperations")) {
    Aws::Utils::Array<JsonView> filterOperationsJsonList = jsonValue.GetArray("FilterOperations");
    for (unsigned filterOperationsIndex = 0; filterOperationsIndex < filterOperationsJsonList.GetLength(); ++filterOperationsIndex) {
      m_filterOperations.push_back(filterOperationsJsonList[filterOperationsIndex].AsObject());
    }
    m_filterOperationsHasBeenSet = true;
  }
  return *this;
}

JsonValue FiltersOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_filterOperationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterOperationsJsonList(m_filterOperations.size());
    for (unsigned filterOperationsIndex = 0; filterOperationsIndex < filterOperationsJsonList.GetLength(); ++filterOperationsIndex) {
      filterOperationsJsonList[filterOperationsIndex].AsObject(m_filterOperations[filterOperationsIndex].Jsonize());
    }
    payload.WithArray("FilterOperations", std::move(filterOperationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
