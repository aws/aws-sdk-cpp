/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SelectableValuesSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SelectableValuesSort::SelectableValuesSort(JsonView jsonValue) { *this = jsonValue; }

SelectableValuesSort& SelectableValuesSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Direction")) {
    m_direction = ControlSortDirectionMapper::GetControlSortDirectionForName(jsonValue.GetString("Direction"));
    m_directionHasBeenSet = true;
  }
  return *this;
}

JsonValue SelectableValuesSort::Jsonize() const {
  JsonValue payload;

  if (m_directionHasBeenSet) {
    payload.WithString("Direction", ControlSortDirectionMapper::GetNameForControlSortDirection(m_direction));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
