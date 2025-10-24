﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TextBoxMenuOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TextBoxMenuOption::TextBoxMenuOption(JsonView jsonValue) { *this = jsonValue; }

TextBoxMenuOption& TextBoxMenuOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AvailabilityStatus")) {
    m_availabilityStatus = DashboardBehaviorMapper::GetDashboardBehaviorForName(jsonValue.GetString("AvailabilityStatus"));
    m_availabilityStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue TextBoxMenuOption::Jsonize() const {
  JsonValue payload;

  if (m_availabilityStatusHasBeenSet) {
    payload.WithString("AvailabilityStatus", DashboardBehaviorMapper::GetNameForDashboardBehavior(m_availabilityStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
