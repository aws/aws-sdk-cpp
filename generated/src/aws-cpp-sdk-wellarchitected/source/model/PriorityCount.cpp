/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PriorityCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

PriorityCount::PriorityCount(JsonView jsonValue) { *this = jsonValue; }

PriorityCount& PriorityCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("priority")) {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue PriorityCount::Jsonize() const {
  JsonValue payload;

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
