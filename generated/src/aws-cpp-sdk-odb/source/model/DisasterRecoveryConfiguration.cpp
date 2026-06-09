/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DisasterRecoveryConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

DisasterRecoveryConfiguration::DisasterRecoveryConfiguration(JsonView jsonValue) { *this = jsonValue; }

DisasterRecoveryConfiguration& DisasterRecoveryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("disasterRecoveryType")) {
    m_disasterRecoveryType = DisasterRecoveryTypeMapper::GetDisasterRecoveryTypeForName(jsonValue.GetString("disasterRecoveryType"));
    m_disasterRecoveryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isReplicateAutomaticBackups")) {
    m_isReplicateAutomaticBackups = jsonValue.GetBool("isReplicateAutomaticBackups");
    m_isReplicateAutomaticBackupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isSnapshotStandby")) {
    m_isSnapshotStandby = jsonValue.GetBool("isSnapshotStandby");
    m_isSnapshotStandbyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeSnapshotStandbyEnabledTill")) {
    m_timeSnapshotStandbyEnabledTill = jsonValue.GetString("timeSnapshotStandbyEnabledTill");
    m_timeSnapshotStandbyEnabledTillHasBeenSet = true;
  }
  return *this;
}

JsonValue DisasterRecoveryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_disasterRecoveryTypeHasBeenSet) {
    payload.WithString("disasterRecoveryType", DisasterRecoveryTypeMapper::GetNameForDisasterRecoveryType(m_disasterRecoveryType));
  }

  if (m_isReplicateAutomaticBackupsHasBeenSet) {
    payload.WithBool("isReplicateAutomaticBackups", m_isReplicateAutomaticBackups);
  }

  if (m_isSnapshotStandbyHasBeenSet) {
    payload.WithBool("isSnapshotStandby", m_isSnapshotStandby);
  }

  if (m_timeSnapshotStandbyEnabledTillHasBeenSet) {
    payload.WithString("timeSnapshotStandbyEnabledTill", m_timeSnapshotStandbyEnabledTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
