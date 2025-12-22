/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/GuestUserHistoryCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

GuestUserHistoryCount::GuestUserHistoryCount(JsonView jsonValue) { *this = jsonValue; }

GuestUserHistoryCount& GuestUserHistoryCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("month")) {
    m_month = jsonValue.GetString("month");
    m_monthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetString("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue GuestUserHistoryCount::Jsonize() const {
  JsonValue payload;

  if (m_monthHasBeenSet) {
    payload.WithString("month", m_month);
  }

  if (m_countHasBeenSet) {
    payload.WithString("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
