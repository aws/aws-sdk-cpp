/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/TimePeriod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

TimePeriod::TimePeriod(JsonView jsonValue) { *this = jsonValue; }

TimePeriod& TimePeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Start")) {
    m_start = jsonValue.GetString("Start");
    m_startHasBeenSet = true;
  }
  if (jsonValue.ValueExists("End")) {
    m_end = jsonValue.GetString("End");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue TimePeriod::Jsonize() const {
  JsonValue payload;

  if (m_startHasBeenSet) {
    payload.WithString("Start", m_start.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endHasBeenSet) {
    payload.WithString("End", m_end.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
