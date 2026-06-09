/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseBackupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseBackupSummary::AutonomousDatabaseBackupSummary(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseBackupSummary& AutonomousDatabaseBackupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autonomousDatabaseBackupId")) {
    m_autonomousDatabaseBackupId = jsonValue.GetString("autonomousDatabaseBackupId");
    m_autonomousDatabaseBackupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseBackupArn")) {
    m_autonomousDatabaseBackupArn = jsonValue.GetString("autonomousDatabaseBackupArn");
    m_autonomousDatabaseBackupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseId")) {
    m_autonomousDatabaseId = jsonValue.GetString("autonomousDatabaseId");
    m_autonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocid")) {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbVersion")) {
    m_dbVersion = jsonValue.GetString("dbVersion");
    m_dbVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AutonomousDatabaseBackupStatusMapper::GetAutonomousDatabaseBackupStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAutomatic")) {
    m_isAutomatic = jsonValue.GetBool("isAutomatic");
    m_isAutomaticHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionPeriodInDays")) {
    m_retentionPeriodInDays = jsonValue.GetInteger("retentionPeriodInDays");
    m_retentionPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeInTBs")) {
    m_sizeInTBs = jsonValue.GetDouble("sizeInTBs");
    m_sizeInTBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeAvailableTill")) {
    m_timeAvailableTill = jsonValue.GetString("timeAvailableTill");
    m_timeAvailableTillHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeStarted")) {
    m_timeStarted = jsonValue.GetString("timeStarted");
    m_timeStartedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeEnded")) {
    m_timeEnded = jsonValue.GetString("timeEnded");
    m_timeEndedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = AutonomousDatabaseBackupTypeMapper::GetAutonomousDatabaseBackupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseBackupSummary::Jsonize() const {
  JsonValue payload;

  if (m_autonomousDatabaseBackupIdHasBeenSet) {
    payload.WithString("autonomousDatabaseBackupId", m_autonomousDatabaseBackupId);
  }

  if (m_autonomousDatabaseBackupArnHasBeenSet) {
    payload.WithString("autonomousDatabaseBackupArn", m_autonomousDatabaseBackupArn);
  }

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_ocidHasBeenSet) {
    payload.WithString("ocid", m_ocid);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_dbVersionHasBeenSet) {
    payload.WithString("dbVersion", m_dbVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutonomousDatabaseBackupStatusMapper::GetNameForAutonomousDatabaseBackupStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_isAutomaticHasBeenSet) {
    payload.WithBool("isAutomatic", m_isAutomatic);
  }

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);
  }

  if (m_sizeInTBsHasBeenSet) {
    payload.WithDouble("sizeInTBs", m_sizeInTBs);
  }

  if (m_timeAvailableTillHasBeenSet) {
    payload.WithString("timeAvailableTill", m_timeAvailableTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeStartedHasBeenSet) {
    payload.WithString("timeStarted", m_timeStarted.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeEndedHasBeenSet) {
    payload.WithString("timeEnded", m_timeEnded.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", AutonomousDatabaseBackupTypeMapper::GetNameForAutonomousDatabaseBackupType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
