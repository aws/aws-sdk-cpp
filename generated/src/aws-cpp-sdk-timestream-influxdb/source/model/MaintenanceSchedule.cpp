/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/MaintenanceSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

MaintenanceSchedule::MaintenanceSchedule(JsonView jsonValue) { *this = jsonValue; }

MaintenanceSchedule& MaintenanceSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = jsonValue.GetString("timezone");
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preferredMaintenanceWindow")) {
    m_preferredMaintenanceWindow = jsonValue.GetString("preferredMaintenanceWindow");
    m_preferredMaintenanceWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceSchedule::Jsonize() const {
  JsonValue payload;

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", m_timezone);
  }

  if (m_preferredMaintenanceWindowHasBeenSet) {
    payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
