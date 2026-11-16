/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/TimeWindow.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

TimeWindow::TimeWindow(JsonView jsonValue) { *this = jsonValue; }

TimeWindow& TimeWindow::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("from")) {
    m_from = jsonValue.GetString("from");
    m_fromHasBeenSet = true;
  }
  if (jsonValue.ValueExists("to")) {
    m_to = jsonValue.GetString("to");
    m_toHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeWindow::Jsonize() const {
  JsonValue payload;

  if (m_fromHasBeenSet) {
    payload.WithString("from", m_from.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_toHasBeenSet) {
    payload.WithString("to", m_to.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
