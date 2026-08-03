/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/DbBackupConfigurationOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

DbBackupConfigurationOutput::DbBackupConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

DbBackupConfigurationOutput& DbBackupConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = AutomatedDbBackupTypeMapper::GetAutomatedDbBackupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionDays")) {
    m_retentionDays = jsonValue.GetInteger("retentionDays");
    m_retentionDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customSchedule")) {
    m_customSchedule = jsonValue.GetString("customSchedule");
    m_customScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextAutomatedBackupTime")) {
    m_nextAutomatedBackupTime = jsonValue.GetString("nextAutomatedBackupTime");
    m_nextAutomatedBackupTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DbBackupConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", AutomatedDbBackupTypeMapper::GetNameForAutomatedDbBackupType(m_type));
  }

  if (m_retentionDaysHasBeenSet) {
    payload.WithInteger("retentionDays", m_retentionDays);
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_customScheduleHasBeenSet) {
    payload.WithString("customSchedule", m_customSchedule);
  }

  if (m_nextAutomatedBackupTimeHasBeenSet) {
    payload.WithString("nextAutomatedBackupTime", m_nextAutomatedBackupTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
