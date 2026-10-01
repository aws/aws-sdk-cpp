/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/HierarchyFilterLevel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

HierarchyFilterLevel::HierarchyFilterLevel(JsonView jsonValue) { *this = jsonValue; }

HierarchyFilterLevel& HierarchyFilterLevel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Column")) {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyFilterLevel::Jsonize() const {
  JsonValue payload;

  if (m_columnHasBeenSet) {
    payload.WithObject("Column", m_column.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
