/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DatabaseStandbySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

DatabaseStandbySummary::DatabaseStandbySummary(JsonView jsonValue) { *this = jsonValue; }

DatabaseStandbySummary& DatabaseStandbySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilityDomain")) {
    m_availabilityDomain = jsonValue.GetString("availabilityDomain");
    m_availabilityDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lagTimeInSeconds")) {
    m_lagTimeInSeconds = jsonValue.GetInteger("lagTimeInSeconds");
    m_lagTimeInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AutonomousDatabaseResourceStatusMapper::GetAutonomousDatabaseResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceTargetComponent")) {
    m_maintenanceTargetComponent = jsonValue.GetString("maintenanceTargetComponent");
    m_maintenanceTargetComponentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeDataGuardRoleChanged")) {
    m_timeDataGuardRoleChanged = jsonValue.GetString("timeDataGuardRoleChanged");
    m_timeDataGuardRoleChangedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeDisasterRecoveryRoleChanged")) {
    m_timeDisasterRecoveryRoleChanged = jsonValue.GetString("timeDisasterRecoveryRoleChanged");
    m_timeDisasterRecoveryRoleChangedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeMaintenanceBegin")) {
    m_timeMaintenanceBegin = jsonValue.GetString("timeMaintenanceBegin");
    m_timeMaintenanceBeginHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeMaintenanceEnd")) {
    m_timeMaintenanceEnd = jsonValue.GetString("timeMaintenanceEnd");
    m_timeMaintenanceEndHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseStandbySummary::Jsonize() const {
  JsonValue payload;

  if (m_availabilityDomainHasBeenSet) {
    payload.WithString("availabilityDomain", m_availabilityDomain);
  }

  if (m_lagTimeInSecondsHasBeenSet) {
    payload.WithInteger("lagTimeInSeconds", m_lagTimeInSeconds);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutonomousDatabaseResourceStatusMapper::GetNameForAutonomousDatabaseResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_maintenanceTargetComponentHasBeenSet) {
    payload.WithString("maintenanceTargetComponent", m_maintenanceTargetComponent);
  }

  if (m_timeDataGuardRoleChangedHasBeenSet) {
    payload.WithString("timeDataGuardRoleChanged", m_timeDataGuardRoleChanged.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeDisasterRecoveryRoleChangedHasBeenSet) {
    payload.WithString("timeDisasterRecoveryRoleChanged", m_timeDisasterRecoveryRoleChanged.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeMaintenanceBeginHasBeenSet) {
    payload.WithString("timeMaintenanceBegin", m_timeMaintenanceBegin.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_timeMaintenanceEndHasBeenSet) {
    payload.WithString("timeMaintenanceEnd", m_timeMaintenanceEnd.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
