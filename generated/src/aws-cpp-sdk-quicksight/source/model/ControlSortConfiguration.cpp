/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ControlSortConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ControlSortConfiguration::ControlSortConfiguration(JsonView jsonValue) { *this = jsonValue; }

ControlSortConfiguration& ControlSortConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SelectableValuesSort")) {
    m_selectableValuesSort = jsonValue.GetObject("SelectableValuesSort");
    m_selectableValuesSortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlColumnSort")) {
    m_controlColumnSort = jsonValue.GetObject("ControlColumnSort");
    m_controlColumnSortHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlSortConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_selectableValuesSortHasBeenSet) {
    payload.WithObject("SelectableValuesSort", m_selectableValuesSort.Jsonize());
  }

  if (m_controlColumnSortHasBeenSet) {
    payload.WithObject("ControlColumnSort", m_controlColumnSort.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
