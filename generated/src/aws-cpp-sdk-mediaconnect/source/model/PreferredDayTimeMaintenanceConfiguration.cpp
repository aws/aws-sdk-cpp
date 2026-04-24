/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/PreferredDayTimeMaintenanceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

PreferredDayTimeMaintenanceConfiguration::PreferredDayTimeMaintenanceConfiguration(JsonView jsonValue) { *this = jsonValue; }

PreferredDayTimeMaintenanceConfiguration& PreferredDayTimeMaintenanceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("day")) {
    m_day = DayMapper::GetDayForName(jsonValue.GetString("day"));
    m_dayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("time")) {
    m_time = jsonValue.GetString("time");
    m_timeHasBeenSet = true;
  }
  return *this;
}

JsonValue PreferredDayTimeMaintenanceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dayHasBeenSet) {
    payload.WithString("day", DayMapper::GetNameForDay(m_day));
  }

  if (m_timeHasBeenSet) {
    payload.WithString("time", m_time);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
