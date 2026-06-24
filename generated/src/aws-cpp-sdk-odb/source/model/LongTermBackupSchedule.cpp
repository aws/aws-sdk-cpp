/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/LongTermBackupSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

LongTermBackupSchedule::LongTermBackupSchedule(JsonView jsonValue) { *this = jsonValue; }

LongTermBackupSchedule& LongTermBackupSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isDisabled")) {
    m_isDisabled = jsonValue.GetBool("isDisabled");
    m_isDisabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repeatCadence")) {
    m_repeatCadence = RepeatCadenceMapper::GetRepeatCadenceForName(jsonValue.GetString("repeatCadence"));
    m_repeatCadenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionPeriodInDays")) {
    m_retentionPeriodInDays = jsonValue.GetInteger("retentionPeriodInDays");
    m_retentionPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfBackup")) {
    m_timeOfBackup = jsonValue.GetString("timeOfBackup");
    m_timeOfBackupHasBeenSet = true;
  }
  return *this;
}

JsonValue LongTermBackupSchedule::Jsonize() const {
  JsonValue payload;

  if (m_isDisabledHasBeenSet) {
    payload.WithBool("isDisabled", m_isDisabled);
  }

  if (m_repeatCadenceHasBeenSet) {
    payload.WithString("repeatCadence", RepeatCadenceMapper::GetNameForRepeatCadence(m_repeatCadence));
  }

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);
  }

  if (m_timeOfBackupHasBeenSet) {
    payload.WithString("timeOfBackup", m_timeOfBackup.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
